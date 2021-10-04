#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c,d;
    
    while(n-- && 0<n<=100){
        cin>>a>>b>>c>>d;
        if(a<=b<=c<=d){
          int m = a+b+c;
          if(m<=d)
              cout<<"1"<<endl;
          else if(a+b <=d || b+c <=d || c+a <=d)
             cout<<"2"<<endl;
          else
              cout<<"3"<<endl;
          
         }
     }
    return 0;
}
