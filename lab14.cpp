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
void push(stackinfo *S,int data){
 if(S->top == S->stacksize){ cout << "Stack overflow"<<endl;}else{
  S->data[S->top]=data;  S->top++;   
 }
}

int main(){
     stackinfo *S1=createStack(10);
     push(S1,100); push(S1,200);push(S1,300);
    return 0;
}