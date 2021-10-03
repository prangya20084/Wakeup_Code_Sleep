#include <stdio.h>
int main()
{
char name[10];
printf("Enter the name: ");
fgets(name, sizeof(name), stdin);
printf("Name is : ");
puts(name);
return 0;
}
