#include<iostream>
using namespace std;
int main()
{
	int m=0,i,n;
	cout<<"enter the number";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		m=m+1;
	}
	if(m==0)
	cout<<"the number is a prime";
	else
	cout<<"the number is not prime";
	return 0;
}
