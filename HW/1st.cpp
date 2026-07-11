#include<iostream>
using namespace std;

int main(){
    
    while(true){

        int choice;
        cout<<"1.Add,2.Subtract,3.Multiply,4.Exit"<<endl;
        cin>>choice;

        switch(choice){

            case 1:cout<<"Add";
            break;

            case 2:cout<<"Subtrat";
            break;

            case 3:cout<<"Multiply";
            break;

            case 4:cout<<"Exit";
            exit(0);
        }
    }
    return 0;
}