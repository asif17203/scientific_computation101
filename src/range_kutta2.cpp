#include<iostream>
#include<cmath>
#include<math.h>
#include<fstream>

using namespace std;




int nmax=50;
double h=0.1;

double fun(double t,double y){
return t+y;
}


int main(){
//double t[n],y[n];
double y[nmax],t[nmax];
ofstream write_output("rang.dat");
for (int n=0;n<nmax;n++){

    t[0]=0;
    y[0]=1;

    double k1= h*fun(t[n],y[n]);

    double k2= h*fun(t[n]+h/2,y[n]+k1/2 );

    double k3= h*fun(t[n]+h/2,y[n]+k2/2);

    double k4= h*fun(t[n]+h,y[n]+k3);

y[n+1]=y[n]+ (1.0/6)*(k1+ 2*k2 + 2*k3 + k4);
                                                     //y[n+1]=y[n]+(h/6)*(k1+2*k2+2*k3+k4);
t[n+1]=t[n]+h;

//cout<<y[n]<<endl;
write_output<<t[n]<<"  "<<y[n]<<endl;
}
write_output.close();



return 0;
}
