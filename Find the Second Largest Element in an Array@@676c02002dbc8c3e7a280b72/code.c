#include <stdio.h> 
void bubbleSort(int arr[],int size){
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
int main(){
    int n;
    int arr[n];
    if (arr[n-2]==arr[0]){
        printf("-1");}
        else {
int i,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
bubbleSort(arr,n);

    printf("%d", arr[n-2]);
    if (arr[n-2]==arr[0]){
        printf("-1");
    }
        }
return 0; 
    
    }
