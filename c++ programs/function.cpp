#include<iostream>
using namespace std;

//int power(int a,int b){
  //  int ans=1;
   // for(int i=1; i <=b ; i++){
    //    ans=ans*a;

    //}return ans ;


//}

//int main(){
 //   int a=2,b=3;
   // int answer= power(a,b);
 //   cout<<"the ans is "<<answer<<endl;
  //  return 0;




//}
int power(){
    int num1=2; int num2=3;
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }return ans;
}



int main(){
   int  answer= power();
    cout<<"the ans is "<<answer<<endl;


}