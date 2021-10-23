#include <iostream>

using namespace std;

int main()
{
    int t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        cout<<(a/x)+(b/y)<<endl;
    }
}
