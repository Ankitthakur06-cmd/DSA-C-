#include<iostream>
using namespace std;

// void reverse(int arr[],int n){

//     int start = 0;
//     int end = 1;

//     for(int i = 0;i<n;i++){

//         swap(arr[start],arr[end]);
//         start++;
//         end++;
//     }


// }

// void printArray(int arr[],int n){

//     for(int i = 0;i<n;i++){

//         cout<<arr[i];
//     }cout<<endl;
// }

int main(){

        // 1-->
    // int n;
    // cin>>n;

    // int arr[n];

    // for(int i = 0;i<n;i++){

    //     cin>>arr[i];
    // }
    // // for(int i =0;i<n;i++){

    // //     cout<<arr[i]<<" ";
    // // }

    // for(int i =0;i<arr[n];i++){

    //     int largest = 0;
    //     int secondlargest = 0;

    //     if(arr[i] > largest){

    //         largest = arr[i];
    //         secondlargest = arr[i+1];

    //     }
    //     else if(arr[i] == arr[i+1]){
    //         continue;

    //     }
    //     else{
    //         largest = arr[i+1];
    //         secondlargest = arr[i];
    //     }
    //     cout<<secondlargest;
    // }

    // int n;
    // cin>>n;
    // int even = 0;
    // int sum = 0;

    // int arr[n];

    // for(int i = 0;i<n;i++){

    //     cin>>arr[i];
    // }

    // 1--

    // for(int i = 0;i<n;i++){

    //     if(arr[i]%2==0){
    //         even = even + 1;
    //     }
    // }
    // cout<<even;

    // reverse(arr,n);
    // printArray(arr,n);

    // 2--

    // int largest = 0;
    // int secondlargest = 0;

    // for(int i = 0;i<n;i++){

    //     if(arr[i]>largest){

    //         secondlargest = largest;
    //         largest = arr[i];
    //     }
    //     else if(arr[i]<largest && arr[i]>secondlargest){

    //         secondlargest = arr[i];
    //     }
    //     else if(arr[i] == largest && arr[i] < secondlargest){
    //         continue;
    //     }
    // }
    // cout<<secondlargest;

    // 3--
    // int expectedsum = n*(n+1)/2;

    // int actualsum = 0;

    // for(int i = 0;i<n;i++){

    //     actualsum = actualsum + arr[i];
    // }cout<<endl;

    // int missing = expectedsum - actualsum;

    // cout<<missing;

    // 4--
    // for(int i = 0;i<n;i++){

    //     sum = sum + arr[i];
    //     cout<<sum;
    // }

    
    int units;
    float bill = 0;

    cout << "Enter units consumed: ";
    cin >> units;

    switch (units / 100) {
        case 0:   // 0–100 units
            bill = units * 5;
            break;

        case 1:   // 101–200 units
            bill = (100 * 5) + (units - 100) * 7;
            break;

        case 2:   // 201–300 units
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            break;

        default:  // above 300 units
            bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 15;
    }
    cout<<bill;

   

 




        
        




    

    


return 0;
    }

