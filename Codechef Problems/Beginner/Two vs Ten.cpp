#include <iostream>

using namespace std;

int main()
{
   int n,a;
   cin>>n;
   while(n--){
       cin>>a;
      if(a%10==0){
          cout<<"0"<<endl;
      }
      else if(a%5==0){
          cout<<"1"<<endl;
      }
      else{
          cout<<"-1"<<endl;
      }
   }

    return 0;
}
