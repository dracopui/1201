/*
	과제06:
	파일명: ex1201_06_struct_buinhatlong.c
	작성일:
*/
#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange (struct vision robot)
{
	double temp;
	temp = robot.left;
};

int main(void)
{
	struct vision robot;
	
	printf("Input vision: ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot=exchange(robot);
	printf("exchange: %.1lf %.1lf\n", robot.left, robot.right);
	
	return 0;
}

