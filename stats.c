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
 * This is the main file to invoke the function is print statistics of the 
 * array and sorts the array from largest to smallest
 *
 * @author Zoé Trejo
 * @date June 30, 2024
 *
 */

#include <stdio.h>
#include "stats.h"

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

unsigned char find_maximum(unsigned char *array, unsigned int length)
{
  return array[0];
}

unsigned char find_minimum(unsigned char *array, unsigned int length)
{
  return array[length - 1];
}

void print_array(unsigned char *array, unsigned int length)
{
  for(int i = 0; i < length; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
  return;
}

void sort_array(unsigned char *array, unsigned int length)
{
  for(int i = 0; i < length; i++)
  {
    for (int j = i + 1 ; j < length; j++)
    {
      if(array[j] > array[i])
      {
        int temp = 0;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  return;
}

void print_statistics(unsigned char *array, unsigned int length)
{
  sort_array(array, length);
  printf("Mean\t\t:%.2f\n", find_mean(array, length));
  printf("Median\t\t:%d\n", find_median(array, length));
  printf("Maximum\t\t:%d\n", find_maximum(array, length));
  printf("Minimum\t\t:%d\n", find_minimum(array, length));
  return;
}

/* Size of the Data Set */
#define SIZE (40)

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
