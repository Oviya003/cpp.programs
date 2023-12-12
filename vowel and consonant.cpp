#include<iostream>
using namespace std;
int main()
{
char c,upper_case,lower_case;
cout<<"enter a word:\n";
  cin>>c;
  upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    lower_case=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    if(lower_case||upper_case)
      cout<<"vowel";
  else
    cout<<"consonant";
  return 0;
}
