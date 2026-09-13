#include <stdio.h>
#include <stdbool.h>
int main(){
//Q1. Write a C program to print "Hello World!".
printf("Q1\n");
printf("Hello World!\n\n");
//Q2. Write a C program to print your name, age, and city on separate lines.
printf("Q2\n");
printf("Name : Ekta Buneti\n");
printf("Age : 18\n");
printf("City : Mumbai\n\n");
//Q3. Declare an integer variable age and store the value 20. Display it using printf().
int age = 20;
printf("Q3\n");
printf("The age is: %d\n\n", age);
//Q4. Declare a float variable price and display it using the correct format specifier.
float price = 56.90;
printf("Q4\n");
printf("The price is %.2f\n\n", price);
//Q5. Declare a char variable grade and store 'A'. Display it.
char grade = 'A' ;
printf("Q5\n");
printf("the grade is: %c\n\n", grade);

//Q6 Declare three variables a = 10, b = 20, and c = 30. Display their values.
int a = 10;
int b = 20;
int c = 30;
printf("Q6\n");
printf("Value1 : %d\n", a);
printf("Value2 : %d\n", b);
printf("Value3 : %d\n\n", c);



//Q7 Declare two integers x = 5 and y = 10. Calculate and display their sum.
int x = 5;
int y = 10;
int sum = x + y;
printf("Q7\n");
printf("The sum of the number is: %d\n\n", sum);

//Q8 Declare an integer variable num = 50. Change its value to 100 and display the new value.
int number = 50;
printf("The original number is: %d\n", number);
number = 100;
printf("Q8\n");
printf("The updated value is: %d\n\n", number);
//Q9Create three variables in a single statement:
//a = 10
//b = 20
//c = 30
int a1 = 10, b2 = 20, c2 = 30;

printf("Q9\n");
printf("a = %d\n", a1);
printf("b = %d\n", b2);
printf("c = %d\n\n", c2);

//Q10Declare:
//int
//float
//char

int i = 10;
float f = 56.4;
char C = 'Y';
printf("Q10\n");
printf("Integer value: %d\n", i);
printf("float value: %.2f\n", f);
printf("char value: %c\n\n", C);

//11. Write a C program to calculate the area of a rectangle using:
//length = 10
//width = 5
int length = 10;
int width = 5;
int area = length * width;
printf("Q11\n");
printf("The area of rectangule is: %d\n\n", area);

 //Q12. Write a program to calculate the sum, difference, multiplication, and division of two integers.
int n1 = 2;
int n2 = 4;
int sum1 = n1 + n2;
int mul = n1 * n2;
int diff = n1 - n2;
int div = n1 / n2;

printf("Q12\n");
printf("The sum of the number is: %d\n", sum1);
printf("The multiplication of the number is: %d\n", mul);
printf("The division of the number is: %d\n", div);
printf("The difference of the number is: %d\n\n", diff);

//Q13. Declare marks = 75. Change it to 85 and display both the original and updated marks.
int marks1 = 75;

printf("Q13\n");
printf("The orignal maarks is: %d\n", marks1);
marks1 = 85;
printf("The updated value is: %d\n\n", marks1);

//Q14Declare ab = 10, bc = 20, cd = 30. Calculate and display their average.

int ab = 10;
int bc = 20;
int cd = 30;

int avg = ab + bc + cd;
int avg1 = avg / 3;

printf("Q14\n");
printf("The Average is: %d\n\n", avg1);







//Q15Create variables for a student:
//Student ID
//Age
//Fees
//Grade
//Display all the information using appropriate format specifiers.
int St_id = 101;
int Age = 18;
float Fees = 4500.78;
char Grade = 'A';

printf("Q15\n");
printf("Student ID: %d\n", St_id);
printf("Age: %d\n", Age);
printf("Fees: %.1f\n", Fees);
printf("Grade: %c\n\n", Grade);







//Q16. Declare E = 5 and K = 10. Swap their values using a third variable and display the result.
int E = 5;
int K = 10;
int T ;

T = E;
E = K;
K = T;

printf("Q16\n");
printf("E = 5\n");
printf("K = 10\n\n");

printf("E = %d\n", E);
printf("K = %d\n\n", K);

//Q16.1 Declare S = 20 and S1 = 30.
//Swap their values using a third variable and display the result.
int S = 20;
int S1 = 30;
int S2;

S2 = S;
S = S1;
S1 = S2;

printf("Q16.1\n");
printf("S = 20\n");
printf("S1 = 30\n\n");
printf("S = %d\n", S);
printf("S1 = %d\n\n", S1);



//Q16.2 Declare X1 = 100 and Y1 = 50. Swap their values using a third variable and display both values.
int X1 = 100;
int Y1 = 50;
int Z;

Z = X1;
X1 = Y1;
Y1 = Z;

printf("Q16.2\n");
printf("X1 = 100\n");
printf("Y1 = 50\n\n");
printf("X1 = %d\n", X1);
printf("Y1 = %d\n\n", Y1);


//Q16.3 Declare P1 = 7 and Q1 = 15. Swap their values using a
//temporary variable and display the values before and after swapping.
int P1 = 7;
int Q1 = 15;
int R;

R = P1;
P1 = Q1;
Q1 = R;

printf("Q16.3\n");
printf("P1 = 7\n");
printf("Q1 = 15\n\n");
printf("P1 = %d\n", P1);
printf("Q1 = %d\n\n", Q1);

//Q17. Declare three integers in one statement and three more integers in another statement.
//Assign the same value to multiple variables and display their sum.
int p, q, r;
int m, n, o;

p = q = r = 10;
m = n = o = 20;

int add = p + q + r + m + n + o;
printf("Q17\n");
printf("The sum all 6 numbers is: %d\n\n", add);



//Q18. Write a program to calculate the perimeter and area of a rectangle using variables.
int l = 10;
int w = 5;

int p1 = 2*l + 2*w;
printf("Q18\n");
printf("Perimeter of Rectangle: %d\n", p1);
int aofrec = l * w;
printf("Area of Rectangle: %d\n\n", aofrec);



//Q19. Write a program that stores a character using its ASCII value and displays the character.
//Example: 65 should display A.
char letter = 69;
printf("Q19\n");
printf("letter: %c\n\n", letter);

//Q20. Declare an int, float, and double. Store values in them and display them using the correct format specifiers with different decimal precisions.
int Int = 67;
float h = 45.45;

double D = 55.78;

printf("Q20\n");
printf("Integer: %d\n", Int);
printf("Float: %.3f\n", h);
printf("Double: %.4f\n\n", D);














return 0;
}
