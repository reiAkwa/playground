#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int solveHistogram(vector<int> heights) {             //输入一行的高度
    int maxArea=0;//我还没有开拓

    stack<int> st;//栈
    for(int i=0;i<=heights.size();i++){
            int currentHeight=(i==heights.size())?0:heights[i];     //在最后添加一个元素保证所有元素都弹出

    while(!st.empty()&&currentHeight<heights[st.top()]){    //准备弹出栈顶元素
            int height=heights[st.top()];
            st.pop();                         //我来，我记录，我弹出，我开拓

    int width=(st.empty())?i:(i-st.top()-1);    //计算宽度为右减左。如果栈为空，左元素认为是-1
    maxArea=max(maxArea,width*height);//我将更新最大值

    }
    st.push(i);//待入栈元素入栈
    }

    return maxArea;
}
int main() {
    int m, n;
    cin >> m >> n;   //先行后列
    vector<vector<int>> grid(m, vector<int>(n));   //读取开拓地。竖m个（行），横n格（列）

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];             //读取。按照外层m内层n快，因为同一个m下的n在内存结构里是一起的

    vector<int> heights(n, 0);  //创建数组记录当前行的高度，使用单调栈计算最大面积
    int answer = 0;                    //存储最大答案

    for(int i = 0; i < m; i++) {              //遍历所有行。从第一行到最后一行依次记录第i行的高度数组.n代表n列
        // 更新高度数组：遇到1则累加1，遇到0则直接为0.证明下面塌了
        for(int j = 0; j < n; j++) {
            if(grid[i][j] == 1) {
                heights[j] ++;
            } else {
                heights[j] =0;
            }
        }                                                 //先计算第一行。第二行由上一态+本行算。第三行由上一态+本行算。
        // 计算当前行最大矩形
        answer = max(answer, solveHistogram(heights));
    }

    cout << answer << endl;
    return 0;
}
