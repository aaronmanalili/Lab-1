#include <stdio.h>

// Lab1.c created by Aaron Manalili on September 16

// PI is the ratio of the diameter to the circumference of a circle
#define PI 3.14159

/*
 I'm now going to declare my variables
 Calculated variables on one line, input variables on another.
*/

 double weight, volume, batchWeight, innerA, outerA, area;
 double innerD, outerD, density, thickness;
 int quantity;

void main()
{
  // Asks for user input for the Inner Diameter, Outer Diameter, Density, Thickness, and Quantity of the Washer(s).

  printf("Please enter the Inner Diameter of the Washer in cm: ");
  scanf("%lf", &innerD);

  printf("Please enter the Outer  Diameter of the Washer in cm: ");
  scanf("%lf", &outerD);

  printf("Please enter the density of the material of the Washer in g/cm3: ");
  scanf("%lf", &density);

  printf("Please enter the thickness of the Washer in cm: ");
  scanf("%lf", &thickness);

  printf("Please enter the number of washers: ");
  scanf("%d", &quantity);


  // The bottom part calculates the Inner Area, Outer Area, Area, Volume, Weight, and batchWeight.

  innerA = PI*(innerD/2)*(innerD/2);
  outerA = PI*(outerD/2)*(outerD/2);
  area = outerA - innerA;
  volume = area * thickness;
  weight = volume * density;
  batchWeight = quantity * weight;

  // The last part prints out the Rim Area, Weight of the Washer, and the weight of the batch of washers.

  printf("The Washer's Rim Area is %10.5lf\n", area);
  printf("The Washer's Weight is %10.5lf\n", weight);
  printf("The weight of the batch of Washers is %10.5lf\n", batchWeight);
}

 
