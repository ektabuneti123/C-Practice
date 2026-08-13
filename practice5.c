#include <stdio.h>
int main(){
//Q1. Declare an
//int variable to store your age and display its value.
int age = 67;
printf("The age of the given person is: %d\n\n", age);

//Q2. Declare a float variable to store the price of an
//item and display it with 2 decimal places.
float a = 56.305;
printf("The price of the product is: %.2f\n\n", a);

//Q3. Declare a char variable to store the grade 'A' and display
//the grade using %c.
char G='A';
printf("The grade is: %c\n\n", G);

//Q4. Declare variables of type int, float, double, and char.
//Store an appropriate value in each and display all four values.
int num = 89;
float Float = 89.3;
double num_1 = 78.678786590;
char c = 'Y';
printf("int: %d\n", num);
printf("float: %.3f\n", Float);
printf("double: %.4f\n", num_1);
printf("char: %c\n\n", c);

//Q5. Store the value 1.99 in both a float variable and a double variable.
//Display both values with 2 decimal places.
float f1 = 1.99;
double d1 = 1.99;
printf("float: %.2f\n", f1);
printf("double: %.2f\n\n", d1);

//Q6. Declare three char variables and store
//the characters 'C', 'A', and 'T'. Display them one after another to produce:
//CAT
char c1 = 'C';
char c2 = 'A';
char c3 = 'T';
printf("%c%c%c\n\n", c1, c2, c3);

//Q7. Declare a char variable and store the ASCII value 65 in it.
//Display the corresponding character using %c.
char c_1 = 65;
printf("%c\n\n", c_1);

//Q8. Declare three char variables and store the ASCII values 66, 67, and 68.
//Display the corresponding characters one after another.
char l1 = 66;
char l2 = 67;
char l3 = 68;
printf("Value 1: %c\n", l1);
printf("Value 2: %c\n", l2);
printf("Value 3: %c\n\n", l3);

//Q9. Create a program that stores the following
//information using appropriate data types and displays it:
//Student age → int
//Student fee → float
//Student percentage → double
//Student grade → char
int stud_age = 19;
float stud_fee = 4500.350;
double stud_per = 78.367;
char stud_G = 'B';
printf("Student age: %d\n", stud_age);
printf("Student fee: %.2f\n", stud_fee);
printf("Student percentage: %.2f\n", stud_per);
printf("Student Grade: %c\n\n", stud_G);











return 0 ;
}
