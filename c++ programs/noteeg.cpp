#include<iostream>
using namespace std;
int main(){
int amount=1330;

int RS100, RS20,RS1;

switch(1){
    case 1:  RS100=amount/100;
            amount=amount%100;
            cout<<"100 rs note "<<RS100<<endl;
    case 2 : RS20=amount/20;
            amount=amount%20;
            cout<<"20 rs not "<<RS20<<endl;
    case 3 : RS1=amount/1;
            amount=amount%1;
            cout<<"1rs note: "<<RS1<<endl;






}


}