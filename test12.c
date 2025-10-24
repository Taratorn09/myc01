#include <stdio.h>
#define pa printf("--------------------------");


int main (){
  int number , result ;
  int i ;

  pa

  printf("                 Mulyiplication Table\n");
  pa

  printf(" Enter number :");
  scanf("%d" , &number);

  for(i = 1; i <= 12; i = i + 1 ){ // ++i, ++i, i += 1
    result = number * i ;
    printf("%d x %d = \n", number, i , result);
  
  
  }

pa

  return 0 ;
}