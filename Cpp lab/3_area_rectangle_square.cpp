#include <iostream>
using namespace std;
int area(int);
int area(int, int);
int par(int);
int par(int, int);
int main() {
  int s, l, b;
  cout << "Enter side of a square:";
  cin >> s;
  cout << "Enter length and breadth of rectangle:";
  cin >> l >> b;

  cout << "area of square: " << area(s) << endl;
  cout << "parameter of square: " << par(s) << endl;
  cout << "area of rectangle: " << area(l, b) << endl;
  cout << "parametr of rectangle: " << par(l, b) << endl;
}
int area(int s) { return (s * s); }
int area(int l, int b) { return (l * b); }
int par(int s) {
  int par = 4 * s;
  return par;
}
int par(int l, int b) {
  int par = 2 * (l + b);
  return par;
}