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
        return arr[0];
    }

    int remainingPart = getSum(arr + 1,n - 1);
    int sum = arr[0]+remainingPart;
    return sum;
}
bool linearsearch(int arr[],int n,int k){

    // base case
    if(n == 0){
        return false;
    }
    
    // one part done
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingpart = linearsearch(arr+1,n-1,k);
        return remainingpart;
    }
}
bool binarySearch(int arr[],int s,int e,int k){
    // base case
    // element not found
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    // element found
    if(arr[mid] == k){
        return true;
    }

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
    cout << "s = " << s << " e = " << e << " mid = " << mid << " arr[mid] = " << arr[mid] << endl;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int s = 0;
    int e = n-1;
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
    // int sum = getSum(arr,n);
    // int ans = linearsearch(arr,n,k);
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
    int ans = binarySearch(arr,s,e,k);
    cout<<ans;
    // if(ans){
    //     cout<<"Present"<<endl;
    // }
    // else{
    //     cout<<"Not present"<<endl;
    // }

    
    return 0;
}