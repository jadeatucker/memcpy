/* 
 * memcpy - simple implementation of memcpy(3)
 */

#include <stdio.h>

void *_memcpy(void *dest, const void *src, size_t n);

int main(void) {
  char str1[] = "Hello world!";
  char str2[13];

  _memcpy(str2, str1, 13);

  printf("%s\n", str2);

  return 0;
}


void *_memcpy(void *dest, const void *src, size_t n) {
  while(n--) *(char *)dest++ = *(const char *)src++;

  return dest;
}
