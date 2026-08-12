#include <stdio.h>
int main(){
//Q13. Store the marks of three subjects in three integer variables. Calculate and display the total marks.
int sub_1 = 40;
int sub_2 = 46;
int sub_3 = 48;

int Total_marks = sub_1 + sub_2 + sub_3;
printf("The total marks of subject are: %d\n\n", Total_marks);


//Q14. Store the marks of three subjects. Calculate and display their average.
int maths = 30;
int english =45;
int hindi = 50;
int avg = (maths + english + hindi)/3;
printf("The average of three subject is: %d\n\n", avg);

//Q15. Store the length and width of a rectangle.
//Display the length, width, and calculated area using appropriate messages.
int L=70;
int B=35;
int area = L * B;
printf("Length= %d\n", L);
printf("Breadth= %d\n", B);
printf("The area of rectangle is: %d\n\n", area);

//Q16. Store the student ID, age, fee, and
//grade in appropriate data types and display them with proper labels.
int stud_ID = 11;
int stud_age = 18;
float stud_fee = 45000.20;
char stud_g = 'B';

printf("Student ID: %d\n", stud_ID);
printf("Student age: %d\n", stud_age);
printf("Student fee: %.2f\n", stud_fee);
printf("Student Grade: %c\n\n", stud_g);

//Q17. Store the prices of three items in float variables.
//Calculate and display the total price.
float p_1 = 40.5;
float p_2 = 30.8;
float p_3 = 35.10;
float Total = p_1 + p_2 + p_3;

printf("The total price of the products is: %.2f\n\n", Total);
//Q18. Store the length and width of a rectangle.
//Calculate the area and display the result in this format:
//Length is: ...
//Width is: ...
//Area of the rectangle is: ...
int length = 789;
int width = 456;
int area_1 = length * width;
printf("Length is: %d\n", length);
printf("Width is: %d\n", width);
printf("Area of the rectangle is: %d\n",area_1);



return 0;
}
