#include<iostream>
using namespace std;
int main(){
    int n=4;

    int i=1;//row
    while(i<=n){
        int j=1;//col
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }cout<<endl;
        i=i+1;


    }
}