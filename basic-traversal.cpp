#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int arr[4] = {14 , 21 , 28 , 35};

  // C programming style loop

  for(int i = 0; i < 4; ++i) {
    cout << arr[i] << endl;
  } 
  // C++ loops
  // for(int value : arr) {
  //   cout << value << endl;
  // }
  return 0;
}