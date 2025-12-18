#include <stdio.h>
#include <string.h>



int main(){
  // ENUM enumerations
  
  // enum o'zgartirib bo'lmaydigan qiymatlar to'plamini yaratish uchun ishlatiladi.

  enum Level {
    LOW,
    MEDIUM,
    HIGH
  };

  // enumni ishlatish
  enum Level myVar = MEDIUM;
  // qiymatni elon qilganda u Level enumidagi biron qiymatga tenglashtirish kerak 
  printf("My level is: %d\n", myVar); // Output: My level is: 1

  // enum ning birinchi hadi arrayga o'xshab birinchi hadi 0 keyingisi 1 va hokazo qiymatlarni oladi.
  // agar ulardagi biror qiymatni o'zgartirsak qolganlari avtomatik ravishda o'sib boradi.
  // 0 1 va 2 ni o'rniga 5 ni qo'ysak qolganlari 6 va 7 bo'ladi.
  // va undan tashqari enum dagi barcha qiymatlarga alohida qiymat berish ham mumkin.
  enum Status {
    START = 5,
    PROCESSING = 10,
    END = 15
  };

  enum Status midStatus = PROCESSING;
  printf("Mid status is: %d\n", midStatus); // Output: Mid status is: 10

  // TYPEDEF & ENUM
  // typedef bilan birgalikda enum dan foydalanish birqancha qulayroq 
  // biz enum ni ishlatmay turib to'g'ridan to'g'ri yangi nom bilan ishlashimiz mumkin.

  enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };

  typedef enum Day DayType;
  DayType today = SATURDAY;
  printf("Bugun: %d\n", today);

  // yoki  bunday ishlatish ham mumkin 
  typedef enum {sunday, monday, tuesday, wednesday, thursday, friday, saturday} Days;
  Days tomorrow = TUESDAY;
  printf("Ertaga: %d\n", tomorrow);
  
  
  return 0;
}

