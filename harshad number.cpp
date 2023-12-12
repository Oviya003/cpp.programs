#include<iostream>
using namespace std;
int main()
{
  int sum=0,remainder,n;
  cout<<"enter the number:\n";
  cin>>n;
  while(n!=0)
  {
    remainder=n%10;
    sum=sum+remainder;
    n=n/10;
  }
  if(n%sum==0)
   cout<<"harshad number";
  else
    cout<<"not harshad number";
}
