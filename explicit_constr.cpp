#include <iostream>
using namespace std;
class explicit_constr
{
private:
  int num1;

public:
  explicit_constr(int num)
  {
    cout << num;
    cout << "\n This is explicit constructor EXAMPLE";
  }
};
int main()
{
  explicit_constr ec = explicit_constr(3);
  return 0;
}