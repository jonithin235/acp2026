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
    int count = readFromTextFile(students, n ,"students.txt");
    // Output
    printf("\n--- Students read from ASCII file ---\n");
    printStudents(students, count);

    return 0;
}

// Function to take input
void inputStudents(Student students[], int n) {
   for(int i=0;i<n;i++){ 
        printf("\nEnter details for student %d:\n",i );

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
        return 0;
    }
    int count=fwrite(students,sizeof(students),n,fp);
    fclose(fp);
}

// Read from text file
int readFromTextFile(Student students[], int max, const char *filename) {
   FILE *fp=fopen("students.txt","r");
    if(fp==NULL){
        printf("Error opening file for reading\n");
    return 0;
    }
    int count=fread(students,sizeof(students),100,fp);
    fclose(fp);
    return count;
}

// Print students
void printStudents(Student students[], int n) {
    for(int i=0;i<n;i++){
        printf("%d %s %.2f\n",students[i].id,students[i].name,students[i].marks);
    }
}