// Insertion sort
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=1;i<n;i++){
      int pivot=a[i];
      int j=i-1;
       while(a[j]>pivot && j>=0){
             a[j+1]=a[j]; 
             j--;
           }
       a[j+1]=pivot;
   }
  
  for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
    return 0;
}
