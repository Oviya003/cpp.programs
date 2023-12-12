#include<iostream>//min and max using function in an array
using namespace std;
void getminmax(int arr[],int n)
{
  int max=arr[0],min=arr[0];
  for(int i=0;i<n;i++)
  {
    if(max<arr[i])
      max=arr[i];
    if(min>arr[i])
      min=arr[i];
  }
  cout<<"maximum="<<max<<"\n";
  cout<<"minimum="<<min;
}
int main()
{
  int arr[]={2,3,4,5,6};
  int n=5;
  getminmax(arr,n);
  return 0;
}
