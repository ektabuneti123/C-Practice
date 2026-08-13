#include <stdio.h>
int main(){
//Q1. Declare an int variable to store the value 1000 and display it using the appropriate format specifier.
int a = 1000;
printf("value: %d\n\n", a);

//Q2. Declare a float variable to store 5.75 and display it with exactly 2 digits after the decimal point.

float num = 5.75;
printf("value of decimal: %.2f\n\n", num);

//Q3. Declare a double variable to store 19.99 and display it using the appropriate format specifier.
double num_1 = 19.99;
printf("double value: %.f\n\n", num_1);

//Q4. Declare a float variable with the value 3.5. Display it four times with:
//Default precision
//1 digit after decimal
//2 digits after decimal
//4 digits after decimal
float f1 = 3.5;
printf("default: %f\n", f1);
printf("1 digit: %.1f\n", f1);
printf("2 digit: %.2f\n", f1);
printf("3 digit: %.3f\n", f1);
printf("4 digit: %.4f\n\n", f1);

//Q5. Declare two integer variables with values 15 and 4. Divide them and display the result using an integer variable. Observe the output.
int x = 15;
int y = 4;
int divide = x/y;
printf("The division value is: %d\n\n", divide);


//Q6. Store 7.5 in a float variable and display it with 1, 2, and 3 digits after the decimal point.
float a1 = 7.5;
printf("value 1: %.1f\n", a1);
printf("value 2: %.2f\n", a1);
printf("value 3: %.3f\n\n", a1);

//Q7. Declare two integer variables with values 5 and 2. Perform their division and store the result in a float variable.
//Display the result and observe whether you get 2 or 2.5.

int I1 = 5;
int I2 = 2;
float div = I1/I2;
printf("The value division is: %f\n", div); //answer is 2.000000



//Q8. Perform the division of 5 by 2 in such a way that the result is displayed as 2.5 instead of 2. Use the concept of type conversion.
int a_1 = 5;
int b = 2;
float d1 = (float)a_1/b;
printf("the result is: %.1f\n\n", d1);
//Q9. Create a program that stores 10 and 4 as integers and demonstrates the difference between:
//Integer division
//Division after converting one value to a floating-point type
int p1 = 10;
int p2 = 4;
int d_1 = p1/p2;
float d_2 = (float)p1/p2;
printf("Integer division: %d\n", d_1);
printf("Division after converting one value to a floating-point type: %.1f\n\n", d_2);










return 0;
}

