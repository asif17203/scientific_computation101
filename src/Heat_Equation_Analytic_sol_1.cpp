#include<iostream>
#include<math.h>
#include<fstream>
#include<cmath>

using namespace std;

int main()
{   int i,j;
    int nx=100;
    int ny=100;
    double b=1;
    double t0=0;
    double tf=0.2;
    double dx=b/nx;
    double dt=(tf-t0)/ny;
    double r=dt/(dx*dx);

double u[nx+1][ny+1];

ofstream write_output("Heat_Equation_Analytical_sol.dat");

for(i=0;i<=nx;i++)
{
    for(j=0;j<=ny;j++)
    {

        u[i][j]=(sin(M_PI*i*dx))*exp(-M_PI*M_PI*j*dt);
    }
}

for(j=0;j<=ny;j++)
{
    for(i=0;i<=nx;i++)

        write_output<<i*dx<<" "<<j*dt<<" "<<u[i][j]<<endl;
    }


write_output.close();

cout<<endl<<endl<<"JOY BANGLA"<<endl<<endl;
    return 0;
}
