#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cin>>a>>b;
	cin>>ch;
	switch(ch)
	{
		case '+':
			{
				cout<<"sum = "<<a+b;
				break;
			}
		case '*':
			{
				cout<<"sum = "<<a*b;
				break;
			}
		default:
			{
				cout<<"invalid operator";
			}
	}
}
