#include <stdio.h>
#include <string.h>



int main(){
  
  // UNIONS 
  // union lar ham huddi structlarga o'xshaydi 
  // lekin structlarda har bir variable memoryda alohida joy egallaydi
  // unionlarda esa barcha variable'lar bir xil memory joyini egallaydi
  // unionda bitta memoryga joy ajratilgandan keyin biror unionni yangilasak u memorydagi 
  // variable malumotni yangilaydi yani eski elon qilingan valuela o'chib ketadi

  union Data {
    int i;
    float f;
    char str[20];
  };

  union Data data;
  data.i = 10;
  printf("data.i: %d\n", data.i); // 4

  data.f = 220.5;
  printf("data.i: %d\n", data.i); // 4
  printf("data.f: %.2f\n", data.f); // 8

  printf("\n");

  // ko'rayotgan bo'lsangiz data.i ning birinchi qiymati yo'qolib ketdi
  // chunki data.f ham xuddi data.i kabi bir xil memory joyini egallaydi
  
  printf("Size of union Data: %zu bytes\n", sizeof(data)); // 20
  printf("\n");


  // TYPDEF
  // typedef orqali mavjud turlarga yangi nom berishimiz mumkin

 struct Car2 {
    char brand[30];
    int year;
  };

  // With typedef:
  typedef struct {
    char brand[30];
    int year;
  } Car2;

  struct Car2 person1 = {"Alice", 30}; // struct bilan uzunroq yoziladi
  Car2 person2 = {"Bob", 25}; // typedef bilan qisqaroq yoziladi

  printf("Car 1: Brand: %s, Year: %d\n", person1.brand, person1.year);
  printf("Car 2: Brand: %s, Year: %d\n", person2.brand, person2.year);

  // PADDING
  // C tilida structlarda padding bo'lishi mumkin
  // bu dasturni qancha ishlashini qarab chiqiladi va structdagi elenentlar sarzon
  // Paddinglar dastur tez ishlashiga ta'sir qiladi
  // lekin biz ketma ketlikda o'tirsak bo'lgan elenentlar uchun paddingni kamaytirishimiz mumkin
  
  struct Padded {
    char a;      // 1 byte
    // 3 bytes padding
    int b;       // 4 bytes
    char c;      // 1 byte
    // 3 bytes padding
  }; // Total size: 12 bytes
  printf("Size of struct Padded: %zu bytes\n", sizeof(struct Padded));

  struct Packed {
    char a;      // 1 byte
    char c;      // 1 byte
    int b;       // 4 bytes
  }; // Total size: 8 bytes
  printf("Size of struct Packed: %zu bytes\n", sizeof(struct Packed));
  
  return 0;
}

