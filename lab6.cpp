#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
const int n=500;
 int M[n][n]={0};
int main(){
 int ans=0;
 auto t0= high_resolution_clock::now();
 for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
   ans=ans+M[j][i];
auto t1= high_resolution_clock::now();   
auto duration= duration_cast<microseconds>(t1-t0);
cout<< duration.count() <<endl;         
    return 0;
}