#include<iostream>
using namespace std;

bool palindrome(char str[],int n){

    int s = 0;
    int e = n-1;
    while(s<e){
        if(str[s] != str[e]){
            return 0;
 
        }
        else if(str[s] == str[e]){
            s++;
            e--;
        }
        return 1;
    }
}

void reverse(char name[],int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    
    int len = getlength(name);
    cout<<"Length of string: "<<len<<endl;
    // reverse(name,len);

    // cout<<"Reverse: "<<name;

    // cout<<"Your name is "<<name;

    cout<<"Palindrome or not: "<<palindrome(name,len);
    
    return 0;
}