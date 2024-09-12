#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
#include<cmath>
using namespace std;
stack<string>S;
queue<string>Q;
char Precedent[256];

void printQ(queue<string>Q){
    queue<string>q=Q;
    while(!q.empty()){
        cout<<q.front()<<"  ";
        q.pop();
    }cout<<endl;
}




int main()
{
    Precedent['^']=3;
    Precedent['*']=2;     Precedent['/']=2;
    Precedent['+']=1;     Precedent['-']=1;
   string input="1+2+3*40+5*6";
   string token,token_op;
   unsigned int i;
   for(i=0;i<input.length();i++){
     if( (input[i]=='+') ||  (input[i]=='-') || (input[i]=='*') || (input[i]=='/') || (input[i]=='^') || (input[i]=='(') ||  (input[i]==')')){
        if(token.length()>0)Q.push(token);
          token_op=input[i];
          if( (input[i]=='(') || (input[i]==')')){
            if(input[i]=='('){S.push(token_op);}else{
             while(S.top()[0] !='('){
                Q.push(S.top());S.pop();
             } S.pop();   
            }
          }else{
            if(S.empty()){
                S.push(token_op);
            }else if(Precedent[S.top()[0]] <= Precedent[input[i]]){
                S.push(token_op);}
          else if(Precedent[S.top()[0]] == Precedent[input[i]]){
            Q.push(S.top());S.pop();
            Q.push(token_op);
          }else if(Precedent[S.top()[0]] > Precedent[input[i]]){
            while(Precedent[S.top()[0]] >=Precedent[input[i]]){
                Q.push(S.top());S.pop();
                 if(S.empty())break;
            } S.push(token_op);
            } 
     }
        token="";
   }else{
 token=token+input[i];
   } 
   } 
   Q.push(token);
   while(!S.empty()){
    Q.push(S.top());S.pop();
   }

cout<<"input:"<<input<<endl;  cout<<"Postfix: "<<endl; printQ(Q);

    return 0;
}
