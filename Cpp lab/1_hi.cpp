#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
  // without using namespace std;
  std::cout << "hi\n";
  std::cout << "Welcome.." << endl;

  // without using namespace std;
  cout << "please enter two numbers:";

  // declaration
  int a, b;
  cin >> a >> b;

  cout << "a=" << a << " b=" << b << endl;
  return 0;
}