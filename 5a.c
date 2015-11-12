/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */

#include <stdio.h>

// Math constant PI value in C
//   http://stackoverflow.com/questions/9912151/math-constant-pi-value-in-c

#define M_PI 3.14159265358979323846

// #define __USE_MISC

#include <math.h>

int main() {
   double deg, rad;

   printf("Podaj kat w stopniach : ");
   scanf("%lf", &deg);

   rad = 2 * M_PI * deg / 360;
   printf("%.4f deg = %.4f rad\n", deg, rad);
}
