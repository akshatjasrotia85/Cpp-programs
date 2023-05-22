#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int it) {
  if (high >= low) {
    int mid = (low + high) / 2;
    if (arr[mid] == it)
      return mid;
    if (arr[mid] > it)
      return binarySearch(arr, low, mid - 1, it);
    else
      return binarySearch(arr, mid + 1, high, it);
  }
  return 1;
}

int main(void) {
  int n, arr[n];
  cout << "enter size of array:";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "enter arr[" << i + 1 << "]:";
    cin >> arr[i];
  }
  int it;
  cout << "enter element to find:";
  cin >> it;
  int result = binarySearch(arr, 0, n - 1, it);
  if (result == 1)
    cout << "Element is not present in array";
  else
    cout << "Element is present at index " << result + 1;
  return 0;
}
