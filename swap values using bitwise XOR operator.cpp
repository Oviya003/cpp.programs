#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter the two numbers:\n";
  cin>>a>>b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"after swapping:\n";
  cout<<"a="<<a<<"\n"<<"b="<<b;
}
