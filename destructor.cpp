#include <iostream>
using namespace std;
class student
{
  int num1;

public:
  student(int pop)
  {
    num1 = pop;
  }
  void display()
  {
    cout << "num1==>" << num1;
  }
  ~student()
  {
    cout << "\n This is a DESTRUCTOR";
  }
};
int main()
{
  student st(2);
  st.display();
  return 0;
}