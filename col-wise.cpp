#include <array>
#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  constexpr int r = 3, c = 3;
  array<array<int, c>, r> matrix = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
  for (int j = 0; j < c; ++j) {
    for (int i = 0; i < r; ++i) {
      cout << "matrix[" << i << "][" << j << "] : " << matrix[i][j] << endl;
    }
  }
  return 0;
}
