#include <algorithm>
#include <array>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // ===========================
  // 1. Declaration and Initialization
  // ===========================

  // Declaring and initializing an array with 5 elements
  array<int, 5> arr = {10, 12, 14, 16, 25};
  cout << "Element at index 2: " << arr[2] << endl;  // Output: 14

  // Getting the size of the array
  cout << "Size of array: " << arr.size() << endl;  // Output: 5

  // ===========================
  // 2. Using fill() to assign a single value to all elements
  // ===========================

  array<int, 4> A;
  A.fill(7);  // Sets all elements to 7

  cout << "Filled array: ";
  for (int e : A) {
    cout << e << " ";  // Output: 7 7 7 7
  }
  cout << endl;

  // ===========================
  // 3. Binary Search
  // ===========================

  array<int, 5> B = {5, 2, 8, 1, 4};
  sort(B.begin(), B.end());  // Sorting in ascending order

  cout << "Is 1 present in the array? " << boolalpha
       << binary_search(B.begin(), B.end(), 1) << endl;  // Output: true

  // ===========================
  // 4. Finding Minimum and Maximum Elements
  // ===========================

  array<int, 5> C = {5, 2, 8, 1, 4};

  cout << "Minimum element: " << *min_element(C.begin(), C.end())
       << endl;  // Output: 1
  cout << "Maximum element: " << *max_element(C.begin(), C.end())
       << endl;  // Output: 8

  // ===========================
  // 5. Safe Access with at()
  // ===========================

  cout << "Element at index 4: " << C.at(4) << endl;  // Output: 4
  // Uncommenting the next line will throw an out_of_range exception
  // cout << C.at(10) << endl;

  // ===========================
  // 6. Reverse Iteration
  // ===========================

  array<int, 5> D = {5, 2, 8, 1, 4};
  cout << "Array in reverse order: ";
  for (auto it = D.rbegin(); it != D.rend(); ++it) {
    cout << *it << " ";  // Output: 4 1 8 2 5
  }
  cout << endl;

  // ===========================
  // 7. Using std::array in 2D Arrays
  // ===========================

  array<array<int, 3>, 3> mat = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};

  cout << "2D Array Output:" << endl;
  for (const auto& row : mat) {
    for (int x : row) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}
