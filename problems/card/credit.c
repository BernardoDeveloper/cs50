#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool check_card_number(char cardNumber[1000]);
int str_length(char str[]);
void verify_brand_card(char number[]);

int main(void)
{
	char number[1000];
	printf("Type card number: ");
	scanf("%s", number);

	bool isValid = check_card_number(number);
	if (isValid == false)
	{
		printf("Invalid credit card.\n");
		return 1;
	}

	verify_brand_card(number);
}

bool check_card_number(char cardNumber[1000])
{
	char numberDigits = str_length(cardNumber);

	int numberSum = 0, isSecond = false;
	for (int i = numberDigits - 1; i >= 0; i--)
	{
		int d = cardNumber[i] - '0';
		if (isSecond == true)
			d *= 2;

		numberSum += d / 10;
		numberSum += d % 10;

		isSecond = !isSecond;
	}

	return (numberSum % 10 == 0);
}

int str_length(char str[])
{
	int count;
	for (count = 0; str[count] != '\0'; count++);
	return count;
}

void verify_brand_card(char number[])
{
	if (number[0] == '4')
		printf("VISA\n");
	else if (number[0] == '5' && number[1] == '1' || number[0] == '5' && number[1] == '5')
		printf("MASTER\n");
}