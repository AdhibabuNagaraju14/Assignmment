#include <stdio.h>
int main() 
{
   int amount, notes[8] = {500, 100, 50, 20, 10, 5, 2, 1};
   int count[8] = {0, 0, 0, 0, 0, 0, 0, 0};
   int i;
   printf("Enter amount: ");
   scanf("%d", &amount);
   for (i = 0; i < 8; i++) 
   {
      if (amount >= notes[i]) 
	  {
         count[i] = amount / notes[i];
         amount -= count[i] * notes[i];
      }
   }
   printf("Minimum number of notes required:\n");
   for (i = 0; i < 8; i++) {
      if (count[i] > 0) {
         printf("%d notes of Rs %d\n", count[i], notes[i]);
      }
   }

   return 0;
}

