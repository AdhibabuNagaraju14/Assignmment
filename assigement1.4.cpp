#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i, len, vowels;
   printf("Enter a string: ");
   fgets(str, 100, stdin);

   len = strlen(str);
   vowels = 0;
   for (i = 0; i < len; i++) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
          str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
          str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
          str[i] == 'U') {
         vowels++;
      }
   }

   printf("The number of vowels in the string is: %d\n", vowels);

   return 0;
}

