#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
double f(double x)
{
    return 2*x*x*x-21*x*x+36*x-20;

}
double bisection(double a,double b)
{
    double Fa=f(a);
    double Fb=f(b);
    double midpoint=(a+b)/2;
    double Fmidpoint=f(midpoint);
    while(b-a>1.e-20)
    {
        double left =(a+midpoint/2);
        double Fleft=f(left);
        double right=(b+midpoint/2);
        double Fright=f(right);
        if(Fmidpoint>max(Fleft,Fright))
           {
                a=left;
               Fa=Fleft;
        b=right;
        Fb=Fright;
           }
           else
           {
               if(Fleft>Fright)
               {
                   b=midpoint;
                   Fb=Fmidpoint;
                   midpoint=left;
                   Fmidpoint=Fleft;
               }

           else
           {
               a=midpoint;
               Fa=Fmidpoint;
               midpoint=right;
               Fmidpoint=Fright;
           }
    }
    }
   return midpoint;
}

int main()
{
    double midpoint;
double a=0;
double b=2;
cout<<bisection(a,b)<<endl;
cout<<f(midpoint)<<endl;


return 0;
}
