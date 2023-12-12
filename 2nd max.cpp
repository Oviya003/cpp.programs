#include<iostream>
using namespace std;
int main()
{
   int i, arr[5], large, slarge;
   cout<<"Enter 5 Array Elements: ";
   for(i=0; i<5; i++)
      cin>>arr[i];
   large = arr[0];
   for(i=0; i<5; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }
   slarge = arr[0];
   for(i=0; i<5; i++)
   {
      if(slarge<arr[i])
      {
         if(arr[i]!=large)
            slarge = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<slarge;
   cout<<endl;
   return 0;
}
