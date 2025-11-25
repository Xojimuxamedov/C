#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

  // BOOLEAN TYPES
  // boolean da 2 hil tur boladi true va false
  // C tilida boolean turini ishlatish uchun <stdbool.h> kutubxonas ishlatiladi
  // C da 0 qiymati false ga teng va 0 dan boshqa barcha qiymatlar true ga teng deb hisoblanadi
  // bolean qiymatini print qilish uchun %d format spesifikatori ishlatiladi
  bool isTrue = true;
  bool isFalse = false;
  printf("isTrue: %d\n", isTrue);   // chiqishi: isTrue: 1
  printf("isFalse: %d\n\n", isFalse); // chiqishi: isFalse

  // taqqoslash operatorlari bilan boolean qiymatlarni tekshirish
  int a = 15;
  int b = 10;
  printf("a < b -> %d\n", a < b); // chiqishi: a < b: 1

  // IF ELSE STATEMENT
  // if statement yordamida shartlarni tekshirish mumkin
  // agar shart true bo'lsa if block ichidagi kod bajariladi
  // aks holda else block ichidagi kod bajariladi

  if (a < b)
  {
    printf("a: %d kichik b: %d dan\n", a, b);
  }
  else if (a > b)
  {
    printf("a: %d katta b: %d dan\n", a, b);
  }
  else
  {
    printf("a: %d va b: %d teng\n", a, b);
  }

  // SHORT HAND IF ELSE
  // bitta if else statement ni qisqa shaklda yozish mumkin
  printf("max qiymat: %d\n", a > b ? a : b); // chiqishi: max qiymat: 15

  // bunda biz faqat if yoki else blokidan foydalangan bolamiz va natijani to'g'risini qaytaradi

  
  // NESTED IF ELSE
  // if else statement ichida yana if else statement yozish mumkin
  int c = 20;
  if (a > b)
  {
    if (a > c)
    {
      printf("a: %d eng katta qiymat\n", a);
    }
    else
    {
      printf("c: %d eng katta qiymat\n", c);
    }
  }
  else
  {
    if (b > c)
    {
      printf("b: %d eng katta qiymat\n", b);
    }
    else
    {
      printf("c: %d eng katta qiymat\n", c);
    }
  }

  // manashu yerda biz a, b va c qiymatlarini solishtirib eng kattasini topdik
  // buning qulayligi shundaki biz har bir shartni alohida tekshirib chiqamiz

  // LOGICAL OPERATORS
  // mantiqiy operatorlar yordamida bir nechta shartlarni birlashtirish mumkin
  int x = 5;
  int y = 10;
  if (x < y && a > b)
  {
    printf("x: %d kichik y: %d va a: %d katta b: %d dan\n", x, y, a, b);
  }
  if (x > y || a > b)
  {
    printf("x: %d katta y: %d yoki a: %d katta b: %d dan\n", x, y, a, b);
  }
  if (!(x > y))
  {
    printf("x: %d katta y: %d emas\n\n", x, y);
  }


  return 0;
}
