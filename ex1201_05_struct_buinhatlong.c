/*
	과제05:
	파일명: ex1201_05_struct_buinhatlong.c
	작성일:
*/
#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
	double grade;
};


int main(void)
{
	struct student  s1 = {315, "keng", 3.0},
					s2 = {316, "dinh", 4.0},
					s3 = {317, "luon", 2.0};
					
	struct student max;
	
	max=s1;
	if(s2.grade>max.grade) max =s2;
	if(s3.grade>max.grade) max =s3;
	
	printf("--------Max grade studen---------\n");
	printf("Num %d\n", max.id);
	printf("Name %s\n", max.name);
	printf("Grade %.1lf\n", max.grade);
	
	return 0;
}

