#include <stdio.h>

int main() {
  char name[50];
  printf("Please, enter your full name: ");
  scanf("%[^\n]s",&name);
  printf("\nHello %s.",name);
  return 0;
}
