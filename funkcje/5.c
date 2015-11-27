#include <stdio.h>
void sliczny_odstep(int )
{

  printf("  \n");
}
void prostokat(int x,int y)
{
  int i,j;

  for(i=1;i<=x;i++)
  {
    printf("*");
    if(i==1 || i==x)
    {
      for(j=1;j<x-1;j++)
      {
        printf("*");
      }
    }
    if(i>1 && i<x)
    {
      for(j=1;j<x-1;j++)
      {
        printf(" ");
      }
    }
    printf("*");
    printf("\n");
  }
}
void owal(int x,int y)
{
  int i,j;
  for(i=1;i<=x;i++)
  {
    printf(" ")
  }
}
void strzalka(int x,int y)
{

}
void diament(int x,int y)
{

}
int main()
{
  int a,b;
  printf("podaj wysokosc i szerokosc: ");
  scanf("%d %d",&a,&b);
  prostokat(a,b);
}
