#include<iostream>
#include<cmath>
using namespace std;

double fun(double x){



return x*x*x*x-8*x*x*x+22*x*x-24*x+5;

}


int main(){
double u[700],h=0.01,e;
u[0]=0;
for(int k=0;k<=700;k++){

    u[k+1]=u[k]+h;

    e=abs(fun(u[k+1]+h)-fun(u[k]));
    if (e<1e-4){
         cout<<u[k]<<"   "<<fun(u[k])<<"   "<< e<<endl;

    }



}





return 0;
}
