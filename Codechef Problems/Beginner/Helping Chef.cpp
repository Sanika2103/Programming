#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
      if(a<10){
        cout<<"Thanks for helping Chef!"<<endl;    
      }
       else{
           cout<<"-1"<<endl;
       }     
    }
    return 0;
}
