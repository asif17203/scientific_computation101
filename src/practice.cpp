#include<iostream>
using namespace std;
int main(){


double vec1[3],vec2[3],product=0.0;
cout<<"Enter 1st vector \n";
cin>>vec1[0]>>vec1[1]>>vec1[2];
cout<<"Enter 2nd vector\n";
cin>>vec2[0]>>vec2[1]>>vec2[2];

for(int i =0;i<=2;i++){
    product +=vec1[i] * vec2[i];

}
cout<<"The dot product="<<product;

return 0;
}






