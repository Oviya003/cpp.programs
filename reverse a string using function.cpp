#include<iostream>//reverse a string using function
using namespace std;
void revstr(string str)
{
  int i,len;
  char temp;
  len=str.length();
  for(i=0;i<len/2;i++)
  {
    temp=str.at(i);
    str.at(i)=str.at(len-i-1);
    str.at(len-i-1)=temp;
  }
  cout<<"after reversing="<<str<<endl;
}
int main(){
  string str("train");
  cout<<str<<endl;
  revstr(str);
  return 0;
}
