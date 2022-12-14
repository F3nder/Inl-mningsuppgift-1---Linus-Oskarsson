#include <stdio.h>

void assign(int* data,
			const int size)
{
	for (int i = 0; i < size; i++)
	{
		data[i] = size - 1 - i;
	}
	return;
}

void print(const int* data,
		   const int size)
{
	printf("Number of elements: %d\n", size);
	printf("--------------------------------------------------------------------------------\n");

	for (int i = 0 ; i < size; i++)
	{
		printf("%d\n", data[i]);
	}
	printf("--------------------------------------------------------------------------------\n");
	return;
}

int main(void)
{
	int data[10];

	assign(data, 10);
	print(data, 10);
	
	return 0;
}