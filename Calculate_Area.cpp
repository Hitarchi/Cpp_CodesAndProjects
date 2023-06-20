#include<iostream.h>
#define PI 3.14
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaRectangle(double, double);
double areaSquare(double);
double areaTriangle(double, double);

int main ()
{
  int choice;
  char cont;
  
  do{
    initMenu();
    cin>>choice;
    
    cout<<"Do you want to continue (Y/N)?"<<endl;
    cin>>cont;
  }while(cont == "Y" | cont == "y" );
  
  return 0;
}

void initMenu() 
{
  cout<<"Select 1 if you want to calulate area of Circle"<<endl;
  cout<<"Select 2 if you want to calulate area of Rectangle"<<endl;
  cout<<"Select 3 if you want to calulate area of Square"<<endl;
  cout<<"Select 4 if you want to calulate area of Triangle"<<endl;
}

int menuDecision (ch)
{
  doubble r,s,b,h;
  switch(ch) 
  {
    case 1 :
      cout<<"Enter the radius : "<<endl;
      cin>>r;
      areaCircle(r);
      break;
    case 2 :
      cout<<"Enter width and height of the rectangle : "<<endl;
      cin>>b>>h;
      areaRectangle(b,h);
      break;
    case 3 :
      cout<<"Enter side of square : "<<endl;
      cin>>s;
      areaSquare(s);
      break;
    case 4 :
      cout<<"Enter base and height of the triangle"<<endl;
      cin>>b>>h;
      areaTriangle(b,h);
      break;
    default :
      cout<<"You've made a wrong choice"<<endl;
  }
}

double areaCirlce (r) 
{
  double result = PI * r * r;
  cout<<"Area of the circle is : "<<result<<endl;
  return result;
}

double areaRectangle(b,h) 
{
  double result = b * h;
  cout<<"Area of rectangle is : "<<result<<endl;
  return result;
}

double areaSquare(s) 
{
  double result = s * s;
  cout<<"Area of Square is : "<<result<<endl;
  return result;
}

double areaTriangle(b,h)
{
  double result = (1/2) * b * h;
  cout<<"Area of triangle is : "<<result<<endl;
  return result;
}
