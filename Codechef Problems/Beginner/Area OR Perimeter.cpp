#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float l,b,area,peri;
    cin>>l>>b;
    area = l*b;
    peri = 2*(l+b);
    if(area>peri){
        cout<<"Area\n"<<area<<endl;
    }
    else if(peri>area){
         cout<<"Peri\n"<<peri<<endl;
    }
    else{
        cout<<"Eq\n"<<area<<endl;
    }
	return 0;
}
