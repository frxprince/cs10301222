#include<iostream>
#include<queue>
using namespace std;

void RemoveAllElement(queue<string> Qi){
 while(!Qi.empty()){
  cout<<Qi.front()<< ",";
  Qi.pop();
 }   
}
int main(){
    queue<string> Q;
    Q.push("Hello"); Q.push("World");Q.push("MJU");

    cout<<Q.front()<<endl;
    Q.pop();  
    cout<<Q.front()<<endl;
    Q.pop(); 
    cout<<Q.front()<<endl;
    Q.pop();
    RemoveAllElement(Q); 
    cout<<Q.size()<<endl;
    return 0;
}