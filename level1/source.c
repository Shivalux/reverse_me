#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	input[128];
	char	*password = "__stack_check";

	printf("Please enter key: ");
	scanf("%s", input);
	if (strcmp(password, input) == 0)
		printf("Good Job.\n");
	else
		printf("Nope.\n");
	return (0);
}
