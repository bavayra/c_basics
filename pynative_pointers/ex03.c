#include <stdio.h>

int	main(void)
{
	int a = 10;
	float b = 20.5f;

	int *p_a = &a;
	float *p_b = &b;

	printf("Address of integer variable 'a': %p\n", p_a);
	printf("Address of float variable 'b': %p\n", p_b);
	printf("Address stored IN pointer 'p_a': %p\n", p_a);
	printf("Address of pointer variable 'p_a' itself: %p\n", &p_a);

	return(0);
}