#include <bits/stdc++.h>

struct Event {
  int time;
  char team;
  int index;
};

std::unordered_map<char, std::unordered_map<int, int>> players;
std::vector<Event> events;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string host;
  std::string guest;
  std::cin >> host >> guest;

  int n = 0;
  std::cin >> n;

  bool has_red_card = false;
  for (int i = 0; i < n; ++i) {
    int time;
    char team;
    int index;
    char card;
    std::cin >> time >> team >> index >> card;

    if (card == 'y') {
      ++players[team][index];
      if (players[team][index] >= 2) {
        events.push_back(Event{time, team, index});
      }
    } else if (card == 'r') {
      has_red_card = true;
      players[team][index] += 2;
      events.push_back(Event{time, team, index});
    }
  }

  std::sort(events.begin(), events.end(), [](Event lhs, Event rhs) {
    if (lhs.time != rhs.time) {
      return lhs.time < rhs.time;
    } else {
      if (rhs.team != lhs.team) {
        return lhs.team == 'h';
      } else {
        return lhs.index > rhs.index;
      }
    }
  });

  if (!has_red_card) {
    std::cout << "No Red Card" << '\n';
  } else {
    for (std::vector<Event>::iterator it = events.begin(); it != events.end(); ++it) {
      std::cout << (it->team == 'h' ? host : guest) << ' ' << it->index << ' ' << it->time << '\n';
    }
  }

  return 0;
}
