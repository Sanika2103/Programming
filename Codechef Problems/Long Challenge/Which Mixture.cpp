#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b;

    while(n-- && 0<=n<=20){
        cin>>a>>b;
        if(a>0 && b>0)
          cout<<"Solution"<<endl;
        else if(a==0 && (a+b) >0)
          cout<<"Liquid"<<endl;
        else
           cout<<"Solid"<<endl;
    }
   
    return 0;
}