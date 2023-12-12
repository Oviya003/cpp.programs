#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the number:\n";
  cin>>n;
  if(n==0)
    cout<<"you entered 0";
  else if(n>=0)
    cout<<"+ve";
  else
    cout<<"-ve";
  return 0;
}
