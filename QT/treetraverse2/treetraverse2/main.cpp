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





int main()
{
    cout << "Preorder ";preorder();
    return 0;
}
