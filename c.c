#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "hello";
  printf("%s\n", str);
  size_t len = strlen(str);
  printf("%zu\n", len);

  return 0;
}