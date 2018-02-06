//Author: Maxwell Palmer
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int num1;
  int num2;
  int biggest;
  cout<<"Please enter a whole number:\n";
  cin>> num1;
  cout<<"Please enter another whole number:\n";
  cin>> num2;
  if (num1 > num2)
  {
  biggest = num1;
  }
  else
  {
  biggest = num2;
  }
  cout<<"Of those two numbers, the biggest is: ";
  cout<< biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
