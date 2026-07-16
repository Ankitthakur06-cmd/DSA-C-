#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;
    // int *arr= new int[n];

    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int ans = getsum(arr,n);
    // cout<<"Ans is "<<ans;

    int **arr = new int*[n];
    for(int i = 0;i<n;i++){
        arr[i] = new int[n];
    }
    // creation of 2d array done

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }cout<<endl;
    // Input done

    // Output
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}