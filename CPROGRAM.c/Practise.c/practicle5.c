 //This program is written by 24DCS121_Sneh
 #include <stdio.h>
 int main() {
 // Declare variables
 float celsius, fahrenheit;
 // Input temperature in Celsius
 printf("Enter the temperature in Celsius: ");
 scanf("%f", &celsius);
 // Convert Celsius to Fahrenheit
 fahrenheit = (celsius * 9 / 5) + 32;
 // Display the result
 printf("Temperature in Fahrenheit: %f\n", fahrenheit);
 return 0;
 }