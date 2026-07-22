#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){

    // base case
    if(n == 1||n == 0){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return true;
    }
    bool ans = isSorted(arr+1,n-1);
    return ans;

}
int getSum(int arr[],int n){

    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int remainingPart = getSum(arr + 1,n - 1);
    int sum = arr[0]+remainingPart;
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[100];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    // if(isSorted(arr,n)&1){
    //     cout<<"Sorted";
    // }
    // else{
    //     cout<<"Not sorted";
    // }
    int sum = getSum(arr,n);
    cout<<sum;

    
    return 0;
}