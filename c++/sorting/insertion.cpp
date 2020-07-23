//c++ program for insertion sort

#include <iostream>
using namespace std;



int main(){

    

    int arr[] = {1,43,65,7,8,10,4};
    int n = sizeof(arr) / sizeof(arr[0]); 

    InsertionSort(arr,n);
    printArray(arr,n);

    return 0;

}


void InsertionSort(int arr[], int n){

    int key, i, j;

    for(i=1; i<n; i++){
        key = arr[i];
        j=i-1;


        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]= key;

    }

}


void printArray(int arr[], int n){

    int i;

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
