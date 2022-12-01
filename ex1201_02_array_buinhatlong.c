/*
	과제02:
	파일명: ex1201_02_array_buinhatlong.c
	작성일:01-12-22 09:59
*/
#include <stdio.h>

struct student
{
	int num;
	char *name;
//	char name[20];
	double grade;
};

int main(void)
{
	struct student s1;
	
	s1.num = 2;
	s1.name= "long";
	s1.grade=2.6;
	
	
	printf("Num: %d\n", s1.num);
	printf("Name: %s\n", s1.name);
	printf("Grade: %.1lf\n", s1.grade);
	
	
	return 0;
}

