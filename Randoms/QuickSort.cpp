
#include <iostream>
#include <cmath>
using namespace std;
int partition(int a[],int s,int l){
    int i=s;
    int j=l;
    int pivot= a[s];
    while(i<j){
    while(pivot>=a[i] && i<=l) i++;
    while(pivot<a[j] &&j>=0) j--;
    if(i<j){
        swap(a[i],a[j]);
    }
    if(i>j){
        swap(a[s],a[j]);
    }    
    }
    return j;
}
void quicksort(int a[],int s,int l){
   if(s>l) return;
   int p = partition(a,s,l) ;
   quicksort(a,s,p-1);
   quicksort(a,p+1,l);
   
}
int main()
{
   int n;
   cin>>n;
   int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
  }
  quicksort(a,0,n-1);
  for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
    return 0;
}
