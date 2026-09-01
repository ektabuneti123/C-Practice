#include <stdio.h>
int main(){
// Q60. Declare two integer variables x = 20 and y = 5.
//Calculate and display their sum, difference, multiplication, and division.
int x = 20;
int y = 5;

printf("The sum of the x = 20 and y = 5 is: %d\n", x + y);
printf("The difference of the x = 20 and y = 5 is: %d\n", x - y);
printf("The multiplication of the x = 20 and y = 5 is: %d\n", x * y);
printf("The division of the x = 20 and y = 5 is: %d\n\n", x / y);

//Q61. Declare two integers a = 17 and b = 5.
//Calculate and display the remainder using the modulus operator %.
int a = 17;
int b = 5;

int rem = a % b;
printf("The reminder of a = 17 and b = 5: %d\n\n", rem);

//Q62. Declare an integer variable num = 10.
//Use the increment operator to increase its value by 1 and display the result.
int num = 10;
num++;
printf("the increment value is %d\n\n", num);


//Q63. Declare a = 25 and b = 4. Display the results of:
//Addition
//Subtraction
//Multiplication
//Division
//Modulus
int a_1 = 25;
int b_2 = 4;
printf("Addition: %d\n", a_1 + b_2);
printf("Subtraction: %d\n", a_1 - b_2);
printf("Multiplication: %d\n", a_1 * b_2);
printf("Division: %d\n", a_1 / b_2);
printf("Modulus: %d\n\n", a_1 % b_2);

//64. Declare num_1 = 50.
//Increment it twice and display the final value.
int num_1 = 50;
num_1++;
num_1++;
printf("The increment value is: %d\n\n", num_1);

//65.  Declare h = 20. Increment it once and then
//decrement it once.
//Display the value after each operation.
int h = 20;
h++;
printf("The increment value is: %d\n", h);
h--;
printf("The decrement value is %d\n\n", h);



return 0;
}
