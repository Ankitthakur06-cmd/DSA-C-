#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int m = n;
    int mask = 0;

    while(m!=0){

        mask = (mask<<1)|1;
        mask = mask>>1;
    }
    int ans = (~n)&mask;
    return ans;
    return 0;
}