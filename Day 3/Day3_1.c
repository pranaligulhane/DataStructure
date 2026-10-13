#include <stdio.h>
#define SIZE 6

void display_array(int arr[SIZE]);
void inseration_sort(int arr[SIZE]);
int main(){
    int arr[SIZE] = {55,44,22,66,11,33};
    printf("Before the swap: \n");
    display_array(arr);

    inseration_sort(arr);

    printf("\n After the swap: \n");
    display_array(arr);
}
void inseration_sort(int arr[SIZE]){
    int i;
    for(i = 1; i<SIZE;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && key<arr[j]){
            arr[j+1] =arr[j];
            j--;
    
        }
        arr[j+1] = key;
    }
}
void display_array(int arr[SIZE]){
    for(int i = 0; i<SIZE;i++){
        printf("%4d",arr[i]);
    }
}