#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for (int i=0; i<size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){ 
    int arr[5]={1,2,3,4,8};
    int key=9;

    bool found =search(arr,5,key);

    if(found){
        cout<<"the element is present"<<endl;
            }
    else{
        cout<<"the element is not present"<<endl;
    }

return 0;
}