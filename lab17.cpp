#include<iostream>
#include<bitset>
using namespace std;
template<typename T> void show_bits(const T& a){
 const char* beg=reinterpret_cast<const char*>(&a);
 const char* end=beg+sizeof(a);
cout<<"Intel binary"<<endl;
while(beg!=end){
    cout<<bitset<CHAR_BIT>(*beg++) <<" ";
}
cout<<endl;

 cout<<"Non binary"<<endl;
 end--;
 for(int i=sizeof(a);i>0;i--){
    cout<<bitset<CHAR_BIT>(*end--)<<' ';
 }
 cout<<endl;
} 

int main(){
    unsigned int X=0x12345678; // 00010010 00110100 01010110 01111000
    cout<<X<< " --> ";
    show_bits(X);
    return 0;
}