#include<stdio.h>
#include<string.h>

void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);

int main()
{
    char str1[100],str2[50];
    printf("Enter the first string:\n");
    input(str1);
    printf("Enter the second string:\n");
    input(str2);
    concatenate_strings(str1,str2);
    display(str1);
    return 0;
}
void input(char *str)
{
    fgets(str, 100, stdin);
    int i = 0;
    while (str[i] && str[i] != '\n') i++;
        if (str[i] == '\n') str[i] = '\0';

}

void concatenate_strings(char *str1, char *str2){
    int i=0;
    while(str1[i] != '\0'){
        i++;

    }
    int j=0;
    while(str2[j] != '\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
void display(char *str){
    printf("Concatenated string: %s\n", str);
    
}