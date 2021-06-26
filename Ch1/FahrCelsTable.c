//Prints a Fahr-Cels table from 0-300 deg.
#include <stdio.h>

#define LOWER 0 
#define UPPER 300 
#define STEP 5

int fahrToCels(int fahr) {
  return 5 * (fahr - 32) / 9;
}

int main() {
  int fahr, cels;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    cels = fahrToCels(fahr);
    printf("%3d %6d\n", fahr, cels); 
  }
}