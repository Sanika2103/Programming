#include <iostream>

using namespace std;
int rev(int a){
    int sum=0;
    while(a>0){
         sum = sum*10 + a%10;
         a/=10;  
      } 
   return sum;
}
int main()
{
    int n,a;
    cin>>n;
   
    while(n--){
        cin>>a;
      
      cout<<rev(a)<<endl;
     } 
    return 0;   
}
