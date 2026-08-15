#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

class Hero{

    // Properties
    // private :
    int health;
    public:
    char level;
    char *name;

    // Default construtor
    Hero(){
        name = new char[100];
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
    // Parameterised constructor
    // Hero(int health,char level){
    //     this ->health = health;
    //     this ->level = level;
    // }
    // // copy constructor
    // Hero(Hero& temp){
    //     this-> health = temp.health;
    //     this-> level = temp.level;
    // }
    void print(){
        cout<<"Name: "<<this-> name<<endl;
        cout<<"Health: "<<this-> health<<endl;
        cout<<"Level: "<<this-> level<<endl;
    }

    // int gethealth(){
    //     return health;
    // }
    // char getlevel(){
    //     return level;
    // }

    void sethealth(int h){

         health = h;
    }
    void setlevel(char ch){

         level = ch;
    }
};

int main(){

    Hero h1;

    h1.sethealth(12);
    h1.setlevel('D');

    char name[7] = "ANKIT";
    h1.setName(name);
    h1.print();

    // creation of objects
    // Hero tmp(22,'v');
    // tmp.print();
    // Hero h2(tmp);
    // h2.print();


    // Hero *b = new Hero;

    // h1.sethealth(70);
    // h1.level = 'a';
    // cout<<"Health is "<<h1.gethealth()<<endl;
    // cout<<"Level is "<<h1.level<<endl;

    // (*b).sethealth(100);
    // (*b).level = 'A';
    // cout<<(*b).gethealth()<<endl;
    // cout<<(*b).level<<endl;
    
    return 0;
}