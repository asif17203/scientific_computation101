#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){

double dx=1,dy=1;
ofstream write_output("para.dat");
for(int i=1;i<=40;i++){

    dy=sqrt(4*i*dx);

    write_output<< i*dx <<" " <<dy<<endl;

}
write_output.close();
return 0;
}
