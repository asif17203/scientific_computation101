#include<iostream>
#include<fstream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
int i,j;
int nx=5;
int ny=10;
double b=1;
double t0=0;
double tf=0.2;
double dx=b/nx;
double dt=(tf-t0)/ny;
double r=dt/(dx*dx);
double u[nx+1][ny+1];
ofstream write_output("Loop_Test_Heat_Equation_Numerical_sol.dat");

//initial condition
for(i=0;i<=nx;i++)
{
    u[i][0]=sin(M_PI*dx*i);
}
//Boundary
for(j=0;j<=ny;j++)
{
    u[0][j]=0;
    u[nx][j]=0;
}



for(i=1;i<=nx-1;i++)


{
for(j=0;j<=ny-1;j++)
    {

   u[i][j+1]=r*u[i-1][j]+(1-2*r)*u[i][j]+r*u[i+1][j];
    }
}



for(j=0;j<=ny;j++)
{for(i=0;i<=nx;i++)
   {
        cout<<i*dx<<" "<<u[i][j]<<endl;
        write_output<<i*dx<<" "<<u[i][j]<<endl;
    }

}
write_output.close();

 cout<<endl<<endl<<"JOY BANGLA"<<" "<<"r="<<r<<endl<<endl;
return 0;
}
