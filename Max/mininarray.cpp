#include<iostream>
#include <climits>
using namespace std;

int getMax(int num[],int n){

    int maxi = INT_MIN;

    for(int i = 0;i<n;i++){

        maxi = max(maxi,num[i]);



        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    return maxi;
}

int getMin(int num[],int n){

    int min = INT_MAX;

    for(int i =0;i<n;i++){

        if(num[i]<min){

            min = num[i];
        }
    }
    return min;

}

int main(){
    
    int size;
    cin>>size;

    int num[100];

    // Taking input in array
    for(int i = 0;i<size;i++){

        cin>>num[i];
    }

    cout<<"Maximum value in array "<< getMax(num,size)<<endl;
    cout<<"Minimum value of array "<< getMin(num,size)<<endl;


    return 0;
}