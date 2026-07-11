#include<iostream>
using namespace std;

void reverse(int arr[],int n){

    int start = 0;
    int end = n-1;

    while(start <=end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    
    int arr[5] = {2,3,5,1,7};
    int brr[6] = {8,5,0,9,2,4};

    reverse(arr,5);
    reverse(brr,6);

    printArray(arr,5);
    printArray(brr,6);

    return 0;
}