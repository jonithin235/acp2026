#include<stdio.h>
typedef struct {
    	char name[50];
    	float length;
    	float width;
    	float area;
} Rectangle;

Rectangle input();
float calculate_area(Rectangle rect);
void compare_areas(Rectangle r1 , Rectangle r2,Rectangle r3);

int main(){
    
	Rectangle r1,r2,r3;
	r1=input();
	r2=input();
	r3=input();
	r1.area=calculate_area(r1);
	r2.area=calculate_area(r2);
	r3.area=calculate_area(r3);

	compare_areas(r1,r2,r3);
	return 0;
	
}

Rectangle input(){
	 Rectangle rect;

    printf("Enter name: ");
    scanf("%s", rect.name);

    printf("Enter length: ");
    scanf("%f", &rect.length);

    printf("Enter width: ");
    scanf("%f", &rect.width);

    return rect;
}

float calculate_area(Rectangle rect){
	return rect.length*rect.width;
}

void compare_areas(Rectangle r1 , Rectangle r2,Rectangle r3){
	if(r1.area>r2.area && r1.area>r3.area){
		printf("Are of %s is the largets with area %.2f",r1.name,r1.area);
	}
	else if(r2.area > r3.area){
		printf("Area of %s is the largestwith area %.2f",r2.name,r2.area);
	}
	else
		printf("Area of %s is the largest with area %.2f",r3.name,r3.area);

}