#include<iostream>
using namespace std;
typedef struct stackinfo{
 int stacksize;
 int top;
 int *data;   
}stackinfo;

stackinfo *createStack(int maxElements)
{  stackinfo *S;
   S=(stackinfo *)malloc(sizeof(stackinfo));   
   S->data=(int *)malloc(sizeof(int)*maxElements);
   S->top=0;
   S->stacksize=maxElements;
   return S;
}


int main(){
     stackinfo *S1=createStack(10);
    return 0;
}