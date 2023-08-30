#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

char randchar() {
   char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
   char letter = toupper(alphabet[rand()%26]);
   return letter;
}
