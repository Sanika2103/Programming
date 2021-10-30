#include <iostream>

using namespace std;
//int a[100];
void binarySearch(int a[],int l,int s,int key){
      if(s==l && key!=a[s]) cout<<"-1";
      int mid=(s+l)/2;
      if(a[mid]==key){
         cout<< mid; 
      }
      if(a[mid]<key){
          binarySearch(a,l,mid,key);
      }
      if(a[mid]>key){
          binarySearch(a,mid,s,key);
      
   }
   
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int key;
        cout<<"Enter an element\n";
        cin>>key;
        int s=0;
        int l=n-1;
        binarySearch(a,l,s,key);
    return 0;
}
