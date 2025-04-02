#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int arr[3][4] = { 
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
  };
  // 1  2  3  4  |  5  6  7  8  |  9  10  11  12
  // Address of arr[i][j] = Base Address+(i×Columns+j)×size of each element
  return 0;
}