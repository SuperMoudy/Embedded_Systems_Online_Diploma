/*
 * EX4.c
 *
 *  Created on: Dec 23, 2020
 *      Author: MahmoudH
 */

#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
	int arr[MAX_LEN], arr_len, extra_element, position, i;

	// Computing the dataset size
	printf("Enter no of elements: ");
	scanf("%d", &arr_len);

	// Reading the dataset
	for(i = 0; i < arr_len; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\r\nEnter the element to be inserted: ");
	scanf("%d", &extra_element);

	printf("\nEnter the location: ");
	scanf("%d", &position);

	printf("\n");

	// Shifting for the new element
	for(i = arr_len; i >= position; i--)
	{
		arr[i] = arr[i - 1];
	}

	// Update the dataset data and size
	arr[position - 1] = extra_element;
	arr_len++;

	// Print the dataset
	for(i = 0; i < arr_len; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
