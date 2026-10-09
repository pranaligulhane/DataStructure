#include<stdio.h>
#define SIZE 6
#define SWAP(x,y) {int t=x; x=y; y=t;}
void display_array(int arr[SIZE]);
void selection_sort(int arr[SIZE]);
int main() {
    int arr[SIZE] ={30,20,60,50,10,40};
    printf("\nBefore Swap...\n");
    display_array(arr);

    selection_sort(arr);

    printf("\nBefore Swap...\n");
    display_array(arr);

}
void selection_sort(int arr[SIZE]){
    int sel_pos;
    int pos;
    int itr = 0;
    int comp = 0;
    for(sel_pos=0;sel_pos<SIZE-1;sel_pos++){
        itr++;
        
        for(pos=sel_pos+1;pos<SIZE;pos++){
            comp++;
            
            if(arr[sel_pos] > arr[pos])
            
            {
                SWAP(arr[sel_pos],arr[pos]);
            }
        }
    }
    printf("\nItraation is %d and Compration is %d",itr,comp);

}
void display_array(int arr[SIZE]){
    for(int i = 0; i<SIZE; i++) {
        printf("%4d",arr[i]);
    }
}