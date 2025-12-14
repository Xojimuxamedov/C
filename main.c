#include <stdio.h>
#include <string.h>

int main(){
  
  // STRUCTURES (STURCTS)
  // Struct lar bir necha qiymatlarni bitta nom ostida guruhlash imkonini beradi.
  struct Point {
    char nameFirstLatter;
    int age;
  };
  // struct lar arrayga o'xshamaydi ular bir nechta turdagi qiymatlarni bitta nom ostida saqlash imkonini beradi.
  // sturctlarni yaratayotganda uning nomi oldida "struct" kalit so'zi ishlatiladi.
  
  // struct lardan foydalanish: struct nameStruct nameVariable;
  struct Point person1;
  person1.nameFirstLatter = 'A';
  person1.age = 25;

  printf("Name First Letter: %c\n", person1.nameFirstLatter);
  printf("Age: %d\n", person1.age);
  printf("\n");

  // biz bitta struct dan bir necha bor foydalanishimiz mumkin
  struct Point person2;
  person2.nameFirstLatter = 'B';
  person2.age = 30;

  // agar structga string qo'shmoqchi bo'lsak quyidagicha yozamiz:
  struct Person {
      char name[50];
      int age;
  };
  struct Person person3;
  strcpy(person3.name, "Dilshod Xojimuxamedov");
  person3.age = 21; 
  printf("Name: %s\n", person3.name);
  printf("Age: %d\n", person3.age);
  printf("\n");

  // structni yaratayotganda unga qiymatlarni berishimiz ham mumkin:
  struct Point person4 = {'D', 22};
  
  printf("Name: %c\n", person4.nameFirstLatter);
  printf("Age: %d\n", person4.age);
  printf("\n");

  // structlarni nusxalash (copy) qilish:
  struct Point person5;
  person5 = person4; // person4 ning qiymatlari person5 ga nusxalandi
  printf("Name: %c\n", person5.nameFirstLatter);
  printf("Age: %d\n", person5.age);

  // structlarni qiymatini yangilash:
  person5.age = 28; // person5 ning age qiymati yangilandi
  printf("Updated Age: %d\n", person5.age);
  // stringda esa strcpy funksiyasidan foydalanamiz:
  strcpy(person3.name, "Xojimuxamedov Dilshod");
  printf("Updated Name: %s\n", person3.name);

  // structlarni funksiyalarga uzatish:
  void printPoint(struct Point p) {
      printf("Point Name First Letter: %c, Age: %d\n", p.nameFirstLatter, p.age);
  }

  printPoint(person1);

  // structlar bizga murakkab ma'lumotlarni boshqarish imkonini beradi va kodni yanada tartibli qiladi.
  // misol uchun bitta narsaga tegishli bo'lgan turli ma'lumotlarni bitta structda saqlash uchun.
  
  return 0;
}