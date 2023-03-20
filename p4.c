
/*
4. WAP
to find the area of the circle. Take radius of circle from user as input and print the result in
below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.
*/

#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter radius of circle\n");
    scanf("%f",&r);
    area=3.142*r*r;
    printf("Area of circle is %f having the radius %f",area,r);
    return 0;
}


/*
output 

Enter radius of circle
10.10
Area of circle is 320.515442 having the radius 10.100000

*/