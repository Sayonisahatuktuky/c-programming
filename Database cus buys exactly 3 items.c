#include <stdio.h>
#include <string.h>
struct Customer
{
char customerId[10];
char name[50];
char items[3][50];
};
int main()
{
int numCustomers = 2;
struct Customer customers[numCustomers];
for (int i = 0; i < numCustomers; i++)
{
printf("Enter customer %d name: ", i + 1);
fgets(customers[i].name, sizeof(customers[i].name), stdin);
customers[i].name[strcspn(customers[i].name, "\n")] = '\0';
printf("Enter customer %d ID: ", i + 1);
fgets(customers[i].customerId, sizeof(customers[i].customerId), stdin);
customers[i].customerId[strcspn(customers[i].customerId, "\n")] = '\0';
for (int j = 0; j < 3; j++)
{
printf("Enter item %d for customer %d: ", j + 1, i + 1);
fgets(customers[i].items[j], sizeof(customers[i].items[j]), stdin);
customers[i].items[j][strcspn(customers[i].items[j], "\n")] = '\0';
}
printf("\n");
}
printf("Customer Database:\n");
for (int i = 0; i < numCustomers; i++)
{
printf("Customer %d:\n", i + 1);
printf("ID: %s\n", customers[i].customerId);
printf("Name: %s\n", customers[i].name);
printf("Items: %s, %s, %s\n", customers[i].items[0], customers[i].items[1], customers[i].items[2]);
printf("\n");
}
return 0;
}
