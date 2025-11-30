#include <stdio.h>
#include <stdbool.h>

int main(){
  // C WHILE LOOP
  // While loopda birinchi qavs ichida shart yoziladi va shartni qanoatlantiradigan
  // holatda kodlar bajariladi.
  int i = 1;
  while(i <= 10){
    printf("%d\t", i);
    i++;
  };
  printf("\n");

  // DO WHILE LOOP
  // Do while loopda birinchi kodlar bajariladi va keyin shart tekshiriladi.
  int j = 1;
  do{
    printf("%d\t", j);
    j++;
  }while (j < 10);
  printf("\n");
  printf("\n"); 


  // EXAMPLE
    // A variable with some specific numbers
  int numbers = 12345;

  // A variable to store the reversed number
  int revNumbers = 0;

  // Reverse and reorder the numbers
  while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
  }
  printf("Reversed Number: %d\n", revNumbers);
  printf("\n");
  printf("\n");

  // FOR LOOP
  // For loopda uchta qism mavjud: boshlangich qiymat, shart va o'zgaruvchi qiymatini yangilash.
  int k;

  for (k = 5; k > 0; k--) {
    printf("%d \t", k);
  }
  printf("\n");
  printf("\n");

  // NESTED LOOP
  // Nested loop - bu bir loop ichida boshqa loopning mavjudligi.
  for (int l = 1; l < 5; l++)
  {
    for (int m = 1; m < 5; m++){
      printf("%d \t", m * l);
    }
    printf("\n");
  }
  


  return 0;
};      