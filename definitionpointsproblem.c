#include <stdio.h>
#include "typedefpointsproblem.h"

NTI_student scanning_info(){

NTI_student tmp={0};

printf("Name:\n");
scanf(" %[^\n]s",tmp.name);

printf("level:\n");
scanf("%hhu",&tmp.level);

printf("age:\n");
scanf("%hhu",&tmp.age);

printf("sub1:\n");
scanf("%hhu",&tmp.sub1);

printf("sub2:\n");
scanf("%hhu",&tmp.sub2);

printf("sub3:\n");
scanf("%hhu",&tmp.sub3);

return tmp;



}
uint16_t calc_total(NTI_student s){

return s.sub1+s.sub2+s.sub3;

}

float calc_percentage(uint16_t total){
return (total/300.0)*100;

}

void student_report(float percentage){
if(percentage>=50)
{
    printf("passed\n");
}
else 
{
   printf(" failed\n");  
}

}
