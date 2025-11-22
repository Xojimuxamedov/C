// C da asosiy shu turdagi data turlar mavjud:
int intNum = 42;          // int - butun sonlar uchun
float floatNum = 3.14;    // float - o'nlik sonlar uchun
char charVar = 'A';       // char - bitta belgilar uchun


// Va bulari chuqurroq ma'lumotlar uchun:
#include <stdbool.h>
double doubleNum = 3.1415926535;        // double - katta o'nlik sonlar uchun
long longNum = 1234567890L;             // long - katta butun sonlar uchun
bool boolVar = true;                    // bool - mantiqiy qiymatlar uchun (true yoki false)
void myFunction(void) {                 // void - hech qanday qiymat qaytarmaydigan funksiyalar uchun
    // hech qanday qiymat qaytarmaydi
}
unsigned unsignedNum = 100U; // unsigned - manfiy bo'lmagan butun sonlar uchun


/* C da format spetsifikatorlari quyidagilar: */
#include <stdio.h>
int main() {
  printf("int: %d\n", intNum);      // %d - int uchun
  printf("float: %f\n", floatNum);  // %f - float uchun
  printf("char: %c\n", charVar);    // %c - char uchun
  secondFunctionSPETS();
  variableExample();
  return 0;
}

// Va bulari chuqurroq ma'lumotlar uchun:
secondFunctionSPETS() {
  printf("double: %lf\n", doubleNum);               // %lf - double uchun 
  printf("long: %ld\n", longNum);                   // %lf - double uchun 
  printf("bool: %d\n", boolVar);                    // %lf - double uchun 
  printf("unsigned: %u\n", unsignedNum);            // %lf - double uchun 
  printf("string: %s\n", "Bu string uchun \%s");    // %s - string (char array) uchun 
  printf("pointer: %p\n", (void*)&intNum);          // %p - pointer uchun
}



variableExample() {
  // Misol uchun siz birinchi variable yasab keyin unga qiymat berishingiz mumkin:
  int anotherInt;        // variable e'lon qilindi
  anotherInt = 55;      // variable ga qiymat berildi
  
  int copyInt = 15;   // copyInt variable e'lon qilindi va unga qiymat berildi
    
  int sum = anotherInt + copyInt; // ikkita variable ni qo'shish
  
  copyInt = anotherInt; // anotherInt ni copyInt ga nusxalash

  printf("Sum: %d\n", sum);
  printf("anotherInt: %d\n", anotherInt);
  printf("copyInt: %d\n", copyInt);
}

// Yoki bir nechta variable larni bitta qatorda elon qilishingiz mumkin:
int x = 10, y = 20, z = 30;
