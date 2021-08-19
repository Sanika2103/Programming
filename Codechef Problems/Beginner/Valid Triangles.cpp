#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
      if(a+b+c==180){
        cout<<"YES"<<endl;    
      }
       else 
           cout<<"NO"<<endl;
      
    }
    return 0;
}
