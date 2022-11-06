#include <stdio.h>
#include <math.h>
#include <complex.h>
// void calculateDiscriminant(){

// }
int main(){
    int int_1,int_2,int_3;
    double realPart ,imgPart;
    float disc,root_1,root_2; //disc is short for discriminant
    char equationType;
    printf("Enter the coefficient of x²:");
    scanf("%i",&int_1);
    printf("\nEnter the coefficient of x:");
    scanf("%i",&int_2);
    printf("\nEnter the constant:");
    scanf("%i",&int_3);

    disc = pow(int_2,2) -(4*int_1*int_3) ;
    root_1 = (-int_2+ sqrt(disc))/(2*int_1);
    root_2 = (-int_2 - sqrt(disc))/(2*int_1);
    if(disc>0 ){
        printf("The equation has 2 distinct roots which are:\n");
         printf("%.2f,%.2f",root_1,root_2);
    } else if (disc ==0){
        printf("The equation has equal roots which are both:\n");
         printf("%.2f",root_1);

    }else{
        printf("There are two complex roots in this equation which are:\n");
        realPart = -int_2 / (2 * int_1);
        imgPart = sqrt(-disc) / (2 * int_1);
        printf("%.2f+%.2fj \n %.2f-%.2fj", realPart, imgPart, realPart, imgPart);
    
    }
    
   
    
    
    // calculateDiscriminant();
}
