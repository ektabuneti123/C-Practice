#include <stdio.h>
#include <stdbool.h>
int main(){
//Q21. Write a C program for a student report containing:
//Student ID
//Age
//5 subject marks
//Total marks
//Average marks
//Grade
//Display everything properly.
int St_id = 101;
int age = 18;
int math = 80;
int history = 70;
int english = 70;
int hindi = 65;
int computer = 80;
int total = math + history + english + hindi + computer;

float avg = total / 5.0;

char grade = 'A';
printf("Q21 \n");
printf("Student ID: %d\n", St_id);
printf("Age: %d\n", age);
printf("----5 Subjects----\n");
printf("Math: %d\n", math);
printf("History: %d\n", history);
printf("English: %d\n", english);
printf("Hindi: %d\n", hindi);
printf("Computer: %d\n", computer);
printf("------------------\n");
printf("Total marks: %d\n", total);
printf("Average marks: %.2f\n", avg);
printf("Grade: %c\n\n", grade);


//Q22. Write a program to calculate the area and perimeter of a rectangle,
//then change the length and width values and calculate them again.
printf("Q22 \n");
int l = 10;
int w = 5;

int area = l * w;
int per = 2 * (l+w);
printf("Area of rectangle: %d\n", area);
printf("Perimeter of rectangle: %d\n\n", per);

//Q23. Declare five integer variables. Perform the following:
//Calculate their total
//Calculate their average
//Change the value of two variables
//Calculate the new total and average
printf("Q23 \n");
int q = 5;
int w1 = 8;
int e = 6;
int r = 3;
int u = 7;

int Total = q + w1 + e + r + u;

float avg1 = Total / 5.0;

r = 4;
u = 9;
int Total1 = q + w1 + e + r + u;

float avg1_1 = Total1 / 5.0;

printf("Total value: %d\n", Total);
printf("Average: %.2f\n", avg1);
printf("Updated total value: %d\n", Total1);
printf("Updated Average: %.2f\n\n", avg1_1);

//Q24. Write a program that stores the following information:
//studentID = 101
//age = 20
//fees = 25000.50
//grade = 'A'
//Then display the information in a properly formatted student profile
printf("Q24 \n");
int studentID = 101;
int a = 20;
float fees = 25000.50;
char g = 'A';
printf("--------Student Profile---------\n");
printf("Student ID: %d\n", studentID);
printf("Age: %d\n", a);
printf("Fees: %.2f\n", fees);
printf("Grade: %c\n\n", g);

//Q25. Write a program to calculate a shopping bill.
//Store:
//Price of item 1
//Price of item 2
//Price of item 3
//Quantity of each item
//Calculate and display the total bill.
printf("Q25 \n");
float p1 = 200;
float p2 = 200;
float p3 = 300;

int p1_Q1 = 2;
int p2_Q2 = 2;
int p3_Q3 = 4;

float T_amount = (p1 * p1_Q1) +
                 (p2 * p2_Q2) +
                 (p3 * p3_Q3);

printf("The total amoount is: %.2f\n\n", T_amount);

//Q26. Write a program to demonstrate changing values:
//a1 = 10
//b = 20
//c = 30
//Perform:
//a1 = b
//b = c
//c = a1
//Display the values after every change.
printf("Q26 \n");

int a1 = 10;
int b = 20;
int c = 30;

a1 = b;
b = c;
c = a1;

printf("a1 = %d\n", a1);
printf("b = %d\n", b);
printf("c = %d\n\n", c);


//Q27. Write a program that stores three characters using their ASCII values and displays:
//Their characters
//Their ASCII values
printf("Q27 \n");

char l1 = 67;
char l2 = 98;
char l3 = 68;

printf("The ASCII value 67: %c\n", l1);
printf("The ASCII value 98: %c\n", l2);
printf("The ASCII value 68: %c\n\n", l3);

//Q28. Write a program using int, float, and double to calculate the total cost of a product.
//Use:
//Product price
//Quantity
//Discount
//Final price
//Display the result with 2 decimal places.
printf("Q28 \n");
float price = 340;
int quanty = 2;
double Discount = 50.456;
double alltotal = price * quanty;
double discountamot = alltotal * Discount / 100;
double amount = alltotal - discountamot;

printf("The total amount is: %.2f\n\n", amount);

//Q28.1 Write a program using int, float, and double to calculate an employee's salary. Use:
//Basic salary
//Bonus percentage
//Bonus amount
//Final salary
//Display final salary with 2 decimal places.

printf("Q28.1 \n");
int BSalary = 50000;
double BonusP = 30.785;
double Bamt = BSalary * BonusP / 100;
double FS = BSalary + Bamt;
printf("The Basic salary amount is: %d\n", BSalary);
printf("The Bonus amount is: %.2f\n", Bamt);
printf("The final salary amount is: %.2f\n\n", FS);

//Q28.2 Write a program using int, float, and double to calculate travel cost. Use:
//Distance
//Fuel used
//Fuel price
//Total cost
//Display cost with 2 decimal places.
printf("Q28.2 \n");
int distance = 20;
float fuel = 30;
double Fprice = 100;
double tCost = fuel * Fprice;
printf("Distance %d\n", distance);
printf("The Total cost is: %.2f\n\n", tCost);

//Q29. Write a C program for a rectangle where:
//length = 15
//width = 8
//Calculate:
//Area
//Perimeter
//Then change:
//length = 20
//width = 10
//Calculate the area and perimeter again
printf("Q29 \n");
int length = 15;
int width = 8;
float a_a = length *  width;
float peri = 2 * (length + width);
printf("Area: %.2f\n", a_a);
printf("Perimeter: %.2f\n", peri);
length = 20;
width = 10;
float a_1 = length *  width;
float peri1 = 2 * (length + width);


printf("Area: %.2f\n", a_1);
printf("Perimeter: %.2f\n", peri1);


//Q30. Challenge Question: Write one C program that demonstrates all the topics you've studied:
//Multiple variables
//int
//float
//double
//char
//String
//Format specifiers
//Changing variable values
//Arithmetic calculations
//ASCII characters
//printf()

int num = 10;
float Float_num = 45.89673;
double double_num = 45.9087654321;
char alph = 'Y';
char string[] = "Today day is quit good!!";
printf("integer number: %d\n", num);
printf("Float value: %.8f\n", Float_num);
printf("double value: %.12f\n", double_num);
printf("character: %c\n", alph);
printf("string:  %s\n", string);
num = 20;
printf("The updated value is : %d\n", num);
printf("------Arithmetic calculations-------\n\n");
int n1 = 5;
int n2 = 6;
printf("5 + 6: %d\n", n1 + n2);
printf("5 - 6: %d\n", n1 - n2);
printf("5 * 6: %d\n", n1 * n2);
printf("5 / 6: %d\n", n1 / n2);
printf("5 %% 6: %d\n", n1 % n2);
printf("ASCII characters: %c\n", 65);











return 0;
}
