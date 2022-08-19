#include <iostream>
#include <string>
using namespace std;
class add
{
   int num1,num2;
  
   void input(){
   cout<<"Enter num1 : "; 
   cin>>num1;
   cout<<"\nEnter num2 : "; 
   cin>>num2;
}
  
public:
void displaySum()
{
   input();
   cout<<"\nSum of the two numbers = "<<num1+num2<<endl;
}
  
};
int main()
{
   add s;
   s.displaySum();
}