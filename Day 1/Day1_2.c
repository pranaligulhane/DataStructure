#include <stdio.h>
#define SIZE 9
int binary_search(int arr[SIZE],int key);
int main () {
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99};
    int key;
    printf("Enter the Key...");
    scanf("%d",&key);
    int result = binary_search(arr,key);
    if (result == 1)
        printf("key is found");
    else 
        printf("key is not found");
}

int binary_search(int arr[SIZE],int key)
{ 
    int left = 0;
    int right = SIZE - 1;
    int mid;
    while(left <= right){
        mid = (left+right)/2;
        if(key == arr[mid])
            return 1;
        if(key<arr[mid])
            right = mid -1;
        else 
            left = mid + 1;
    }
    return -1;

    
}