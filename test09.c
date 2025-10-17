#include <stdio.h> //printf(), scanf()
#define showline printf("----------------------------\n");

int main(){

  int bus_number;
  showline

      printf("bus number information\n");
  showline

      printf("Enter bus number :");
  scanf("%d", &bus_number);
  showline
  
  switch (bus_number){
    case 57 : printf("go to pinkho,Bankanghunnon\n");
      break;
    case 3 : printf("go to Sanam  luang  Ladproao\n");
      break;
    case 71 : printf("go to Humphong , Yaowarat\n");
      break;
    case 56 : printf("go to bang lampho ,sapan Krungthon\n");
      break;
    case 539 : printf("go to samsen ,Anusawari Chai\n");
      break;
    default : printf("Don\'t have data \n");

  showline 0 ;
    }


  










}