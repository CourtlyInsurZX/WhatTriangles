#include<stdio.h>
int main(void){
int a, b, c;
  printf("\n Ingrese primer num ");
scanf("%d"&a);

printf("\n Ingrese segundo num ");
scanf("%d",b);

printf("\n Ingrese tercer num ");
scanf("%d",c);

  if(a==b&&a==c)
  {
  printf("\n El triangulo es equilatero");
  }
  else if(a==b||a==c||b==c)
  {
    printf("\n El triangulo es isosceles");
  }
  else if(a!=b&&a!=b&&b!=c)
  {
  printf("\n El triangulo es escaleno");
   }
setbuf ( stdin, NULL );
getchar();

}
