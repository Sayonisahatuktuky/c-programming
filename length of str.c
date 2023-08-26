#include <stdio.h>
int stringLength(const char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
return length;
}
int main()
{
char input[100];
printf("Enter A String: \n");
scanf("%s", &input);
int length = stringLength(input);
printf("The length of the given string is : %d", length);
}
