#include <stdio.h>
#include <string.h>
void bubbleSort(char* arr[],int size) {
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
             if(arr[j]>arr[j+1]) {
            char* temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

}
void printArray(char* arr[],int size) {
    for(int i =0;i< size;i++) {
        printf("%s ", arr[i] );
    }
}