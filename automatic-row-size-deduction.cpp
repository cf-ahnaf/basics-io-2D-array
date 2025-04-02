#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int arr[][4] = { 
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
  };

  // dynamic row size calculation
  int row = sizeof(arr) / sizeof(arr[0]);
  int col = sizeof(arr[0]) / sizeof(arr[0][0]);
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j) {
      cout << "arr[" << i << "][" << j << "] : " << arr[i][j] << endl;
    }
  }
  return 0;
}