#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
	string name;
	string number;
}
person;

int main(void)
{
	person people[2];
	people[0].name = "Carter";
	people[0].number = "+1-617-495-1000";

    printf("%s %s\n", people[0].name, people[0].number);
}