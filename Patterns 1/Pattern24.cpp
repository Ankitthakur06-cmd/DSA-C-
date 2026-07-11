#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j = j + 1;
        }
        int star = i - 1;
        while(star){
            cout<<"*";
            star = star - 1;
        }

        int star2 = i -1;
        while(star2){

            cout<<"*";
            star2 = star2 - 1;
        }

        int value = n;
        while(value<=n-i-j+2){

            cout<<value;
            value = value - 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}