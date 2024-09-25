#include <iostream>
using namespace std;
int main() {
  char button;
  cout << "input a character:";
  cin >> button;
  switch (button) {
  case 'a':
    cout << "manoj" << endl;
    break;
  case 'b':
    cout << "raman" << endl;
    break;
  case 'c':
    cout << "vivek" << endl;
    break;
  case 'd':
    cout << "harsh" << endl;
  default:
    cout <<"no result found and am still learning more" << endl;
  }
  return 0;
}