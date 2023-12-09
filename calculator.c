#include<stdio.h>
#include<math.h>

int main() {

// the 2 double variables
double n1 , n2 ; 

// taking user input for the 2 numbers
printf("Enter the 2 nums: ");
scanf("%lf  %lf " , &n1 , &n2);

//calculate the result 
double res = pow(n1,n2);

// print the result
printf("Result : %lf \n" ,res );
return 0;
}