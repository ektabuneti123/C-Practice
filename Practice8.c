#include <stdio.h>
int main (){
//Q1. Declare two integer variables x = 20 and y = 5. Calculate and display their sum, difference, multiplication, and division.
int x = 20;
int y = 5;

int sum = x + y;
int diff = x - y;
int multi = x * y;
int div = x / y;

printf("The sum of x and y is: %d\n", sum);
printf("The difference of x and y is: %d\n", diff);
printf("The multiplication of x and y is: %d\n", multi);
printf("The division of x and y is: %d\n\n", div);

//Q2. Declare two integers a = 17 and b = 5. Calculate and display the remainder using the modulus operator %.
int a = 17;
int b = 5;
int d = a % b;
printf("The remainder of a and b is: %d\n\n", d);

//Q3. Declare an integer variable num = 10. Use the increment operator to increase its value by 1 and
// display the result.
int num_1 = 10;
++num_1;
printf("The increment of num variable is: %d\n\n", num_1);

//Q4. Declare x = 25 and y = 4. Display the results of:
//Addition
//Subtraction
//Multiplication
//Division
//Modulus
int x1 = 25;
int y1 = 4;
printf("Addition: %d\n", x1 + y1);
printf("Subtraction: %d\n", x1 - y1);
printf("Multiplication: %d\n", x1 * y1);
printf("Division: %d\n", x1 / y1);
printf("Modulus: %d\n\n", x1 % y1);

//Q5. Declare num = 50. Increment it twice and display the final value.
int num = 50;
++num;
++num;
printf("The Increment by twic is: %d\n\n", num);



//Q6. Declare num = 20. Increment it once and then decrement it once. Display the value after each operation.
int n = 20;
++n;
printf("Increment it once: %d\n\n", n);
--n;
printf("decrement it once: %d\n\n", n);

//Declare w = 20 and v = 6. Calculate the remainder using %,
//then increment w by 1 and decrement v by 1. Display all results.
int w = 20;
int v = 6;
int m = w % v;
printf("The reminder is %d\n", m);
++w;
printf("The increment by 1 is %d\n", w);
--v;
printf("The decrement by 1 is %d\n\n", v);



//Q8. Declare o = 100. Increment it three times and then decrement it twice.
//Display the value after each operation.
int o = 100;
++o;
++o;
++o;
printf("The increment by 3 is: %d\n", o);
--o;
--o;
printf("The decrement by 2 is: %d\n\n", o);

//Declare f = 10 and h = 3, find their remainder, increment x, decrement y, and display the results.
int f = 10;
int h = 3;
int rem = f % h;
printf("The reminder is: %d\n", rem);

++f;
printf("The increment for variable f is: %d\n", f);
--h;
printf("The decrement for variable f is: %d\n", h);

return 0;
}
