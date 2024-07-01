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
 * @brief Header file for data analysis functions
 *
 * This file contains the declarations and documentation for the functions
 * used in the stats.c implementation file. These functions include the 
 * calculation of minimum, maximum, mean, and median values, as well as 
 * sorting and printing an array of unsigned char data.
 *
 * @author Zoé Trejo
 * @date 30 June, 2024
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function prints the statistics of an array of data including
 * minimum, maximum, mean, and median values.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return void
 */
void print_statistics(unsigned char *array, unsigned int length);

/**
 * @brief Prints the array to the screen
 *
 * This function takes a pointer to an array of data and its size,
 * and prints the array to the screen.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return void
 */
void print_array(unsigned char *array, unsigned int length);

/**
 * @brief Finds the median of an array
 *
 * This function takes a pointer to an array of data and its size,
 * and returns the median value.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return Median value of the data
 */
unsigned char find_median(unsigned char *array, unsigned int length);

/**
 * @brief Finds the mean of an array
 *
 * This function takes a pointer to an array of data and its size,
 * and returns the mean value.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return Mean value of the data
 */
double find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Finds the maximum value in an array
 *
 * This function takes a pointer to an array of data and its size,
 * and returns the maximum value.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return Maximum value of the data
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Finds the minimum value in an array
 *
 * This function takes a pointer to an array of data and its size,
 * and returns the minimum value.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return Minimum value of the data
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts an array from largest to smallest
 *
 * This function takes a pointer to an array of data and its size,
 * and sorts the array from largest to smallest.
 *
 * @param array Pointer to the data array
 * @param length Size of the data array
 *
 * @return void
 */
void sort_array(unsigned char *array, unsigned int length);

#endif // __STATS_H__