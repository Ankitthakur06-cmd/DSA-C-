#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){
    p = p + 1;
    cout<<"Inside update "<<p<<endl;
    *p = *p + 1;
}

int main(){
    
    // int num = 5;
    // int *p = &num;

    // cout<<"Value p "<<*p<<endl;
    // cout<<"Address p "<<p<<endl;

    // int *q = p;

    // cout<<"Value q "<<*q<<endl;
    // cout<<"Address q "<<q<<endl;

    // Arrays 

    // int arr[4] = {23,122,41,67};

    // cout<<"2nd element "<<arr[2]<<endl;
    // cout<<"2nd "<<2[arr];

    // int arr[10];
    // int *p = &arr[0];

    // cout<<"Size of arr "<<sizeof(arr)<<endl;
    // cout<<"Size of p "<<sizeof(p)<<endl;
    // cout<<sizeof(&p)<<endl;

    // int a[20] = {1,2,3,4};
    // cout<<a<<endl;
    // cout<<&a[0]<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<p<<endl;

    // p = p + 1;
    // cout<<p;

    // char array
    // char ch[6] = "abcde";
    // char *c = &ch[0];
    // cout<<c<<endl;

    // char temp = 'z';
    // char *b = &temp;
    // cout<<b<<endl;

    int value = 5;
    int *a = &value;
    // cout<<a<<endl;

    update(a);
    // cout<<a<<endl;
    cout<<*a<<endl;







    

    return 0;
}