#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,d;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d;
        if(a==b && c==d){
            cout<<"YES"<<endl;
        }
        else if(a==c && b==d){
            cout<<"YES"<<endl;
        }
       else if(a==d && b==c){
            cout<<"YES"<<endl;
        }
       
       else{
           cout<<"NO"<<endl;
       } 
    }

    return 0;
}
