#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;
ll x;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  auto ans = ll{0};
  while (cin >> s >> x) {
    if ("Stair" == s) {
      ans += x * 17;
    } else if ("Es" == s) {
      ans += 21 * x;
    }
  }
  cout << ans;

  return 0;
}