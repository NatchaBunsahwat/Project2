#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
int main() {
	int input;
	int i{};
	printf("Enter Number : ");
	scanf("%d", &input);
	while ( i < input)
	{
		printf("*", i);
		i++;
	}
	return 0;
}
