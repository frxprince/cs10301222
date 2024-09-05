#include<iostream>
using namespace std;
int main(){
    //unsigned long a=3,b;  // ..0000000000011000
    //b=a << 3;
    //cout<<a<<" , "<<b<<endl;
unsigned int x= 0xfabc; // 1111 1010 1011 1100
//unsigned int m= 1<<12  ;
//cout<< x << "," << ((x & m) > 0) <<endl;
x |= 1<<21;
cout<< x<<endl;
for(int i=(sizeof(x)*8); i>=0   ;i--){
  cout<< ((x & (1<<i))> 0) <<" ";
}
/*cout<<endl;
for(int i=0;i<(sizeof(x)*8);i++){
 cout<< (x&1) <<" ";
 x=x>>1;   
}
*/
    return 0;
}