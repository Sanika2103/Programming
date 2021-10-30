#include <iostream>
#include <cmath>
using namespace std;
//int a[100];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        
     for(int i=0;i<=n-2;i++){
         int temp = i;
         int min;
         for(int j=i+1;j<n;j++){
            if(a[temp]>a[j]) {
               min =j; 
            }
            
            }
            swap(a[temp],a[min]);
     } 
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
    return 0;
}
