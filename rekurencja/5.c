#include <stdio.h>
#include <stdlib.h>

int zamiana(int n)
{
  int tab[255];
  int i=0,j;
  int n,a;
  scanf("%d",&n);
  for(n;n>=1;n=n/2){
    i+=1;
    tab[i]=n%2;
  }
  for(j=i;j>0;j--)
  {
    printf("%d",tab[j]);
  }
  printf("\n");
}
int main()
{

}
