#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;
  int sum = x / y;

  printf("The result of %d divided by %d is %d\n", x, y, sum);
  // javob 2 chiqadi lekin bu noto'g'ri javob chunki butun sonlar bo'linmasida kasr qismi yo'qoladi.
  
  // buni to'g'ri javob olish uchun quyidagicha o'zgartirish kerak:
  
  float correct_sum = (float)x / (float)y;
  printf("The correct result of %d divided by %d is %.2f\n", x, y, correct_sum);
  // biz bu yerda float turidan foydalandik va natijani ikki o'nlik raqam bilan chop etdik.
  // biz hozir (float) deb yozib type conversion dan foydalandik va o'zgaruvchilarni turini o'zgartirdik.
  
  return 0;
}