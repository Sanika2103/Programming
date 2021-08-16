#include <iostream>

using namespace std;

int main()
{
    int n,a,last,first;
    cin>>n;
    int count =0;
    while(n--){
        cin>>a;
       last = a%10;
       for(first=a;first>=10;first=first/10);
       int sum = first + last;
       cout<< sum<<endl; 
    }
    return 0;
}
