//รับค่าชือ-สกุล อายุ เงินเดือน เเละแสดงผลออกมา

#include  <stdio.h> 
#define showLine printf("----------------------------\n");

int main () {
  char fullname [50];      //%s,$[^n]
  int age ;                //%d
  float salary;            //%f
  showLine

  printf("Profile Information   \n");
  showLine

  printf('Enter your fullname :') ;
  scanf('%[^\n]',&fullname);
  printf("Enter your age : ");
  scanf('%[^\n]d', &age);

  printf("Enter your salary :");
  scanf('%[^\n]f', &salary);
  showLine

  printf("Hello %s\n",fullname);
  printf("You are %d years old.\n,agn");
  printf("your salary is %.2f baht.\n",salary) ;
  showLine

  return 0 ;

  } 