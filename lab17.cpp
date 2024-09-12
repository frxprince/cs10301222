#include<iostream>
#include<bitset>
using namespace std;
template<typename T> void show_bits(const T& a){
 const char* beg=reinterpret_cast<const char*>(&a);
 const char* end=beg+sizeof(a); 
 cout<<"binary"<<endl;
 end--;
 for(int i=sizeof(a);i>0;i--){
    cout<<bitset<CHAR_BIT>(*end--)<<' ';
 }
 cout<<endl;
} 

int main(){
    unsigned int X=0xff00; //1111 1111   0000 0000
    cout<<X<< " --> ";
    show_bits(X);
    return 0;
}