#include <iostream>

using namespace std;
int fact(int a){
    int fac =1;
    while(a>1){
        fac = a*fact(a-1);
        return fac;
    }
    return fac;
}
int main()
{
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        cout<<fact(a)<<endl;
        
    }
    return 0;
}
