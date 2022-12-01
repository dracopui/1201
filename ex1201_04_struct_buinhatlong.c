/*
	과제04:
	파일명: ex1201_04_struct_buinhatlong.c
	작성일:01-12-22 10:42
*/
#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};


int main(void)
{
	struct student log;
	log.pf.age=22;
	log.pf.height=166.6;
	log.id=333;
	log.grade =3.0;
	
	printf("Age: %d\n",log.pf.age );
	printf("Height: %.1lf\n",log.pf.height );
	printf("ID: %d\n",log.id );
	printf("grade: %.1lf\n",log.grade );
	
	return 0;
}

