#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
int a=1,b=2;
printf("a=%d b=%d\n",a,b);
swap(&a,&b);
printf("a=%d b=%d",a,b);
    return 0;
}