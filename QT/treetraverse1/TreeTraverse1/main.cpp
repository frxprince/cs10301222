#include <iostream>

using namespace std;


string Data[]={"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o"};
int Left[]={       1,    3,   5   ,7,    9,  11, 13,  -1,  -1, -1,  -1, -1,  -1,    -1,   -1};
int Right[]={     2,    4,   6,   8,   10, 12, 14,  -1,  -1, -1,  -1, -1,  -1,    -1,   -1};

void pre(int p){
    if(p!=-1){
        cout<< Data[p]<<" , ";
        pre(Left[p]);
        pre(Right[p]);
    }
}
void inord(int p){
    if(p!=-1){
        inord(Left[p]);
        cout<< Data[p]<<" , ";
        inord(Right[p]);
    }
}
void post(int p){
    if(p!=-1){
        post(Left[p]);
        post(Right[p]);
        cout<< Data[p]<<" , ";
    }
}

int main()
{
    cout<< "Preorder ";pre(0);
    cout<<endl<<"Inorder ";inord(0);
       cout<<endl<<"Postorder ";post(0);
    return 0;
}
