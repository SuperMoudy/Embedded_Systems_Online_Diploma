/*
 * EX3.c
 *
 *  Created on: Dec 23, 2020
 *      Author: MahmoudH
 */

#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
	int rows, columns, row_index, col_index;
	int matrix[MAX_LEN];

	// Determining the dimensions of the matrix
	printf("Enter rows and columns of matrix: ");
	scanf("%d %d", &rows, &columns);

	printf("\nEnter elements of matrix:\n");

	// Emulating the behavior of 2D matrix using 1D array and access equation
	for(row_index = 0; row_index < rows; row_index++)
	{
		for(col_index = 0; col_index < columns; col_index++)
		{
			printf("Enter elements a%d%d: ", row_index + 1, col_index + 1);
			scanf("%d", &matrix[row_index * columns + col_index]);
		}
	}

	printf("\nEntered Matrix:\n");

	// Applying the access equation to emulate printing 2D matrix
	for(row_index = 0; row_index < rows; row_index++)
	{
		for(col_index = 0; col_index < columns; col_index++)
		{
			printf("%d  ", matrix[row_index * columns + col_index]);
		}
		printf("\r\n");
	}

	printf("\nTranspose of Matrix:\n");

	// Getting the transpose using the access equation and altering the for loop nesting
	for(col_index = 0; col_index < columns; col_index++)
	{
		for(row_index = 0; row_index < rows; row_index++)
		{
			printf("%d  ", matrix[row_index * columns + col_index]);
		}
		printf("\r\n");
	}

	return 0;
}
