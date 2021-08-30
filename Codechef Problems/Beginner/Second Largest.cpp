#include <iostream>

using namespace std;

int main()
{
    int n;
    long a,b,c;
   cin>>n;
    while(n--){
       cin>>a>>b>>c;
       if(a>=b && b>=c || c>=b && b>=a){
           cout<<b<<endl;
           }
           else if(b>=a && a>=c || c>=a && a>=b){
               cout<<a<<endl;
           }
           else{
              cout<<c<<endl;     
           }
      
    }
    return 0;
}
