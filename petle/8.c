#include <stdio.h>

#define dlugosc 4

int main()
{
  int i,j,l,s,k;
  s = dlugosc;
  for(i=0;i<dlugosc;i++){

    for(l=0;l<i+1;l++){
      putchar('*');
    }
    for(j=i;j<2*dlugosc-1;j++){
      putchar(' ');
    }
    for(s=dlugosc-i;s>0;s--){
      putchar('*');
    }
    for(k=dlugosc-i;k<2*dlugosc;k--){
      putchar(' ');
    }
    for(s=0;s<4;s++){
      printf("*");
    }

    printf("\n");
  }
  return 0;
}
