#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int i;
    for(i=1; i<=num; i++){
        printf("%d\n",i);
    }
    
    return 0;
}
