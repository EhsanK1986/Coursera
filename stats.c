/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Stats> 
 * @brief <This is a program to calculate some statistics of a defined array and show it in a proper manner. This statistics include Minimum, Maximum, Median and Average. It also sorts the array.>
 *
 * <Add Extended Description Here>
 *
 * @author <Ehsan Kiumarsi>
 * @date <19.03.2022>
 *
 */



#include <stdio.h>
#include "stats.h"
#include <math.h>

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char a[], unsigned int s) {
	printf("MAX(a) = %d \n", find_maximum(a, s));
	printf("MIN(a) = %d \n", find_minimum(a, s));
	printf("median(a) = %lf\n", find_median(a, SIZE));
	printf("mean(a) = %lf\n", find_mean(a, SIZE));
}

void print_array(unsigned char a[], unsigned int s) {
	printf("a = [");
	int i,j;
	int m1 = s%5;
	if (s>=5)
	{
		if (m1)
		{
			for (i = 0; i < s-5; i += 5)
			{
				printf("\t%d,\t%d,\t%d,\t%d,\t%d,\n", a[i], a[i+1], a[i+2], a[i+3], a[i+4]);
			}
			for (j = i; j < s-1; j += 1)
			{
				printf("\t%d,", a[j]);
			}
			printf("\t%d", a[j]);
		}else
		{
			for (i = 0; i < s-5; i += 5)
			{
				printf("\t%d,\t%d,\t%d,\t%d,\t%d,\n", a[i], a[i+1], a[i+2], a[i+3], a[i+4]);
			}
			printf("\t%d,\t%d,\t%d,\t%d,\t%d", a[i], a[i+1], a[i+2], a[i+3], a[i+4]);
		}
	}else
	{
		for (j = 0; j < s-1; j += 1)
			{
				printf("\t%d,", a[j]);
			}
		printf("\t%d", a[j]);
	}
	for (i = 0; i < s; i += 5)
	{
		
	}
	printf("\t]\n");
}

int find_maximum(unsigned char a[], unsigned int s)
{
	unsigned char m1 = a[0];
	int i;
	for (i = 1; i < s; i += 1)
	{
		if (a[i]>m1)
		{
			m1 = a[i];
		}
	}
	return m1;
}

int find_minimum(unsigned char a[], unsigned int s)
{
	unsigned char m1 = a[0];
	int i;
	for (i = 1; i < s; i += 1)
	{
		if (a[i]<m1)
		{
			m1 = a[i];
		}
	}
	return m1;
}

void sort_array(unsigned char a[], unsigned int s)
{
	unsigned char m1, m2;
	int i, j;
	for (i = 0; i < s-1; i += 1)
	{
		m1 = a[i];
		for (j = i+1; j < s; j += 1)
		{
			if (a[j]>m1)
			{
				m2 = m1;
				m1 = a[j];
				a[j] = m2;
			}
		}
		a[i] = m1;
	}
	
}

double find_median(unsigned char a[], unsigned int s)
{
	sort_array(a, s);
	if (s%2) return a[s/2];
	else
	{
		double m1 = a[s/2];
		double m2 = a[s/2 - 1];
		return (m1 + m2)/2;
	}
}

double find_mean(unsigned char a[], unsigned int s)
{
	double m1 = 0;
	int i;
	for (i = 0; i < s; i += 1)
	{
		m1 = m1 + a[i];
	}
	return m1/s;
}

void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

	print_array(test, SIZE);
	print_statistics(test, SIZE);
	sort_array(test, SIZE);
	print_array(test, SIZE);
	//printf("median(a) = %lf\n", find_median(test, SIZE));
	//printf("mean(a) = %lf\n", find_mean(test, SIZE));

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
