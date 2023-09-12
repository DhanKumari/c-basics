#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end = size-1;
    while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }



}


void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}





int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={6,7,8,9,10,11};

    reverse(arr,5);
    reverse(brr,6);

    printArr(arr,5);
    printArr(brr,6);

return 0;

}