//file handaling in c.
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

// Function declarations
void inputStudents(Student students[], int n);
void writeToTextFile(Student students[], int n, const char *filename);
int readFromTextFile(Student students[], int max, const char *filename);
void printStudents(Student students[], int n);

// Main
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);

    if (n<=0) {
        printf("Invalid input\n");
        return 0;
    }
    Student students[n];
    // Input
    inputStudents(students, n);
    // Write to file
    writeToTextFile(students, n ,"students.txt");
    // Read from file
    int count = readFromTextFile(students, 100 ,"students.txt");
    // Output
    printf("\n--- Students read from ASCII file ---\n");
    printStudents(students, count);

    return 0;
}

// Function to take input
void inputStudents(Student students[], int n) {
   for(int i=0;i<n;i++){ 
        printf("\nEnter details for student %d:\n",i+1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name: ");
        scanf("%s",students[i].name);
        printf("Enter Marks: ");
        scanf("%f",&students[i].marks);

   }

}

// Write to text file
void writeToTextFile(Student students[], int n, const char *filename) {
    FILE *fp=fopen("students.txt","w");
    if(fp==NULL){
        printf("Error opening file for writing\n");
        return;
    }
    for(int i=0;i<n;i++){
        fprintf(fp, "%d %s %.2f\n", students[i].id,students[i].name,students[i].marks);
    }
    fclose(fp);
}

// Read from text file
int readFromTextFile(Student students[], int max, const char *filename) {
   FILE *fp=fopen("students.txt","r");
    if(fp==NULL){
        printf("Error opening file for reading\n");
    return 0;
    }
    int i=0;
    while(i<max){
    int result=fscanf(fp, "%d %s %f",&students[i].id , students[i].name,&students[i].marks);
    if(result!=3){
        break;
    }
    i++;
    }
    fclose(fp);
    return i;
}

// Print students
void printStudents(Student students[], int n) {
       for(int i=0;i<n;i++){
        printf("%d %s %.2f\n",
        students[i].id,
        students[i].name,
        students[i].marks);
    }
}
