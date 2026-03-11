//read n float values from the user, store them in an array and find the maximum value and its index.
#include<stdio.h>
void input(int n,float arry[n]);
int find_max_index(int n, float arr[n]);
void output(float arry[], int max_index);

int main(){
    int n;
    int max_index;
    printf("Enter the number of floating number ");
    scanf("%d",&n);

    printf("Enter the numbers :");
    float arry[n];

    input(n,arry);

    max_index=find_max_index(n,arry);

    output(arry,max_index);

    return 0;
}

void input(int n,float arry[n]){
    for(int i=0;i<n;i++){
        scanf("%f",&arry[i]);

    }
}

int find_max_index(int n,float arr[n]){
int max_index=0;
for(int i=1;i<n;i++){
    if(arr[i]>arr[max_index]){
        max_index=i;
    }
}
return max_index;
}

void output(float arry[], int max_index){
    printf("The max value of the array is %f and its index is %d", arry[max_index], max_index);
    printf("\n");
    
}