#include<iostream.h>
using namespace std;

void multiplyBy(int *, int);
void multiplyByArray(int *, int, int);
int main()
{
   int a = 5;
   multiplyBy(&a, 5);
  
  cout<<a<<endl;
  cout<<endl;
  
  int array[10];
  for(int i = 0;i<sizeof(array)/sizeof(array[10]);i++)
  {
    array[i] = i; 
  }
  
  multiplyByArray(array,5,sizeof(array)/sizeof(array[10]));
  
  for(int i=0;i<sizeof(array)/sizeof(array[10]);i++)
  {
    cout<<"array["<<i<<"] = "<<array[i]<<endl; 
  }
  return 0;
}

void multiplyBy(int *var, int amount)
{
  *var = *var * amount;
}
void multiplyByArray (int *array, int amount, int sizeOfArray)
{
   while(sizeOfArray--)
     array[sizeOfArray] *= amount;
}
