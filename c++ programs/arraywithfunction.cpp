#include<iostream>
using namespace std;

void printarr(int arr[], int size){
    cout<<"printing array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }

}



int main(){
    int arr[12]={1,2};
    int n = 10;
    //printarr(arr,12);

int array[13]={3,4};
int a=13;
//printarr(array,13);


char ch[5]={'a','b','c','d','e'};
for(char i=0;i<5;i++){
    cout<<ch[i]<<" ";
}

}