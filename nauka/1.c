#include <stdio.h>
#include <math.h>

struct point{
  int x;
  int y;
};
struct rect{
  struct point pt1;
  struct point pt2;
};

int main()
{
  struct point alfa = {1,1};
  printf("%d,%d\n",alfa.x,alfa.y);

  double dist;
  dist = sqrt(alfa.x*alfa.x +alfa.y * alfa.y);
  printf("%.2lf\n",dist);
  struct rect screen = {{2,2},{3,3}};
  printf("%d",screen.pt1.x);
  struct point makepoint(int x, int y)
  {
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
  }

}
