#include <iostream>

using namespace std;
int sumDigits(int a){
    int sum =0;
    while(a!=0){
        int rem = a%10;
        sum+=rem;
         a/=10;
    }
    return sum;
}
int main()
{
    int n,a;
    int sum = 0;
    cin>>n;
    while(n--){
        cin>>a;
      cout<<sumDigits(a)<<endl;
     
    } 
    return 0;   
}
