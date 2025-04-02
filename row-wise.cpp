#include <iostream>
#include <array>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  constexpr int r = 3, c = 3;
  array<array<int, c>, r> matrix = {{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}};
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      cout << "matrix[" << i << "][" << j << "] : " << matrix[i][j] << endl;
    }
  }
  return 0;
}

// document.querySelector("#mw-content-text > table:nth-child(3) > tbody > tr:nth-child(2) > td:nth-child(1) > p > a:nth-child(13) > code")