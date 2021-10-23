#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int temp=0;
        while(n!=0){
            if(n%10==4){
            temp++;
            }
            n/=10;
        }
        cout<<temp<<endl;
    }
    return 0;
}
