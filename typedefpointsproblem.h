#pragma once
#include<stdint.h>

typedef struct
{
char name[20];
uint8_t level;
uint8_t age;
uint8_t sub1;
uint8_t sub2;
uint8_t sub3;
}NTI_student;


NTI_student scanning_info();
uint16_t calc_total(NTI_student s);
float calc_percentage(uint16_t total);
void student_report(float percentage);

