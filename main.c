#include <stdio.h>
#include <math.h>

int main(){

  // MATH FUNCTIONS

  // Bizda yana matematika uchun funksyalar bor 
  // uni ishlatsh uchun math.h kutubxonasini ulashimiz kerak

  // ildiz olish sqrt(son)
  printf("Ildiz(16) = %.2f\n", sqrt(16.0));

  // ceil - yuqoriga qarab yaxlitlash
  // floor - pastga qarab yaxlitlash
  printf("Ceil(4.3) = %.2f\n", ceil(4.3));
  printf("Floor(4.3) = %.2f\n", floor(4.3));

  // pow(son, daraja) - sonni darajaga ko'tarish
  printf("Pow(2, 3) = %.2f\n", pow(2.0, 3.2));


  // INLINE FUNCTIONS
  // Inline funksya chaqirilganda unga borib ishni bajarib qaytib kelmasdan
  // funksya chaqirilganda bu kompilyatorga funksya chaqiruvini o'sha joyga joylashtirishni buyuradi
  // Bu funksya ishlashini biroz tezlashtiradi

  inline int yigindi1(int a, int b){
    return a + b;
  };
   int yigindi2(int a, int b){
    return a + b;
  };
  printf("Yigindi = %d\n", yigindi2(5, 10));
  // inline yigindi1 va yigindi2 bir xil ishlaydi 
  // faqat inline yigindi1 funksyasi qayerda ishlatilgan bolsa o'sha yerga funksyani kodini joylashtiradi
  // yigindi2 funksyasi esa chaqirilganda funksiya joyiga borib ishni bajarib qaytadi

  // Ko'p inline funksyalar dasturni katta va sekin ishlashiga olib kelishi mumkin

  // REGULAR FUNCTIONS
  // funksya chaqirilganda unga borib ishni bajarib qaytib keladi
  // sekinroq ishlaydi
  // katta funksiyalar uchun yaxshi ishlaydi

  // INLINE FUNCTIONS
  // funksya chaqirilganda uni o'sha joyga joylashtiradi
  // tezroq ishlaydi
  // kichik funksiyalar uchun yaxshi ishlaydi



  // RECURSION
  // Funksya o'zini o'zi chaqirishi
  int faktorial(int n){
    if(n == 0){
      return 1;
    } else {
      return n * faktorial(n - 1);
    }
  };
  printf("Faktorial(5) = %d\n", faktorial(5));

  // Rekursiya juda kuchli vosita lekin uni noto'g'ri ishlatish dasturda xatoliklarga olib kelishi mumkin
  // Masalan funksya o'zini cheksiz chaqirib ketishi mumkin va dastur to'xtab qoladi

  // FUNCTION POINTERS
  // pointerli funksya oddiy pointer kabi ishlaydi
  // pointerli funksyalar sizga programma ishlayotgan paytda qaysi funksya chaqirilishini tanlash imkonini beradi
  // yoki funksyani argument sifatida funksya uzatish imkonini beradi
  
  // pointer funksya memoryda joylashgan manzilni biladi va siz uni hohlagan vaqtda chaqirishingiz mumkin
  // pointer funksyani elon qilish uchun quyidagi sintaksis ishlatiladi
  // returnType (*pointerName)(parameterType1, parameterType2, ...);
  
  int add(int a, int b){
    return a + b;
  };
  
  int (*ptr)(int, int) = add;
  // bu ptr nomli pointer funksya ikkita int tipidagi argument qabul qiladi va int tipida qiymat qaytaradi

  int result = ptr(5, 5);
  printf("Result: %d\n", result);

  // bu yerda ptr add funksyasiga pointer
  // ptr(5, 5) chaqiruv orqali add(5, 5) funksiyasini chaqiradi
  // bu add(5, 5) funksya chaqirishi bilan bir xil natija beradi


  // PASSING A FUNCTION AS AN ARGUMENT
  // funksya poineri boshqa funksyaga argument sifatida uzatilishi mumkin
  
  void greetMorning() { printf("Good morning!\n"); };
  void greetEvening() { printf("Good evening!\n"); };
  
  void greet(void (*func)()) {
    func();
  };

  greet(greetMorning); // Good morning!
  greet(greetEvening); // Good evening!


  // FUNCTION POINTER ARRAY
  // biz bir nechta funksya pointerlarini arrayda saqlashimiz va uni chaqirishimiz mumkin

  void add1() { printf("Add\n"); };
  void subtract() { printf("Subtract\n"); };
  void multiply() { printf("Multiply\n"); };

  void (*operations[3])() = { add1, subtract, multiply };
  for (int i = 0; i < 3; i++) {
    operations[i]();
  }
  return 0;

  // bunday turdagi funksya pointer arraylari kalkulyator dasturlarida foydali bo'lishi mumkin

  // NORMAL FUNCTION
  // ismi orqali chaqiriladi
  // funksya dastur ishga tushishdan oldin aniqlanadi
  // oddiy ko'd uchun yaxshi

  // FUNCTION POINTER
  // pointer orqali chaqiriladi
  // dastur ishlayotganda qaysi funksya chaqirilishini tanlash mumkin
  // moslashuvchanlik va qayta foydalanish uchun yaxshi

  // CALLBACK FUNCTIONS
  // calbak funksyalar argument sifatida boshqa funkyaga berilishi mumkin
  // qabul qiluvchi funksya kerak bolganda uni qayta chaqirishi mumkin
  // siz logikani o'zgartirmasdan qaysi funksya chaqirilishini tanlashingiz mumkin

  void addNumbers(int a, int b) {
    printf("The sum is: %d\n", a + b);
  }
  void calculate(void (*callback)(int, int), int x, int y) {
    callback(x, y);
  }

  calculate(addNumbers, 5, 3);

  
  return 0;
}