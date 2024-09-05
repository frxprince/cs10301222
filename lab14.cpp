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
int peek(stackinfo *S){
     if(S->top==0){cout<<"Empty"<<endl;}else{return S->data[S->top-1];}
}

int pop(stackinfo *S){
    int data;
    if(S->top == 0){
        cout <<" empty " <<endl; return -1;
    }else{
        data=peek(S); S->top--;
    }
    return data;
}
int main(){
     stackinfo *S1=createStack(10);      stackinfo *S2=createStack(5);
     push(S1,100); push(S1,200);push(S1,300);
     cout << peek(S1) << endl;
     cout<<pop(S1) <<","<<pop(S1) <<"  " << pop(S1)<<endl;
     push(S2,123); cout<< pop(S2) <<endl;
    return 0;
}