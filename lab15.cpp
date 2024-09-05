#include<iostream>
#include<stack>
using namespace std;
int main()
{
 stack<int> S1;
   S1.push(100);
   S1.push(200);
   S1.push(300);
   S1.push(123);
  /* cout<<S1.top()<<endl;
   S1.pop();
   cout<<S1.top()<<endl;  */
 while(S1.empty()!=1){
   cout<<S1.top()<<", ";
   S1.pop(); 
 }  
return 0;
}