#include<iostream>
using namespace std;
int main(){
int n =10;
//int sum=0;
//or(int i=1;i<=n;i++){
  //  sum+=i;
    
//} 
//cout<<sum;

int c =0;
int b=1;
//int sum=0;
for (int i=1;i<=n;i++){
    int sum= c+b;
    cout<<sum<<" ";
    
    c=b;
    b=sum;




}



}