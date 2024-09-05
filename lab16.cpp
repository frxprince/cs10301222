#include<iostream>
#include<stack>
#include<windows.h>

using namespace std;
int main(){
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    string input="a= ((1+2)(3*2)";
    stack<char>S;
    cout<<input<<endl;
    for(int i=0;i<input.length();i++){
     switch(input[i]){
        case '(':
        S.push('(');break;
        case ')':
        if(S.empty()){
            SetConsoleTextAttribute(hConsole,0x04);
            cout<<")"<<endl;
     SetConsoleTextAttribute(hConsole,0x0);        
             return 0;
        } S.pop(); 
     } cout<<input[i];
    }
    if(!S.empty()){
           SetConsoleTextAttribute(hConsole,0x04);
        cout<< ")"<<endl;
           SetConsoleTextAttribute(hConsole,0x0); 
    }else{ cout<<" OK "<< endl;   }
    return 0;
}