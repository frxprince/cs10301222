#include<iostream>
using namespace std;
const int N=10;
int Q[N];
int front=0, rear=-1;

void add(int x){
   if(rear<N-1){
   rear++;
   Q[rear]=x;
   }else{
    cout<< "Overflow" << endl;
   }
}
int dequeue(){
    if(front<=rear){
    int data=Q[front];
    front++;
    return data;
    }else{
        cout<<"Underflow"<<endl;
        return -1;
    }
}

int main(){
   // for(int i=0;i<20;i++)add(i);
  add(5);add(6);add(7);
  cout<< dequeue()<<endl;
   cout<< dequeue()<<endl;
     cout<< dequeue()<<endl;
       cout<< dequeue()<<endl;
    return 0;
}