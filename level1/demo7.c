#include<stdio.h>
#include<string.h>
void inputStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);
void output(int result);

int main()
{
    char str1[100], str2[100];
    inputStrings(str1, str2);
    int result = compareStrings(str1, str2);
    output(result);
    return 0;
}
void inputStrings(char str1[], char str2[])
{
    printf("Enter the first string:\n");
    fgets(str1, 100 , stdin);

    printf("Enter the sencond string :\n");
    fgets(str2, 100 , stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

}

int compareStrings(char str1[], char str2[])
{
    return strcmp(str1, str2);
}
void output(int result )
{
    if(result == 0)
    {
        printf("The strings are equal. \n");

    }
     else if(result < 0)
     {
        printf("the first string is less than the second string. \n");

     }
        else
        {
            printf("the first string is greater than the second string. \n");
        }
}
