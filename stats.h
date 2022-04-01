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
 * @file stats.h 
 * @brief declaration of functions for array statistics
 *
 * <Add Extended Description Here>
 *
 * @author Ehsan Kiumarsi
 * @date 01.04.2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


int find_maximum(unsigned char a[], unsigned int s);
/**
 * @brief Maximum af an array
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. Output of this function is the maximum of the
 * array as an integer.
 * @param unsigned char a[] and unsigned int s
 * @return an integer number as maximum value
 */
void print_statistics(unsigned char a[], unsigned int s);
/**
 * @brief Printing statistics of an array
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. It prints the statistics of the array including
 * minimum, maximum, mean and median of the array.
 * @param unsigned char a[] and unsigned int s
 * @return nothing
 */
void print_array(unsigned char a[], unsigned int s);
/**
 * @brief Printing an array
 *
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. It prints the array in a proper manner in the 
 * consule. Also, it works correctly when the size of array changes.
 * @param unsigned char a[] and unsigned int s
 * @return nothing
 */
int find_minimum(unsigned char a[], unsigned int s);
/**
 * @brief Minimum af an array
 *
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. Output of this function is the minimum of the
 * array as an integer.
 * @param unsigned char a[] and unsigned int s
 * @return an integer number as minimum value
 */
void sort_array(unsigned char a[], unsigned int s);
/**
 * @brief Sorting an array
 *
 * 
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. This function sorts the array in a descending 
 * order; the zeroth would be the largest element.
 * @param unsigned char a[] and unsigned int s
 * @return nothing
 */
int find_median(unsigned char a[], unsigned int s);
/**
 * @brief Median af an array
 *
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. Output of this function is the median of the
 * array as an integer. In case of floating point numbers, it is rounded to nearest 
 * smaller integer number.
 * @param unsigned char a[] and unsigned int s
 * @return an integer number as median value
 */
int find_mean(unsigned char a[], unsigned int s);
/**
 * @brief Average af an array
 *
 * This function has two inputs of an array in type of unsigned char and an unsigned
 * integer as the size of the array. Output of this function is the average of the
 * array as an integer. In case of floating point numbers, it is rounded to the 
 * nearest smaller integer number.
 * @param unsigned char a[] and unsigned int s
 * @return an in teger number an mean value
 *
 */


#endif /* __STATS_H__ */
