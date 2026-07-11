#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    cout<<"Print array "<<endl;
    for(int i = 0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    cout<<"DONE"<<endl;
}

int main(){
    
    // declare
    int num[15];

    // cout<<"Value at 0 index "<<num[0]<<endl;

    // cout<<"Value at index 15 "<<num[200]<<endl;

    int second[3] = {3,5,7};

    int third[15] = {2,4}; 

    // printArray(third,15);

    // int numsize = sizeof(num)/sizeof(int);

    // cout<<"Size of num "<<numsize;

    // int n = 15;
    // for(int i = 0; i<n; i++){

    //     cout<<third[i]<<" ";
    // }

    char ch[3] = {'a','b','c'};

    for(int i = 0;i<3;i++){

        cout<<ch[i]<<" ";
    }





    return 0;
}