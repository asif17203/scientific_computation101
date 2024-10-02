#include<iostream>
#include<cmath>
using namespace std;

double fun(double x){

return x*x*x-x-1;
}
double diffun(double x){
int n=20;

double a=0.0001;


return (fun(x+a)-fun(x))/a;;
}
 int main(){

int n=20;
double x[n+1],tol=0.001;
//x[1]=1;
x[1]=2;
int i;

for (i=1;i<n;i++){
    if(abs(fun(x[i]<tol))){
       cout<<x[i]<<endl;
    }
    x[i+1]=x[i]-(fun(x[i])/diffun(x[i]));
}
 return 0;}
