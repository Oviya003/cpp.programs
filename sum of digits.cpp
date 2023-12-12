#include<iostream>
using namespace std;
int main()
{
  int sum=0,n,remainder;
  cout<<"enter the digits:\n";
  cin>>n;
  while(n!=0)
  {
    remainder=n%10;
    sum=sum+remainder;
    n=n/10;
  }
  cout<<"sum of the digits:"<<sum;
  return 0;
}
