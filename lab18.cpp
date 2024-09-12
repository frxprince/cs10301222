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
    return 0;
}