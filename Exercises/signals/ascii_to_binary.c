#include <stdio.h>

void	asciiToBinary(char character)
{
		int	i;

		i = 7;
		while (i >= 0)
		{
				int	bit;
				bit = (character >> i) & i;
				printf("%d", bit);
				i--;
		}
		printf("\n");
}

int	main()
{
		char	inputChar;

		printf("enter ascii char: ");
		scanf("%c", &inputChar);

		printf("binary representation: ");
		asciiToBinary(inputChar);
		return 0;
}
