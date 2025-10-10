//Gloval-local Variable
#include "stdio.h" //หรือ <stdio,h>

int dataA =  100 ;

void showdata (){
  int dataB = 555; // local variableใช้ได้เฉพาะใน code black เท่านั้น 
  printf("dataA = %d\n",dataA);
  printf("dataB = %d\n",dataB); 
  //printf("dataE = %d\n",dataE);Error
  //printf("dataC = %d\n",dataC); Error
  const int dataE = 1050 ; // constsent ค่าคงที่ varieble
}
int main (){
  int dataC = 999; //local variable ใช้ไดเเฉพาะใน code blook นั้น เท่านั้น 
  printf('dataA = %d\n',dataA);
  printf('dataC = %d\n',dataC);
  //printf('dataE = %d\n',dataE); Error
  //printf('dataB = %d\n',dataB);Error

  return 0;
