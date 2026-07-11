#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){

    int s = 0,e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;



}

int lastocc(int arr[],int n,int key){

    int s = 0,e = n-1;
    int mid = s+(e-s)/2;
    int ans1 = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans1 = mid;
            s = mid + 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans1;



}

// int binarysearch(int arr[],int size,int key){

//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end-start)/2;

//     while(start <= end){

//         if(arr[mid] == key){
//             return mid;
//         }

//         if(key > arr[mid]){

//             start = mid + 1;
//         }
//         else{
//             end = end - 1;
//         }
//         mid = start + (end-start)/2;

//     }
//     return -1;

// }

int main(){

    int even[5] = {1,2,3,3,5};

    cout<<"First occurence of 3 is at index: "<<firstocc(even,5,3)<<endl;
    cout<<"Last occurence of 3 is at index: "<<lastocc(even,5,3)<<endl;
    
    // int even[6] = {4,6,12,15,24,32};
    // int odd[5] = {2,4,9,10,13};

    // int index = binarysearch(even,6,12);
    // cout<<"Index of 12 is "<<index<<endl;


    return 0;
}