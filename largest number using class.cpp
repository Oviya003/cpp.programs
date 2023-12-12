#include<iostream>
using namespace std;
class largest
{
  private:
  int n1,n2,n3;
  public:
  void read()
  {
    cout<<"enter the three numbers:\n";
    cin>>n1>>n2>>n3;
  }
  void print();
};
void largest::print()
{
  if(n1>n2&&n1>n3)
  {
    cout<<"n1 is largest";
  }
  else if(n2>n1&&n2>n3)
  {
    cout<<"n2 is largest";
  }
  else
  {
    cout<<"n3 is largest";
  }
}
int main()
{
  largest l;
  l.read();
  l.print();
}
