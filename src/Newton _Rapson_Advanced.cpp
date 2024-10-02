#include<iostream>
#include<cmath>
using namespace std;
double solver(double (*pfunction)(double),double(*p_diffunction)(double),double x,double tol=0.00000000000006,int max_ite=100){


int ite=0;
double residual=fabs((*pfunction)(x));

while(residual>tol && ite<max_ite){


    x=(x-((*pfunction)(x)/(*p_diffunction)(x)));
    residual=fabs((*pfunction)(x));

    ite++;
cout << "Iteration " << ite << ": x = " << x << ", Residual = " << residual << endl;
}

return x;

}

double expo(double x){
    return exp(2*x)-x-6;

}
double expoprime(double x){

return 2*exp(2*x)-1;


}
int main ()
{


cout<<"The solution="<<solver(expo,expoprime,6)<<endl;




    return 0;
}
