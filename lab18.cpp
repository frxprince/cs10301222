#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
#include<cmath>
using namespace std;
stack<string>S;
queue<string>Q;
char Precedent[256];

int main()
{
    Precedent['^']=3;
    Precedent['*']=2;     Precedent['/']=2;
    Precedent['+']=1;     Precedent['-']=1;
   string input="1+2+3*4+5*6";
   string token,token_op;
   unsigned int i;
   for(i=0;i<input.length();i++){
     if( (input[i]=='+') ||  (input[i]=='-') || (input[i]=='*') || (input[i]=='/') || (input[i]=='^') || (input[i]=='(') ||  (input[i]==')')){
        cout<<input[i]<<" operator"<<endl;
     }else
        cout<<input[i]<<"operand"<<endl;
   }  
    return 0;
}