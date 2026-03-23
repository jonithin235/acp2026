#include <stdio.h>
void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[n], int b[n]);
int main(){
    int n=4;
    int a[n];
    int b[n];
    printf("Enter the elements of the first array:");
    read_array(n,a);
    printf("Enter the elements of the second array:");
    read_array(n,b);
    swap_array(n,a,b);
    printf("Array 1 , after swapping\n");
    print_array(n,a);
    printf("Array 2 ,after swapping\n");
    print_array(n,b);
    return 0;
}
void read_array(int n, int arr[]){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print_array(int n, int arr[]){
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);

    }
}
void swap_array(int n, int a[n], int b[n]){
    for(int i=0;i<n;i++){
        int temp;
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
