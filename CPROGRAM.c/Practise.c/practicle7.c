//This program is written by 24DCE074__MANAV__MERJA
 #include <stdio.h>
 int main() {
 // Raman's assets
 int raman_bungalow = 12000000;
 int raman_plot = 6000000;
 int raman_car = 3000000;
 // Suman's assets
 int suman_apartment = 11000000;
int suman_hotel = 8000000;
 int suman_car = 8000000;
 // Calculate total wealth
 int raman_total = raman_bungalow + raman_plot + raman_car;
 int suman_total = suman_apartment + suman_hotel + suman_car;
 // Compare total wealth
 if (raman_total > suman_total) {
 printf("Raman is wealthier.\n");
 } else if (raman_total < suman_total) {
 printf("Suman is wealthier.\n");
 } else {
 printf("Both are equally wealthy.\n");
 }
 return 0;
 }
