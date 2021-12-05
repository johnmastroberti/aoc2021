#include <algorithm>
#include <numeric>
#include <ranges>
#include <vector>

int part1(std::vector<int> const &values) {
  // count the number of times values[i+1] > values[i]
  return std::transform_reduce(values.begin(), values.end() - 1,
                               values.begin() + 1, std::plus<>,
                               [](auto x, auto y) { return y > x ? 1 : 0 });
}

int main() {
  std::vector test = {199, 200, 208, 210, 200, 207, 240, 269, 260, 263};
  fmt::print("Test value: {}\n", part1(test));
}
