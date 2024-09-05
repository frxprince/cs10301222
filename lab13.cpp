#include<iostream>
using namespace std;
int S[10];
int top=-1;
void push(int data){
 if(top< (int)((sizeof(S)/sizeof(int))-1)){
    top++;
    S[top]=data;
 }
}

int pop(){
 if(top > -1){
    int data=S[top];
    top--;
    return data;
 }   return -1;
}
int peek(){
   return S[top]; 
}
int main(){
    push(100);
     push(200);
      push(300);
    cout<< pop() <<","<< pop()<<endl;  
    push(555);
    cout<<peek()<<endl;
    return 0;
}