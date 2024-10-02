#include<iostream>
#include<cmath>
#include<fstream>
#include<math.h>

using namespace std;
int nmax=50;
double h=0.1;

int main(){
double y[nmax],t[nmax];
ofstream write_output("kutta.dat");
for(int n=0;n<nmax;n++){
   t[0]=0;
   y[0]=2;
   double k1=pow(sin(t[n]),2)*y[n];
    double k2=pow(sin(t[n]+h/2),2)*(y[n]+h*k1/2);
    double k3=pow(sin(t[n]+h/2),2)*(y[n]+h*k2/2);
    double k4=pow(sin(t[n]+h/2),2)*(y[n]+h*k3);


    y[n+1]=y[n]+(h/6)*(k1+2*k2+2*k3+k4);
    t[n+1]=t[n]+h;
  write_output<<t[n]<<" "<<y[n]<<endl;
  cout<<t[n]<<" "<<y[n]<<endl;
}

write_output.close();
cout<<endl<<"JOY BANGLA"<<endl;



return 0;}
