#include<iostream>
#include<stack>
using namespace std;
int main(){
    string input="a= ((1+2)+(3*2)";
    stack<char>S;
    cout<<input<<endl;
    for(int i=0;i<input.length();i++){
     switch(input[i]){
        case '(':
        S.push('(');break;
        case ')':
        if(S.empty()){
            cout<<"error"<<endl; return 0;
        } S.pop(); 
     }
    }
    if(!S.empty()){
        cout<< "Error"<<endl;
    }else{ cout<<" OK "<< endl;   }
    return 0;
}