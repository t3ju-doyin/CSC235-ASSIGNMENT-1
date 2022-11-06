#include<stdio.h>
#include<string.h>

int main(){
    char reverseString[100];
    int length, letter;
    printf("Please enter the sentence you want to reverse: \n");
    scanf("%[^\n]s",&reverseString);
    length = strlen(reverseString);
    printf("This is the reversed sentence: \n");
    for (letter = length - 1; letter>=0; letter--){
        
        printf("%c",reverseString[letter]);
    }
    return 0;
}