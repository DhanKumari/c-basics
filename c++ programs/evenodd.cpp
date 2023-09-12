#include<iostream>
using namespace std;

bool isEven(int num){
if(num%2==0){
    return 1;//even
}else {
    return 0;//odd
}


}

int main(){
    int a=6;
     
     if( isEven(a)){
        cout<<"the num is even"<<endl;

     } else{
        cout<<"the num is odd"<<endl;
     }


}