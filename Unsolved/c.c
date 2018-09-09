#include <stdio.h>
#include <string.h>
int main()
{

  char *name = "nimesh";

  char input[10];
  printf("Enter name:");
  gets(input);
  if (strcmp(name, input) == 0)
  {
    printf("Same string\n");
    printf("%c\n", input[0]);
    printf("%c\n", input[1]);
    printf("%c\n", input[2]);
    printf("%c\n", input[3]);
    printf("%c\n", input[4]);
    printf("%c\n", input[5]);
  }
  else
  {
    printf("Different string\n");
    for (int i = strlen(input); i >= 0; i--)
    {
      printf("%c", input[i]);
    }
    printf("\n");
  }

  return 0;
}