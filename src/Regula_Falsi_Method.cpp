#include<iostream>
#include<cmath>

using namespace std;
double fun(double x){

return cos(x)-log(x);
}

int main(){
int n=10;
double tol=0.0001;
double x[n+1];

x[0]=1;
x[1]=4;
int i;


for(i=1;i<n;i++){
x[i+1]=x[i]-((x[i]-x[i-1])*fun(x[i]))/(fun(x[i])-fun(x[i-1]));

   if(abs(fun(x[i+1]))<=tol){


        cout<<x[i]<<endl;
}

}


return 0;}
