#include <iostream>
using namespace std;

class Complex
{
  int r, i;

public:
  Complex(int r = 0, int i = 0)
  {
    this->r = r;
    this->i = i;
  }
  void print()
  {
    cout << "Value of r is " << r << endl;
    cout << "Value of i is " << i << endl;
    cout << r << " + i" << i << endl;
  }
  Complex operator+(Complex obj)
  {
    Complex res;
    res.r = r + obj.r;
    res.i = i + obj.i;
    return res;
  }
};

int main()
{
  Complex c = Complex(1, 2);
  c.print();
  Complex c1;
  c1.print();
  Complex c2 = c + c1;
  return 0;
}