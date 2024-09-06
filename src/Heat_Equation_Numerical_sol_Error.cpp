#include<iostream>
#include<fstream>

#include<cmath>
using namespace std;

int main()
{
int i,j;
int nx=80;
int ny=1000;
double b=1;
double t0=0;
double tf=0.2;
double dx=b/nx;
double dt=(tf-t0)/ny;
double r=dt/(dx*dx);
double u[nx+1][ny+1];
double ua[nx+1][ny+1];
double E[nx+1][ny+1];
ofstream write_output("Heat_Equatation_Error.dat");
for(i=0;i<=nx;i++)
{
    for(j=0;j<=ny;j++)
    {

        ua[i][j]=(sin(M_PI*i*dx))*exp(-M_PI*M_PI*j*dt);
    }
}
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





for(j=1;j<=ny;j++)
{
for(i=1;i<=nx-1;i++)
    {

   u[i][j]=r*u[i-1][j-1]+(1-2*r)*u[i][j-1]+r*u[i+1][j-1];
    }
}


for(j=0;j<=ny;j++)
{
for(i=0;i<=nx-1;i++)
    {

   E[i][j]=abs(ua[i][j]-u[i][j]);
    }
}






for(j=0;j<=ny;j++)

{for(i=0;i<=nx;i++)
   {
//cout<<i*dx<<" "<<j*dt<<" "<<u[i][j]<<endl;
        write_output<<i*dx<<" "<<j*dt<<" "<<E[i][j]<<endl;
    }

}
write_output.close();

 cout<<endl<<endl<<"JOY BANGLA"<<" "<<"r="<<r<<endl<<endl;
return 0;
}



