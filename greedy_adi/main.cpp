// 【问题描述】

//          阿迪和他的朋友一共k个人，分吃n颗糖，每颗糖只能分给他们中的某个人或者丢弃。

//          人的编号从1到k，阿迪是第1号。阿迪将选择一个正整数x来分糖，他先给自己x颗，然后给下一个人x颗，再给第三个人x颗，如此继续，循环往复。剩余的（不能整除x的部分）将会丢弃。

//          阿迪不能选择大于M的x去分配，因为这样会被别人认为太贪心（嘿嘿，其实他真的很贪心）。还有，他不能选择一个小的x，使得有人会收到糖的次数超过D，这样会被认为分得太慢。

//          阿迪想请你找出一个有效的x，保证让阿迪能得到最多的糖。
// 【输入形式】

//          输入为一行4个整数n、k、M和D，分别表示糖的数量、人的数量、每次能分配的最大数量、人可以收到糖的最大次数。

// 【输出形式】

//          输出为一个整数，表示阿迪自己能收到的最大可能的糖的颗数。
// 【样例输入1】

// 20 4 5 2

// 【样例输出1】

// 8

// 【样例输入2】

// 30 9 4 1

// 【样例输出2】

// 4

// 【样例说明】

//       在第一个样例中，阿迪应该选择x=4，4颗给自己，4颗给第2个人，4颗给第3个人，4颗给第4个人，剩下的4颗给他自己。没有人收到糖的次数超过2，而他自己得到了8颗糖。     


// #include <bits/stdc++.h>

// int person[10005] = {};

// int main() {
//   std::ios::sync_with_stdio(false);
//   std::cin.tie(nullptr);

//   int n = 0;
//   int k = 0;
//   int M = 0;
//   int D = 0;
//   std::cin >> n >> k >> M >> D;

//   int most = 0;
//   for (int x = 0; x <= M; ++x) {
//     int n_ = n;
//     std::memset(person, 0 ,sizeof(person));
//     const int maxAllocCount = k * D;
//     int count = 0;
//     int p = 1;
//     while (n_ % x > 0) {
//       if (count > maxAllocCount) {
//         break;
//       }

      
//       n_ -= n_ / x;
//       ++count;
//       if (p == k) {
//         p = 1;
//       } else {
//         ++p;
//       }
//     }
//   }

//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, M, D;
    cin >> n >> k >> M >> D;

    long long max_candies = 0;

    for (long long x = 1; x <= M; ++x) {
        long long rounds = min(D, n / (k * x));
        long long total_distributed = rounds * k * x;
        long long remaining = n - total_distributed;
        long long adi_candies = rounds * x + min(x, remaining);
        max_candies = max(max_candies, adi_candies);
    }

    cout << max_candies << endl;
    return 0;
}
