#include<iostream>
#include<fstream>
#include<cmath>
#include<math.h>

using namespace std;




int main()
{
int i,j;
double dx=0.0025;
double dt=0.0025;
double l=1;
double t=0.1;

int n=l/dx;
int m=t/dt;
double a=dt/(dx*dx);
double u[n+1][m+1];
ofstream write_output("2Heat_Equation.dat");

for(j=0;j<=m;j++)
{
    u[0][j]=0;
    u[n][j]=0;

}
 for(i=0;i<=n;i++)
 {
     u[i][0]=sin(M_PI*i*dx);
}


 for(j=1;j<=m;j++){
     for(i=1;i<=n-1;i++)
    {
        u[i][j]=a*u[i-1][j-1]+(1-2*a)*u[i][j-1]+a*u[i+1][j-1];

    }
}

for(j=0;j<=m;j++)
{
    for(i=0;i<=n;i++)

    {


        write_output<<i*dx<<" "<<j*dt<<" "<<u[i][j]<<endl;
    }

}


write_output.close();

cout<< endl<<endl<<"JOY  BANGLA"<<a<<endl<<endl;


    return 0;
}
