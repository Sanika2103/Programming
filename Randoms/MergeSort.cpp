#include <iostream>
#include <cmath>
using namespace std;
void merge(int a[],int mid,int s,int l){
   int n1 = mid-s+1;
   int n2 = l-mid;
   int arr[n1];
   int b[n2];
   for(int i=0;i<n1;i++){
      arr[i] = a[l+i];
   }
   for(int i=0;i<n2;i++){
      b[i] = a[mid+1+i];
   }
   
   int i=0;
   int j=0;
   int k = l;
   while(i<n1 && i>=0){
    if(arr[i]<b[j]){
       a[k] = arr[i];
       k++;
       i++;
    } 
    else{
       a[k]= b[j] ;
       k++;
       j++;
    }
   }
   
}
void mergesort(int a[],int s,int l){
   if(s>l) return;
   int mid = (s+l)/2;
   mergesort(a,s,mid);
   mergesort(a,mid+1,l);
   merge(a,mid,s,l);
}
int main()
{
   int n;
   cin>>n;
   int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
  }
  mergesort(a,0,n-1);
  for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
    return 0;
}
