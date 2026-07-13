#include<iostream>
using namespace std;

int main(){
    
    int num = 5;
    int *p = &num;

    cout<<"Value p "<<*p<<endl;
    cout<<"Address p "<<p<<endl;

    int *q = p;

    cout<<"Value q "<<*q<<endl;
    cout<<"Address q "<<q<<endl;


    

    return 0;
}