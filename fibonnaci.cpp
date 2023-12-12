#include<iostream>
using namespace std;
int main()
{
  int i, n,t1=0,t2=1,next_term=0;
  cout<<"enter the number:\n";
  cin>>n;
  cout<<"fibonacci series:";
  cout<<t1<<" "<<t2<<" ";
  for(i=2;i<n;i++)
  {
    next_term=t1+t2;
    cout<<next_term<<" ";
    t1=t2;
    t2=next_term;
  }
}
