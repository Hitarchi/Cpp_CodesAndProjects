#include<iostream.h>
using namespace std;

main()
{
  int num, count, temp;
  cout<<"Enter number : ";
  cin>>num;
  
  temp = num;
  while(temp /= 10) 
  {
    count++; 
  }
  cout<<"Total digits are : "<<count<<endl;
}
