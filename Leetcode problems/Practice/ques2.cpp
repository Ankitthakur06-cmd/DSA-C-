#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int n){

    int max = INT_MIN;

    for(int i = 0;i<n;i++){

        if(arr[i] > max){

            max = arr[i];
        }
        // cout<<"Max "<<max;
    }
    return max;
}

 int Inputarray(int arr[],int n){

    for(int i = 0;i<n;i++){

        cin>>arr[i];
    }
 }



int main(){
    
    int n;
    cin>>n;

    int arr[n];
    int sum = 0;

    for(int i = 0;i<n;i++){

        cin>>arr[i];
    }cout<<endl;

    for(int i = 0;i<n;i++){

        sum = sum + arr[i];
        
    }
    cout<<sum;

//     for(int i = 0;i<n;i++){

//         cin>>arr[i];
//     }

   

//    cout<<"Max "<<getMax(arr,n);
    



    // int value;
    // cin>>value;

    // for(int i = 0;i<n;i++){

    //     arr[i] = value;
    // }
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i];
    // }

    return 0;
}

