/*
	과제01:
	파일명: ex1201_01_array_buinhatlong.c
	작성일:
*/
#include <stdio.h>

int main(void)
{
	int ary[5][6]={
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25},
		{26,27,28,29,20},
	};
	
	int i,j;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<5; j++)
		{
			ary[i][5]+=ary[i][j];
			ary[4][j]+=ary[i][j];
			ary[4][5]+=ary[i][j];
		}
	}
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<6; j++)
		{
			printf("%4d", ary[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}