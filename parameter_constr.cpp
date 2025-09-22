#include <iostream>
using namespace std;
class parameter_constr
{
private:
  int num;

public:
  parameter_constr(int num1)
  {
    cout << "num1=" << num1;
    cout << "\n this is a parameterized constructor";
  }
};
int main()
{
  parameter_constr pc(8);
  cout << "\n\n";
  parameter_constr pcc(88);
  return 1;
}