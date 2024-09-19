#include<iostream>
#include<deque>

using namespace std;
int main(){
  deque<string>Q;
  Q.push_back("Hello");              // Hello
  Q.push_front("MJU");               // Hello MJU
  Q.push_back("ABCD");              //  ABCD Hello MJU

  while(!Q.empty()){
    cout<<Q.front()<<endl;
    Q.pop_front();
  }      
  Q.pop_front();
  cout<<Q.front()<<endl;
    return 0;
}