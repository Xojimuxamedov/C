#include <stdio.h>
#include <math.h>

int main(){
  // MEMORY ADRES
  // biz biror o'zgaruvchi yaratganimizda, unning xotirada joylashgan manzili mavjud bo'ladi.
  
  int a = 10;
  printf("O'zgaruvchi a ning qiymati: %d\n", a);
  printf("O'zgaruvchi a ning xotira manzili: %p\n", &a);
  // biror o'zgaruvchining xotira manzilini olish uchun '&' operatoridan foydalanamiz.
  // uni print qilish uchun %p format spesifikatoridan foydalanamiz.
  // biz o'zgaruvchini xottirada qayerdaligini bilish uchun ko'rganimizda 
  // u bizga har bir run vaqtida turli manzillarni ko'rsatadi.
  // &a bu pointer deb ataladi

  // POINTERS
  // pointer bu variablening xotira manzilini saqlaydigan o'zgaruvchidir.
  // char myChar = 'A';
  // int *pMyChar = &myChar; // pointerga o'zgaruvchining manzilini tayinlash
  // printf("myChar ning qiymati: %c\n", myChar);
  // printf("myChar ning xotira manzili: %p\n", &myChar);
  // printf("pMyChar ning qiymati (myChar ning manzili): %p\n", pMyChar);


  // DEREFERENCING
  // pointer orqali o'zgaruvchining qiymatiga kirish uchun dereferencing qilamiz.

  int myAge = 43;     // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // Reference: myAge ning xotiradagi manzilini ko'rsatadi (0x7ffe5367e044)
  printf("%p\n", ptr);

  // Dereference: myAge ni xotiradagi manzili yordamida myAge ni chiqaramiz (43)
  printf("%d\n", *ptr);


  // POINTERS & ARRAYS
  // arrayning pointerlari ketma-ketligi bo'lib, ular array elementlarining xotira manzillarini saqlaydi.
  int numbers[] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++)
  {
    printf("Element %d ning qiymati: %d, manzili: %p\n", i, *(numbers + i), (numbers + i));
  }
  // bularning har birining pointer manzili 4 ga farq qiladi, chunki int turi 4 baytni egallaydi.
  // va hokazo huddi shu yo'l bilan array qiymatini ketma ketlida olishimiz mumkin.
  // ularni qiymatini o'zgartrishimiz ham mumkin:


  // POINTER ARITHMETIC
  // pointer arithmetic orqali pointer qiymatini o'zgartirishimiz mumkin.
  int vals[] = {100, 200, 300, 400, 500};
  int* pVal = vals; // vals array ning birinchi elementining manzili
  printf("Birinchi element: %d\n", *pVal); // 100
  pVal++; // pointer ni keyingi elementga o'tkazish
  printf("Ikkinchi element: %d\n", *pVal); // 200
  pVal += 2; // pointer ni yana ikki elementga o'tkazish
  printf("To'rtinchi element: %d\n", *pVal); // 400

  
  // hamma pointerlar bir hil tarzda o'zgarmaydi
  // masalan, char pointer har bir qadamda 1 bayt o'zgaradi
  char chars[] = {'A', 'B', 'C', 'D', 'E'};
  char* pChar = chars; // chars array ning birinchi elementining manzili
  printf("Birinchi element: %c\n", *pChar); // A
  pChar++; // pointer ni keyingi elementga o'tkazish
  printf("Ikkinchi element: %c\n", *pChar); // B
  // yointerdagi tur qanday kattalikdagi bitda bo'lsa shunga mos ravshda ortadi yoki kamayadi.
  // int da 4 bayt pointeriga 1 qo'shsak 4 baytga ortadi
  // char da 1 bayt pointeriga 1 qo'shsak 1 baytga ortadi


  // POINTER TO POINTER
  // pointer to pointer bu pointerning manzilini saqlaydigan pointerdir.
  int number = 55;
  int* pNumber = &number;        // pointer to int
  int** ppNumber = &pNumber;     // pointer to pointer to int
  printf("number ning qiymati: %d\n", number);               // 55
  printf("pNumber orqali number ning qiymati: %d\n", *pNumber); // 55
  printf("ppNumber orqali number ning qiymati: %d\n", **ppNumber); // 55

  // bu yerda     number value ni o'zida saqlayabti
  // *pNumber     number ning manzilini saqlayabti
  // **ppNumber   pNumber ning manzilini saqlayabti va u orqali number ga kirayabti

  return 0;
}