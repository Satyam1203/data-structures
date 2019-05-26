#include<stdio.h>
#include<stdlib.h>

// swapping two numbers
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// quicksort recursive function
void quicksort(int arr[],int lower,int upper){
    int pivot = arr[lower];
    int l,h;
    if(lower >= upper-1) return;
    l=h=lower+1;
    while(h<upper){
        if(arr[h] < pivot)
        {
            swap(&arr[l],&arr[h]);
            l++;
        }
        h++;
    }
    swap(&arr[lower],&arr[l-1]);
    quicksort(arr,lower,l);
    quicksort(arr,l,upper);
}

int main(){
    int a[10]= {23,65,98,42,13,64,78,24,95,46};
    quicksort(a,0,10);
    // swap(&a[1],&a[2]);
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}