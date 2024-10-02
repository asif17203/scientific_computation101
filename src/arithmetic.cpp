#include<iostream>
using namespace std;


class calculator{

float a,b;
public:
    void input(){

    cout<"Enter the number:";
    cin>>a;
    cout<<"Enter the number:";
    cin>>b;

    }
    float add(){

    return a+b;

    }
    float sub(){
     return a-b;


    }
    float mul()
    {
        return a*b;
    }
    float div(){
    if (b==0){

        cout<<"Math error";

    }
    else{
        return a/b;
    }

    }
};
int main (){

int ch;
calculator c;
cout<<"Enter 1 to add two numbers"<<
"\nEnter 2 to substract two number"<<
"\nEnter 3 to multiply two numbers"<<
"\nEnter 4 to divide two numbers"<<
"\nEnter 0 to exit";
do {
    cout<<"\nEnter choice:";
    cin>>ch;
    switch (ch)
    {

    case 1:
        c.input();
        cout<<"Result="<<c.add()<<"\n";
        break;
    case 2:
        c.input();
        cout<<"result"<<c.sub()<<"\n";
        break;
    case 3:
        c.input();
    cout<<"Result="<<c.mul()<<"\n";
    break;
    case 4:
        c.input();
        cout<<"Result="<<c.div()<<"\n";
        break;
    }
    }while(ch>=1 && ch<=4);
        return 0;

};





