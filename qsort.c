#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int arr[],int lower,int upper){
    int pivot = arr[lower];
    int l=lower+1,h=upper-1;
    if(lower>=upper-1) return;
    while(l<=h){
        if(arr[l]<pivot)
        {
            l++;
        }
        else{
            if(arr[h]<pivot){
                swap(&arr[l],&arr[h]);
            l++;
            }
        }
        if(l>h) break;
        if(arr[h]>=pivot)
        {
            h--;
        }
        else{
            swap(&arr[h],&arr[l]);
            l++;
        }
    }
    swap(&arr[lower],&arr[l-1]);
    quicksort(arr,lower,l);
    quicksort(arr,l,upper);
}

int main(){
    int a[10]= {23,752,9,42,13,124,8,244,95,436};
    quicksort(a,0,10);
    // swap(&a[1],&a[2]);
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}