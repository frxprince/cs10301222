#include<iostream>
#include<queue>
using namespace std;

void RemoveAllElement(queue<string> Qi){
 while(!Qi.empty()){
  cout<<Qi.front()<< ",";
  Qi.pop();
 }   
}
void ShowQ(queue<string> Qx){
 queue<string>Qi=Qx;   
 while(!Qi.empty()){
  cout<<Qi.front()<< ",";
  Qi.pop();
 }   
}
int main(){
    queue<string> Q;
    Q.push("Hello"); Q.push("World");Q.push("MJU");
    //RemoveAllElement(Q);
    ShowQ(Q);
    cout<<Q.size()<<endl;
    return 0;
}