#include <stdio.h> //printf(), scanf()
#define showline printf("----------------------------\n");

int main(){
  int bus_numbar ;

  showline
  printf("bus number information\n");
  showline
  printf("Enter bus number :");
  scanf("%d",&bus_numbar );
  showline

  if(bus_numbar == 57){
    printf("go to pinkho,Bankanghunnon\n");
  }else if (bus_numbar ==3){
    printf("go to Sanam  luang  Ladproao\n");
  }else if (bus_numbar ==71){
    printf("go to Humphong , Yaowarat\n") ;
  }else if (bus_numbar == 56){
    printf("go to bang lampho ,sapan Krungthon\n") ;
  }else if (bus_numbar == 539){
    printf("go to samsen ,Anusawari Chai\n");
  }else{
    printf("Don\'t have data \n");
  }
  showline

  return 0 ;

}