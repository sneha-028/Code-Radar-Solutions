#include <stdio.h> 
void selectionSort(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}