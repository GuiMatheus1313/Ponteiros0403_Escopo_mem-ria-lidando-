#include <stdio.h>


//Não muda por causa do escopo
void tr(int x, int y)
{
  int temp = x;

  x=y;
  y = temp;
}

//Usar para mexer ALÉM DO ESCOPO 
void tr_p(int * x, int * y)
{
  int temp = *x;

  *x=*y;
  *y = temp;
}



int main(void) {
  int a = 10, b = 20;

  tr(a,b);

  printf("a = %d,\n b = %d\n", a, b); // 10, 20

  tr_p(&a,&b);
  printf("a = %d,\n b = %d\n", a, b);	//20, 10
  
}