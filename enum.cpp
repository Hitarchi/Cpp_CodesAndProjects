#include<iostream.h>
using namespace std;

enum months{January = 1, February, March, April, May, June, July, August, September, October, November, December}; 

string getMonth(months);
main()
{
  cout<<"Enter the month"<<endl;
  int i;
  cin>>i;
  cout<<getMonth(months(i))<<endl;
  
  return 0;
}

string getMonth(months i)
{
  switch(i) 
  {
    case January :
      cout<<"Hey! It's January!"<<endl;
        break;
    case February :
      cout<<"Hey! It's February!"<<endl;
        break;
    case March :
      cout<<"Hey! It's March!"<<endl;
        break;
    case April :
      cout<<"Hey! It's April!"<<endl;
        break;
    case May :
      cout<<"Hey! It's May!"<<endl;
        break;
    case June :
      cout<<"Hey! It's June!"<<endl;
        break;
    case July :
      cout<<"Hey! It's July!"<<endl;
        break;
    case August :
      cout<<"Hey! It's August!"<<endl;
        break;
    case September :
      cout<<"Hey! It's September!"<<endl;
        break;
    case October :
      cout<<"Hey! It's October!"<<endl;
        break;
    case November :
      cout<<"Hey! It's November!"<<endl;
        break;
    case December :
      cout<<"Hey! It's December!"<<endl;
        break;
    default :
      cout<<"You've made a wrong choice"<<endl;
  }
}
