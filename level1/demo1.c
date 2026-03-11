//read n float values from the user, store them in an array and find the maximum value and its index.
#include<stdio.h>
void input(int n,float arry[n]);
int find_max_index(int n, float arr[n]);
void output(float arry[n], int max_index);

int main(){
    int n;
    printf("Enter the number of floating number ");
    scanf("%d",&n);

    printf("Enter the numbers :");
    float arry[n];

    input(n,arry);

    find_max_index(n,arry);

    output(arry,max_index);

    return 0;
}

void input(int n,float arry[n]){
    for(int i=0;i<n;i++){
        scanf("%f",&arry[i]);

    }
}

find_max_index(int n,float arr[n]){
int max_index=0;
for(int i=1;i<n;i++){
    if(arry[i]>arry[max_index]){
        max_index=i;
    }
}
return max_index;
}

void output(foat)