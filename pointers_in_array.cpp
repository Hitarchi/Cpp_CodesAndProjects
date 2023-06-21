#include<iostream.h>
using namespace std;

main()
{
  int a[3] = {10,20,30};
  short int zm;
  int * const p = &a[0];
  
  cout<<p<<endl;
  cout<<a<<endl;
  
  cout<<&a[0]<<endl;
  cout<<&a[1]<<endl;
  cout<<&a[2]<<endl;
  
  cout<<endl<<endl;
  
  cout<<a<<endl;
  cout<<a+1<<endl;
  cout<<a+2<<endl;
  
  cout<<endl<<endl;
  
  cout<<*a<<endl;
  cout<<*(a+1)<<endl;
  cout<<*(a+2)<<endl;
}
