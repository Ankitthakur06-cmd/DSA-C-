#include<iostream>
using namespace std;

int fact(int n){

    // base case
    if(n == 0)
    return 1;

    int small = fact(n-1);
    int big = n*small;

    return big;
    
}
int countstair(long long n){
    // base case
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    // Recursive relation
    int ans = countstair(n-1)+countstair(n-2);
    return ans;
}
int power(int n){
    // base case
    if(n == 0){
        return 1;
    }

    int small = power(n-1);
    int big = 2*small;

    return big;
}
// int print(int n){
//     // base case
//     if(n == 0){
//         return ;
//     }
//     cout<<n<<endl;
//     // Recursive relation --> Tail recursion--> output n n-1 ...
//     // Head recursion print before cout --> output n,n+1,n+2....
//     int ans = print(n-1);
//     return ans; 
// }
int fib(int n){
    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    // recursive relation
    int ans = fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    // int ans = fact(n);
    // cout<<ans;
    int ans = countstair(n);
    cout<<ans;
    
    return 0;
}