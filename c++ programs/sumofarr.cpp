#include<iostream>
using namespace std;


int sumarr(int arr[],int n){
int sum=0;
for (int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;
}



int main(){
    
    int arr[]={2,7,1,-4,11};
    int n =5;
    cout<<sumarr(arr,n);






}