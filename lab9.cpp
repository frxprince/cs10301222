#include<iostream>
using namespace std;
void Print(double* ptx, int k){
 for(int i=0;i<k;i++){
    printf("%lf,",*ptx);
     ptx=ptx+1;
    }
}

int main(){
 double A[]={1.0,2.0,3.0,4.0,5.0,6.0};
 double* ptA;
 ptA=A;
 Print(A,sizeof(A)/sizeof(double));
// printf("%x  %x   %lf   %lf", ptA, A, A[0], *ptA+1);
    return 0;
}