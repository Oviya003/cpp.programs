#include<iostream>
using namespace std;
int main()
{
	int r,n,temp,a;
	cout<<"enter the number";
	cin>>n;
	temp=n;
	r=0;
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	cout<<r;
	if(temp==r)
	cout<<"the number is a palindrome"<<endl;
	else
	cout<<"the number is not a palindrome"<<endl;
	return 0;
}
