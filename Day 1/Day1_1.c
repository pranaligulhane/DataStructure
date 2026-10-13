//Linear Search/Sequential Search:
//input array int arr[SIZE]={33,55,88,77,44,11,66,22,99};
#include<stdio.h>
#define SIZE 9
int comparison = 0; 
int linear_Search(int arr[SIZE], int key);
int main()
{
    int arr[SIZE]={33,55,88,77,44,11,66,22,99};
    int key;
    printf("\n Enter key ...");//input key to search from user
    scanf("%d",&key);
    int result = linear_Search(arr,key);  //key found => 1  key not found =>-1
    if(result == 1)
        printf("\n key found in comparison =%d ",comparison);
    else 
        printf("\n key not found in comparison =%d ",comparison);
    return 0;
}

//return value ==> key found => 1  key not found =>-1
int linear_Search(int arr[SIZE], int key)
{
    comparison = 0;
    for (int i = 0 ; i < SIZE; i++)
    {
        comparison ++;
        if(arr[i]  == key)
            return 1;
    }
    return -1;
}