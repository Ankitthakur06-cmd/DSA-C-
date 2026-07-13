#include<iostream>
using namespace std;

bool linearsearch(int arr[][4],int k,int row,int col){

    for(int row = 0;row<3;row++){
        for(int col = 0;col<4;col++){
            if(arr[row][col] == k){
                return 1;
            }
        }
    }
    return 0;
}



void rowSum(int arr[][4],int row,int col){

    int sum = 0;
    for(int row = 0;row<3;row++){
        for(int col = 0;col<4;col++){
            sum = sum + arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
// For column wise sum use column wise printing one first j then i

int largestRowsum(int arr[][4];int row;int col){

    int maxi = INT_MIN;
    int rowno = -1;

    for(int row;row<3;row++){
        int sum = 0;
        for(int col = 0;col<4;col++){

            sum+ = arr[row][col];

            if(sum > maxi){
            maxi = sum;
            rowno = row;
        }
    }
    cout<<"Largest sum "<<maxi<<endl;
    return row;
}

int main(){
    int arr[3][4];

    // input --> row wise
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // output
//     for(int i = 0;i<3;i++){
//         for(int j = 0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }