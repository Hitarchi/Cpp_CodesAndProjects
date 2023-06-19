#include<iostream.h>

using namespace std;

main()
{
  int num1, num2;
  beginning:
  
  cout<<"Enter first number : "<<endl;
  cin >> num1;
  
  cout<<"Enter second number : "<<endl;
  cin >> num2;
  
  cout<<"Which operation do you want to perform?"<<endl;
  cout<<"Press 1 to add"<<endl;
  cout<<"Press 2 to subtract"<<endl;
  cout<<"Press 3 to multiply"<<endl;
  cout<<"Press 4 to divide"<<endl;
  
  int choice;
  cin>>choice;
  
  switch(choice)
  {
    case '1' :
      cout<<num1<< "+" <<num2<< "=" <<(num1 + num2)<<endl;
      break;
    case '2' :
      cout<<num1<< "-" <<num2<< "=" <<(num1 - num2)<<endl;
      break;
    case '3' :
      cout<<num1<< "*" <<num2<< "=" <<(num1 * num2)<<endl;
      break;
    case '4' :
      cout<<num1<< "/" <<num2<< "=" <<(num1 / num2)<<endl;
      break;
    default :
      cout<<"You made a wrong choice"<<endl;
      break;
    }
  char decision;
  cout<<"Do you want to continue (Y/N)?"<<endl;
  cin>>decision;
  
  if(decision == 'Y' || decision == 'y')
  {
    goto beginning; 
  }
}
