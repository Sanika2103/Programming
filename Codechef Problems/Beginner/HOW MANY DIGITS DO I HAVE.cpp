#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
   cin>>n;
   int count =0;
   while(n!=0){
       n%10;
       count++;
       n/=10;
   }
   if(count==1){
       cout<<"1"<<endl;
   }
   else if(count==2){
       cout<<"2"<<endl;
   }
   else if(count==3){
       cout<<"3"<<endl;
   }
   else{
       cout<<"More than 3 digits\n";
   }
	return 0;
}
