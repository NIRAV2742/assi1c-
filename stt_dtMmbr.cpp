#include <iostream>
using namespace std;
class statik
{
public:
  static int num;

public:
  void print()
  {
    cout << "num==>" << num;
    cout << "\nThis is a STATIC Data Member function";
  }
};
int statik::num = 9;
int main()
{
  static statik st;
  st.print();
  return 0;
}