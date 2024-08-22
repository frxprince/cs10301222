#include<iostream>
using namespace std;
int main(){
int n=123;
int* x;
int** y;
int*** z;
x= &n;
y=&x;
z= &y;
//long long x = 0x5ffe9c;
//cout<< x <<endl;
printf("%x   %x   %d \n", &n, x,  *x);
printf("%x   %x   %d \n", y, *y,  **y);
printf("%x %x %x  %d",z, *z, **z, ***z );
    return 0;
}