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
 * @file stats.c 
 * @brief Main file to invoke the statistics of given array
 *
 * This file contains implementations of functions to calculate and print
 * statistics (mean, median, maximum, minimum) of an array of unsigned chars.
 * It also includes functions to print the array and sort it in descending order.
 *
 * @author Zoé Trejo
 * @date June 30, 2024
 *
 */

#include <stdio.h>
#include "stats.h"

/**
 * @brief Calculates the mean of an array of unsigned chars
 *
 * Given an array and its length, calculates the mean (average) of the elements.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 * @return Mean value of the array elements as a double
 */
double find_mean(unsigned char *array, unsigned int length)
{
  int sum = 0;
  double mean = 0;
  
  for(int i = 0 ; i < length; i++)
  {
    sum += array[i];
  }
  
  mean = sum / (double)length;
  return mean;
}

/**
 * @brief Finds the median of an array of unsigned chars
 *
 * Given an array and its length, finds the median value.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 * @return Median value of the array elements as an unsigned char
 */
unsigned char find_median(unsigned char *array, unsigned int length)
{
  int is_even = length % 2;
  int median = 0;
  
  if(is_even)
    median = (array[length / 2] + array[length / 2 - 1]) / 2.0; 
  else
    median = array[length / 2];
  
  return median;
}

/**
 * @brief Finds the maximum value in an array of unsigned chars
 *
 * Given an array and its length, finds the maximum value.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 * @return Maximum value in the array as an unsigned char
 */
unsigned char find_maximum(unsigned char *array, unsigned int length)
{
  return array[0]; // Assuming the array is sorted in descending order
}

/**
 * @brief Finds the minimum value in an array of unsigned chars
 *
 * Given an array and its length, finds the minimum value.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 * @return Minimum value in the array as an unsigned char
 */
unsigned char find_minimum(unsigned char *array, unsigned int length)
{
  return array[length - 1]; // Assuming the array is sorted in descending order
}

/**
 * @brief Prints the elements of an array of unsigned chars
 *
 * Given an array and its length, prints each element to stdout.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 */
void print_array(unsigned char *array, unsigned int length)
{
  for(int i = 0; i < length; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

/**
 * @brief Sorts an array of unsigned chars in descending order
 *
 * Implements a bubble sort algorithm to sort the array from largest to smallest.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 */
void sort_array(unsigned char *array, unsigned int length)
{
  for(int i = 0; i < length; i++)
  {
    for (int j = i + 1 ; j < length; j++)
    {
      if(array[j] > array[i])
      {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

/**
 * @brief Prints statistics (mean, median, maximum, minimum) of an array
 *
 * Sorts the array in descending order and then prints the calculated statistics
 * (mean, median, maximum, minimum) to stdout.
 *
 * @param array Pointer to the array of unsigned chars
 * @param length Number of elements in the array
 */
void print_statistics(unsigned char *array, unsigned int length)
{
  sort_array(array, length);
  printf("Mean\t\t:%.2f\n", find_mean(array, length));
  printf("Median\t\t:%d\n", find_median(array, length));
  printf("Maximum\t\t:%d\n", find_maximum(array, length));
  printf("Minimum\t\t:%d\n", find_minimum(array, length));
}

/* Size of the Data Set */
#define SIZE (40)

/**
 * @brief Main function
 *
 * Entry point of the program. Initializes an array, calculates and prints
 * statistics (mean, median, maximum, minimum) of the array.
 *
 * @return 0 on success
 */
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */