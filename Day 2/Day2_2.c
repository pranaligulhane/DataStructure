#include<stdio.h>
#define SIZE 6
#define SWAP(x,y) {int t=x; x=y; y=t;}
void display_array(int arr[SIZE]);
void bubble_sort(int arr[SIZE]);
int main() {
    int arr[SIZE] ={30,20,60,50,10,40};
    printf("\nBefore Swap...\n");
    display_array(arr);

    bubble_sort(arr);

    printf("\nAfter Swap...\n");
    display_array(arr);

}
void bubble_sort(int arr[SIZE]){
    int pos;
    int itr;
    int itration = 0;
    int comp = 0;
    for(itr=0; itr<SIZE-1; itr++){
        itration++;
        
        for(pos =0; pos<SIZE-1-itr; pos++){
            comp++;
            
            if(arr[pos] > arr[pos+1])
            
            {
                SWAP(arr[pos],arr[pos+1]);
            }
        }
    }
    printf("\nItraation is %d and Compration is %d",itration,comp);

}
void display_array(int arr[SIZE]){
    for(int i = 0; i<SIZE; i++) {
        printf("%4d",arr[i]);
    }
}