#include <iostream>
using namespace std;
int main() {
  cout << "please enter number upto which you wnat * pattern:";
  int n;
  cin >> n;
  int i = 0;
  while (i <= n) {
    int j = 0;
    while (j < i) {
      cout << "*";
      j++;
    }
    cout << "\n";
    i++;
  }
  return 0;
}