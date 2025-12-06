#include <stdio.h>
#include <string.h>

void myFunction(char name[], int age){
  printf("Salom %s sizning yoshingiz %d\n", name, age);
};


int main(int argc, char const *argv[])
{

  myFunction("Dilshod", 20);
  // funksyalar bu keyinchalik ishlatish mumkin bo'lgan kodlar bloki
  // biz unga malumotlarni parametrlar sifatida kirgazsak bo'ladi 
  // parametrdagi malumotlar funksyada ishlatilganda ular argumentlar deb ataladi
  // age bu parametr u funksyani chaqrganda 20 berganmiz u argument
  // agar parametrlarimiz ko'p bolsa uni vergul bilan ajratamiz

  // funksyalarni yaratganimzda oldiga int void char va boshqa typelarni yozamiz
  // bu bizga funksya qaysi turdagi malumotni jonatishini bildiradi
  // void bu hech qanday return bo'lmasligini bildiradi

  // VARIABLE SCOPE

  // biz funksya yasaganimzda uni ichida yaragilgan variablelarni 
  // undan tashqaridagi scopeda ishlata olmaymiz 
  // ota scopedagi malumotlar bola scopega ota oladi 
  // lekin teskarisiga bola scopedan ota scopega ota olmaydi 
  // variable ota scopeda yasalib keyin value bola scopeda berilsa unda keyinchalik ota scopeda ishlata olamiz


  // Global variable C da main funksyadan tashqarida bo'lsa u global boladi 
  // uni main funksyadan tashqaridagi funksyada o'zgartirsa u mainda ishlatilganda ham o'zgarganligicha qoladi
  

  //  {
  //  |  x ni yaratdig
  //  |  |  {
  //  |  |  |  x ni ishlatsak bo'ladi 
  //  |  |  |  y ni yaratdig
  //  |  |  }
  //  |  y ni ishlata olmaymiz
  //  }


  // FUNCTION DECLARATION AND DEFINITION

  // funksya ikki qismdan tashkil topgan 
  // - 1 DECLARATION funksiyaning nomi, qaytariladigan turi va parametrlar (agar mavjud bo'lsa)
  // - 2 DEFINITION funksiyaning tanasi (bajariladigan kod)

  // void secondFunction(){ // DECLARATION
      // funksyani tanasi (DEFINITION)
  // };

  // kodni osonroq qilish uchun biz oldin kodni DECLARATION ini yaratib olib 
  // keyin DEFINITION qismini main() dan pastroqda yozgan afvzalroq boladi
  // bu kodni osonroq tushunarliroq qilish uchun qilinadi 

  //    FUNCTION DECLARATION
  //    void myFunction();
  //    
  //    THE MAIN METHOD
  //    int main() {
  //      myFunction();  // call the function
  //      return 0;
  //    }
  //    
  //    FUNCTION DEFINITION
  //    void myFunction() {
  //      printf("I just got executed!");
  //    }

  // agar parametrlar bilan ishlaydigan bo'lsak unda DECLARATION qismida qo'yib keyin DEFINITION da ham yozish kerak.

  // va biz bir funksyani ichida yana boshqa funksyani chaqirishimiz mumkin.

  

  return 0;
}
