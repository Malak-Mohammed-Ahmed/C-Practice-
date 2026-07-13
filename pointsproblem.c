#include <stdio.h>
#include<stdint.h>
#include "typedefpointsproblem.h"
#define SIZE 5


int main()
{
    NTI_student group1[SIZE]={0} ;

    int i=0;

    for(i=0;i<SIZE;i++)
    {
        printf("Info of student:%d\n", i+1);
        group1[i]=scanning_info();

        uint16_t total=calc_total(group1[i]);
        printf("Total marks:%hu\n",total);

        float percentage=calc_percentage(total);
        printf("Percentage:%0.2f %\n",percentage);


        student_report(percentage);


    }



}