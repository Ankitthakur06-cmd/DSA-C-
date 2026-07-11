#include<iostream>
using namespace std;

// Counting problem
// Function Signature
// void printCounting(int n){
// // Function body
//     for(int i = 1;i<=n;i++){

//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// Prime or not

int isPrime(int n){

    for(int i = 2;i<n;i++){

        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

// nCr program
// int fact(int n){

//     int fact = 1;

//     for(int i = 1;i<=n;i++){

//         fact = fact*i;

//     }
//     return fact;
// }

// int nCr(int n,int r){

//     int num = fact(n);
//     int denom = fact(r)*fact(n-r);

//     return num/denom;
// }

// Even Odd function

// bool isEven(int a){

//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// Power function defining
// int power(){

//         int a,b;
//         cin>>a>>b;

//         int ans = 1;
//         for(int i = 1;i<=b;i++){

//             ans = ans*a;
//         }
//         return ans;
//     }


int main(){


    // Switch cases

    // int a,b;
    // cin>>a>>b;

    // char operation;
    // cin>>operation;

    // switch(operation){

    //     case '+':cout<<a+b<<endl;
    //     break;

    //     case '-':cout<<a-b<<endl;
    //     break;

    //     case '/':cout<<a/b<<endl;
    //     break;

    //     case '*':cout<<a*b<<endl;
    //     break;
    // }

    // int num = 2;
    // char ch = '3';
    // int a = 5;
    // char gh = '8';
    // cout<<endl;

    // switch(num){

    //     case 1: cout<<"First"<<endl;
    //             break;

    //     case 2: switch(ch){
    //         case '1': cout<<"One";
    //         break;
    //         case '3':cout<<"Three";
    //         break;

    //     }
    //             break;
        
    //     default: cout<<"It is default case"<<endl;



    // }


    // Functions

    // cout<<"Ans "<<power()<<endl;

    // int num;
    // cin>>num;

    // if (isEven(num)){
    //     cout<<"No is Even"<<endl;

    // }
    // else{
    //     cout<<"No is Odd"<<endl;
    // }

    // int n,r;
    // cin>>n>>r;

    // cout<<"Ans is "<<nCr(n,r)<<endl;

    // int n;
    // cin>>n;

    // printCounting(n);

    int n;
    cin>>n;

    if (isPrime(n)){
        cout<<"It is prime"<<endl;
    }
    else{
        cout<<"Not a prime no"<<endl;
    }
    
    return 0;
}