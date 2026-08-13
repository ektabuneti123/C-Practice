#include <stdio.h>
int main(){
//Q1. Declare an integer variable with value 9. Assign it to a float variable and display the float value.
int a1  = 9;
float a_1 = (float)a1;
printf("The converted integer to float: %f\n\n", a_1);
//Q2. Declare two integer variables with values 100 and 50. Use the + operator to calculate and display their sum.
int x = 100;
int y = 50;
int z = x + y;
printf("The addition of x and y is: %d\n\n", z);

//Declare three integer variables a = 10, b = 20, and c = 30. Calculate their sum and display the result.
int a = 10;
int b = 20;
int c = 30;
printf("The sum of all three number is: %d\n\n", a+b+c);

//Q4. Create a variable sum1 that stores the result of 100 + 50. Then create sum2 by adding 250 to sum1. Display both results.
int x1 = 100;
int a2 = 50;
int sum1 = x1 + a2;
int sum2 = sum1 + 250;
printf("%d\n", sum1);
printf("%d\n\n", sum2);
//Q5. Create two integer variables with values 40 and 60. Add them and store the result in a third variable.
//Then add another value 100 to that result and display the final answer.
int h = 40;
int p = 60;
int q = h + p;
int t = q + 100;
printf("The final value is: %d\n\n", t);

//Q6. Declare an integer variable with value 15.
//Assign it to a float variable using implicit conversion and display the result with 2 decimal places.
int num = 15;
float num_1 = (float)num;
printf("The implicit conversion is: %.2f\n\n", num_1);

//Q7. Create sum1 = 100 + 50, then calculate sum2 by adding 250 to sum1, and
//finally calculate sum3 by adding sum2 to itself. Display all three results.
int sum_1 = 100 + 50;
int sum_2 = sum_1 + 250;
int sum_3 = sum_2 + sum_2;
printf("The result 1: %d\n", sum1);
printf("The result 2: %d\n", sum2);
printf("The result 3: %d\n\n", sum_3);

//Q8. Create two integer variables with values 20 and 30. Calculate their sum,
//store it in a third variable, then add the first variable again to the result. Display the final value.
int int1 = 20;
int int2 = 30;
int add = int1 + int2;
int add1 = add + int1;
printf("The final vaalue is: %d\n", add1);

//Q9. Create an integer variable with value 100, assign it to a float variable using implicit conversion,
//then add 25.5 to the float variable. Display the final result with 2 decimal places.
int e = 100;
float result = e;
float Final = result + 25.5;
printf("The result is: %.2f\n", Final);










return 0;
}
