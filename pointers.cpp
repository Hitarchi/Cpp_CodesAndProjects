#include<iostream.h>
using namespace std;
int main()
{
  int var = 5;
  cout<<&var<<endl;
  cout<<*&var<<endl;
  
  int *p;
  p = &var;
  cout<<p<<endl;
  cout<<&p<<endl;
  
  
}
