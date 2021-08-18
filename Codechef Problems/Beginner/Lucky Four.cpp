#include <iostream>

using namespace std;
int four(int a){
     int count =0;
    while(a>0){
         if( a%10 ==4)
         count++;
        a/=10;
    }
    return count;
}
int main()
{
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        cout<<four(a)<<endl;
    }
    return 0;
}