#include <iostream>
using namespace std;
int linsrc(int arr[], int size, int item) {
  if (size >= 0) {

    if (item != arr[size - 1]) {
      linsrc(arr, size - 1, item);
      return 0;
    } else if (item == arr[size - 1]) {
      cout << "element found at " << size << "th position" << endl;
      linsrc(arr, size - 1, item);
    }
  }
  return 1;
}
int main() {
  int n;
  cout << "enter size of array:";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cout << "enter arr[" << i + 1 << "]:";
    cin >> arr[i];
  }
  int it;
  cout << "enter element to find:";
  cin >> it;

  if (linsrc(arr, n, it) > 0) {
  } else {
    cout << "element not found\n";
  }
  return 0;
}