#include<iostream>
#include<fstream>
#include<math.h>


using namespace std;


int n;

int main(){
  int n = 10; // You need to initialize n before using it
    double x = 1.0; // Assuming a value for x
    double h = x / n;
    double y[n+1];
h=x/n;

   ofstream write_output("Eular_method_T.dat");
y[0]=1;
for(int i=1;i<=n;i++){

    x=i*h;
    y[i]=(1/(1+h))*y[i-1];

}

for(int i=0;i<=n;i++){
  write_output<<(i*h)<<" "<< y[i]<<endl;

}

write_output.close();


return 0;
}
