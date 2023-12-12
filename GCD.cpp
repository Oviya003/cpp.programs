#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,gcd;
	cout<<"enter the two numbers"<<endl;
	cin>>n1>>n2;
	for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			gcd=i;
		}
		i++;
	}
		cout<<"the gcd ="<<gcd;
}
