#include <stdio.h>
#include "rect.h"


int main(int argc, char const *argv[]) {
  /*struct point p1, p2, p3, p4;
  struct rect r1, r2;
  p1 = makepoint(1, 1);
  p2 = makepoint(5, 5);
  p3 = makepoint(2, 3);
  p4 = makepoint(3, 4);
  r1.ll = p1;
  r1.ur = p2;
  r2.ll = p3;
  r2.ur = p4;
*/
struct rect r1 = {{1, 1}, {5, 5}};
struct rect r2 = {{2, 2}, {3, 3}};
struct rect r3 = {{2, 3}, {6, 6}};

int ans2 = rectinrect(r2, r1);
int ans3 = rectinrect(r3, r1);

printf("r2 w r1: %d\n",ans2);
printf("r3 w r1: %d\n",ans3);
}
