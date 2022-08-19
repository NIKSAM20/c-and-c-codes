#include<iostream>
using namespace std;

class Employee {
  public:
    int age;
  
    Employee() {
        age = 50;
    }
};

int main() {
  Employee e1;
  cout << e1.age;
  return 0;
}
