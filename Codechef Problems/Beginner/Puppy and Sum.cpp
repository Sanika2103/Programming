#include <iostream>

using namespace std;
int sum(int a, int b){
    int s=b;
    while(a--){
       s=((s*(s+1))/2);
        }
    return s;
}
int main()
{
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<sum(a,b)<<endl;
        }

    return 0;
}