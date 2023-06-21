#include<iostream.h>
using namespace std;
int main()
{
  string text = "Hello";
  char ch = text[0];
  char characters = "Hello World";
  
  cout<<characters<<endl;
  
  cout<<characters[0]<<endl;
  cout<<*(characters)<<endl;
  cout<<characters[1]<<endl;
  cout<<*(characters+1)<<endl;
  
  char * p = characters;
  cout<<p[0]<<endl;
  cout<<*p<<endl;
  
  cout<<p[1]<<endl;
  cout<<*(p+1)<<endl;
  
  string text1 = "Hey";
  const char text2 = text1.c_str();
  cout<<text2<<endl;
  
  char array[] = "sample text";
  string test = array;
  cout<<test<<endl;
  
}
