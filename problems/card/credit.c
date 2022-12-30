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
		printf("INVALID\n");
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
	if (strncmp(number, "34", 2) == 0 || strncmp(number, "37", 2) == 0)
		printf("AMEX\n");
	else if (strncmp(number, "4", 1) == 0)
		printf("VISA\n");
	else if (strncmp(number, "51", 2) == 0 || strncmp(number, "52", 2) == 0 || strncmp(number, "53", 2) == 0 || strncmp(number, "54", 2) == 0 || strncmp(number, "55", 2) == 0)
		printf("MASTERCARD\n");
	else
		printf("UNDEFINED\n");
}