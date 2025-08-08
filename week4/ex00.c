#include <stdio.h>

int main() {
int i = 0;
char* space;

while (i < 10) {
  if (i == 0 || i == 9) {
    space = "*********";
  } else {
    space = "        *";
  }
  printf("*%s\n", space);
  i++;
}
    return 0;
}