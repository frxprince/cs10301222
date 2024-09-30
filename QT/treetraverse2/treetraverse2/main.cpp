#include <iostream>
#include<stack>
using namespace std;
string Data[]={"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o"};
int Left[]={       1,    3,   5   ,7,    9,  11, 13,  -1,  -1, -1,  -1, -1,  -1,    -1,   -1};
int Right[]={     2,    4,   6,   8,   10, 12, 14,  -1,  -1, -1,  -1, -1,  -1,    -1,   -1};
stack<int>S;
void preorder(){
    int p=0;
    while(1){
    while( (Left[p]!=-1)  || (Right[p]!=-1)){
            cout<<Data[p]<< ",";
        if(Right[p]!=-1)S.push(Right[p]);
        p=Left[p];
        if(p==-1)break;
       }
    if(p!=-1)cout<<Data[p]<<" , ";
    if(!S.empty()){
        p=S.top();S.pop();
    }else{break;
    }
    }
}

void inord(){
    int p=0;
    while((p!=-1) || (S.empty()==0)){
        while(p!=-1){
            S.push(p);
            p=Left[p];
        }
        p=S.top();S.pop();
        cout<<Data[p]<<" , ";
        p=Right[p];
    }
}

void post(){
    stack<int>S1,S2;
    int p=0;
    S1.push(0);
    while(!S1.empty()){
        p=S1.top();S1.pop();
        S2.push(p);
        if(Left[p]!=-1)S1.push(Left[p]);
        if(Right[p]!=-1)S1.push(Right[p]);
    }
    while(!S2.empty()){
        p=S2.top();S2.pop();
        cout<< Data[p]<< ", ";
    }
}


int main()
{
    cout << "Preorder ";preorder();
     cout <<endl<< "Inorder ";inord();
     cout <<endl<< "Postorder ";post();
     return 0;
}
