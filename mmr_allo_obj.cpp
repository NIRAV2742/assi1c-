#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // dynamically allocate object
    Student *s = new Student;

    s->name = "Nirav";
    s->age = 20;

    s->display();

    delete s; // deallocate object
    return 0;
}
