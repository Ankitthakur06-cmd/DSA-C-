#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int ans = 0;
    int INT_MAX = 2^31 - 1;
    int INT_MIN = 2^31;

    while(n!=0){

        int digit = n%10;

        if((ans>INT_MAX/10) ||(ans<INT_MIN/10) ){
            return 0;
        }
        int ans = (ans * 10) + digit;
        n = n/10;
        cout<<ans;
        
        
    }
    return ans;
    
    return 0;
}