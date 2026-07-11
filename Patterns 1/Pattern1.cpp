#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // Row
    int i = 1;   
    while(i <=n){
        
        // Column
        int j = 1;
        while(j <= n){
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;

        i = i + 1;
    }

    return 0;
}