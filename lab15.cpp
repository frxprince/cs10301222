#include<iostream>
#include<stack>
using namespace std;
int main()
{
 stack<string> S1;
   S1.push("hello");
   S1.push("world");
   S1.push("cs");
   S1.push(",mju");
  /* cout<<S1.top()<<endl;
   S1.pop();
   cout<<S1.top()<<endl;  */
 while(S1.empty()!=1){
   cout<<S1.top()<<", ";
   S1.pop(); 
 }  
return 0;
}