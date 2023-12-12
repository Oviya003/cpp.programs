#include<iostream>
using namespace std;
int prime(int);
int main()
{
  int n;
  cout<<"enter the number:\n";
  cin>>n;
  prime(n);
}
int  prime(int n)
{
  int i ,count=1;
  for(i=2;i<=n;i++)
  {
    if(n%i==0)
    {
      count++;
    }
  }
    if(count==2)
      cout<<"prime no";
    else
      cout<<"not prime number.";
  
  return 0;
}
