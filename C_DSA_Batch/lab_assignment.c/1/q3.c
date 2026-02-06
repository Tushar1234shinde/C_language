// 3. Write a program that does the following: Scan six real numbers a, b, c, d, e, f and compute the 
// point of intersection of the straight lines:  
// ax + by = c  
// dx + ey = f  
// Your program should specifically handle the corner case that the two given lines are parallel. 

#include <stdio.h>

int main(void)
{
    float a, b, c, d, e, f;
    float D, Dx, Dy;
    float x, y;

    printf("Enter values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Enter values of d, e, f: ");
    scanf("%f %f %f", &d, &e, &f);

    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;

    if (D == 0)
    {
        printf("The given lines are parallel\n");
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("Point of intersection: (%.2f, %.2f)\n", x, y);
    }

    return 0;
}
