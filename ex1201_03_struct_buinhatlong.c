/*
	과제03:
	파일명: ex1201_03_struct_buinhatlong.c
	작성일:01-12-22 10:11
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char *intro;
};


int main(void)
{
	struct profile yuni;
	
	strcpy(yuni.name, "Long");
	yuni.age = 22;
	yuni.height = 166.6;
	yuni.intro = (char *)malloc(80);
	printf("짜기소개: ");
	gets(yuni.intro);
	
	
	printf("Name: %s\n", yuni.name);
	printf("Age: %d\n", yuni.age);
	printf("Height: %.1lf\n", yuni.height);
	printf("Intro: %s\n", yuni.intro);
	free(yuni.intro);
	
	return 0;
}

