#include <iostream>

using namespace std;
class Department {

  public:
    Department() {
      cout << "Constructor Invoked for Department class" << endl;
    }
    
    ~Department() {
      cout << "Destructor Invoked for Department class" << endl;
    }
};
class Employee {

  public:
    Employee() {
      cout << "Constructor Invoked for Employee class" << endl;
    }
    
    ~Employee() {
      cout << "Destructor Invoked for Employee class" << endl;
    }
};
int main(void) {
  Department d1; //creating an object of Department  
  Employee e2; //creating an object of Employee
  return 0;
} 