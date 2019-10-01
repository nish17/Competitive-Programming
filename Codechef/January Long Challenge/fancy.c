#include <stdio.h>
#include <cstring>
int isSubString(char s[])
{
  int ans;
  for (int i = 0; i < strlen(s); i++)
  {
    if (s[i] == 'n')
    {
      if (s[i - 1] == ' ' && s[i + 1] == 'o' && s[i + 2] == 't' && s[i + 3] == ' ')
      {
        ans = 1;
        break;
      }
    }
    else if (s[i] == 'N')
    {
      if (s[i - 1] == ' ' && s[i + 1] == 'O' && s[i + 2] == 'T' && s[i + 3] == ' ')
      {
        ans = 1;
        break;
      }
    }
    else
      ans = 0;
  }
  return ans;
}

int main()
{
  int t;
  char s[100];
  scanf("%d", &t);
  while (t--)
  {
    fgets(s, 100, stdin);
    isSubString(s) == 1 ? printf("Real Fancy\n") : printf("regularly fancy\n");
  }
}