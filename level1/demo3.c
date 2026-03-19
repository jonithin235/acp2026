#include<stdio.h>
typedef struct {
        float length;
    	float width;
    	float area;
} Rectangle;

void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int largestIndex, Rectangle rects[]);

//take no. of rectangles from user and their length and width, calculate area, use stucture array.
int main(){
    int n;

    printf("ENTER THE NUMBER OF RECTANGLES:");
    scanf("%d",&n);
    
     Rectangle rects[n];
    input(n,rects);

    calculate_area(n,rects);

    int largestIndex = findLargestArea(n,rects);
    output(largestIndex,rects);
    return 0;
}
void input(int n, Rectangle rects[n]){
    for(int i=0;i<n;i++){
        printf("Enter the length and width of rectangle %d:",i+1);
        scanf("%f%f",&rects[i].length,&rects[i].width);
    }
}
void calculate_area(int n, Rectangle rects[n]){
    for(int i=0;i<n;i++){
        rects[i].area=rects[i].length*rects[i].width;
    }
}

int findLargestArea(int n, Rectangle rects[n]){
    int largestIndex = 0;
    for(int i=1;i<n;i++){
        if(rects[i].area > rects[largestIndex].area){
            largestIndex = i;
        }
    }
    return largestIndex;
}

void output(int largestIndex, Rectangle rects[]){
    printf("The rectanle with the largest area is %d with area %.2f",largestIndex,rects[largestIndex].area);

}