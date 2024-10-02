#include<iostream>
#include<cmath>
using namespace std;


void calculateroot(double &x,double tol=0.000001,int maxite=100 );




int main(){
double x=5;

x=5;
calculateroot(x);
cout<<x;


return 0;}


void calculateroot(double&x,double tol,int maxite){
int ite=0;
double res = (x*x*x)-(x*x)+2;
 while((fabs(res))>tol && ite<(maxite)){

  x=(x-((x*x*x)-(x*x)+2)/(3*(x*x)-2*x));
  res=(x*x*x)-(x*x)+2;
  ite++;
}
}

