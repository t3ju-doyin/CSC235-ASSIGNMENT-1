#include <stdio.h>

int main(){
    int count, i;
    char students[10][50];
     printf("Enter the students' names");
    for (count = 1; count <11; count++)
    {
        printf("\nName %i: ",count);
        scanf("%[^\n]s",&students[count - 1]);
    }
    printf("\nThese are the names:\n");
    for (int i  = 0; i < 9; i++)
    {
        printf("%s, ", students[i]);
    }
    printf("%s", students[9]);
    return 0;
}
