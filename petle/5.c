#include <stdio.h>

#define N 5

int main()
{
  int tab[N];
  int i;
  for(i=0;i<N;i++){
    printf("\n>");
    fgets(tab,5,stdin);
    tab[i]=atoi(tab);
  }
}
