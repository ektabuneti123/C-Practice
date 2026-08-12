#include <stdio.h>
int main(){
//Q7. Declare two integers a and b. Calculate and display their sum.
int a = 135;
int b = 125;

int sum = a+b;
printf("The sum of a=135 and b=125 is: %d\n\n", sum);

//Q8. Declare two integers x and y. Calculate and display their difference
int x = 678;
int y = 785;

int diff = x - y;
printf("The difference(-) of x=678 and y=785 is: %d\n\n", diff);


//Q9. Declare two integers p and q. Calculate and display their product.
int p = 67;
int q = 78;

int multiply = p * q;
printf("The Product of p=67 and q=78 is: %d\n\n", multiply);


//Q10. Declare two integers length and width. Calculate and display the area of a rectangle.
int len = 56;
int width = 45;
int area = len*width;
printf("The area of rectangle: %d\n\n", area);

//Q11. Declare length and width variables. Calculate and display the area and perimeter of a rectangle.
int L = 78;
int B = 56;
int area_1 = L * B;
int perimeter = 2 * (L + B);
printf("The area of rectangle is: %d\n", area_1);
printf("The perimeter of rectangle is: %d\n\n", perimeter);


//Q12. Declare a float variable for the price of an item and an integer variable for its quantity.
//Calculate and display the total cost.
float price_pen = 13.40;
int quantity = 8;
float Total_cost = price_pen*quantity;
printf("The total cost of 8 pens is: %.2f\n\n", Total_cost);

return 0;
}
