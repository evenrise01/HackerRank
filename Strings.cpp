//https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?h_r=next-challenge&h_v=zen

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  int temp;
  cin >> a >> b;

    string c = a+b;
    cout << a.length() << " " << b.length() << endl;
    cout << c << endl;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;
    return 0;
}
