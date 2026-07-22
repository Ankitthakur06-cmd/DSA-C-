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

    int row;
    cin>>row;

    int col;
    cin>>col;

    // int *arr= new int[n];

    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int ans = getsum(arr,n);
    // cout<<"Ans is "<<ans;

    int **arr = new int*[row];
    for(int i = 0;i<row;i++){
        arr[i] = new int[col];
    }
    // creation of 2d array done

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>arr[i][j];
        }
    }cout<<endl;
    // Input done

    // Output
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    // Releasing memory
    for(int i = 0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    
    return 0;
}