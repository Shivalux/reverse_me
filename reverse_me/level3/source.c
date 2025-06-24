#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	___syscall_malloc(void)
{
	puts("Nope.");
	exit(1);
}

void	____syscall_malloc(void)
{
	puts("Good job.");
}

int	main(void)
{
	char		input[24];
	char		password[9];
	char		code[4];
	int		number;
	unsigned int	count;
	int		index;
	int		result;

	printf("Please enter key: ");
	if (scanf("%23s", input) != 1)
		___syscall_malloc();
	if (input[1] != 0x32 || input[0] != 0x34)
		___syscall_malloc();
	fflush(stdin);
	memset(password, 0, 9);
	password[0] = 0x2a;
	code[3] = 0;
	count = 2;
	index = 1;
	while (strlen(password) < 8 && count + 2 < strlen(input))
	{
		code[0] = input[count];
		code[1] = input[count + 1];
		code[2] = input[count + 2];
		number = atoi(code);
		password[index] = number;
		count += 3;
		index++;
	}
	password[index] = 0x0;
	result = strcmp("********", password);
	if (result - 0xfffffffe == 0)
		___syscall_malloc();
	else if (result - 0xffffffff == 0)
		___syscall_malloc();
	else if (result == 0)
		____syscall_malloc();
	else if (result - 0x1 == 0)
		___syscall_malloc();
	else if (result - 0x2 == 0)
		___syscall_malloc();
	else if (result - 0x3 == 0)
		___syscall_malloc();
	else if (result - 0x4 == 0)
		___syscall_malloc();
	else if (result - 0x5 == 0)
		___syscall_malloc();
	else if (result - 0x73 == 0)
		___syscall_malloc();
	else
		___syscall_malloc();
	return (0);
}
