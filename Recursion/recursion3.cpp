#include<iostream>
using namespace std;

void reverse(int i,int j,string& s){
    // base case
    if(i>j){
        return ;
    }
    // Recursive relation
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(i,j,s);
}
bool checkPalindrome(string s,int i,int j){

    // base case
    if(i>j){
        return true ;
    }
    if(s[i]!=s[j]){
        return 0;
    }
    else{
        return checkPalindrome(s,i + 1,j - 1);
    }
}
int power(int a,int b){

    // base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    // recursive relation
    int ans = power(a,b/2);

    if(b%2==0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}
void sortArray(int *arr,int n){
    // base case
    if(n == 0||n == 1){
        return ;
    }

    // recursive call
    for(int i = 0;i<n-1;i++){

        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

int main(){
    string s = "abcde";
    int arr[4] = {5,6,2,1};
    sortArray(arr,4);
    for(int i = 0;i<4;i++){
        cout<<arr[i];
    }
    // int a,b;
    // cin>>a;
    // cin>>b;
    // cout<<power(a,b);

    // reverse(0,s.length()-1,s);
    // cout<<s;

    // if(checkPalindrome(s,0,s.length()-1)){
    //     cout<<"It is a palindrome";
    // }
    // else{
    //     cout<<"Not a palindrome";
    // }
    
    
    
    return 0;
}