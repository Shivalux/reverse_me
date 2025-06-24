#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int 	no(void)
{
	puts("Nope.");
	exit(1);
}

void	ok(void)
{
	puts("Good Job.");
}

int	main(void)
{
	char		input[24];
	char		password[9];
	char		code[4];
	unsigned int	count;
	int		number;
	int		index;
	
	printf("Please enter key: ");
	if (scanf("%23s", input) != 1)
		no();
	if (input[1] != 0x30 || input[0] != 0x30)
		no();
	fflush(stdin);
	memset(password, 0, 9);
	password[0] = 0x64;
	code[3] = 0x0;
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
	if (strcmp(password, "delabere") == 0)
		ok();
	else
		no();
	return (0);
}
