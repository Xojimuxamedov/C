#include <stdio.h>

int main(int argc, char const *argv[])
{

  // CONSTANTS
  const float PI = 3.14;
  // PI = 3.15; // Xato! doimiy o'zgarmas qiymatga ega bo'ladi.
  // constning vazifasi uni oldidan yozilgan o'zgaruvchining qiymatini o'zgartirib bo'lmasligini ta'minlashdir.

  // C OPERATORS
  // 1. ARIFMETIK OPERATORLAR:
  
  // +, -, *, /, %
  int a = 10;
  int b = 3;

  //  |  +  | 	Qo'shish              |   Adds together two values 	              | x + y 	
  //  |  -  | 	Ayirish               |   Subtracts one value from another 	      | x - y 	
  //  |  *  | 	Ko'paytirish          |   Multiplies two values 	                | x * y 	
  //  |  /  | 	Bo'lish               |   Divides one value by another 	          | x / y 	
  //  |  %  | 	Qoldiq                |   Returns the division remainder 	        | x % y 	
  //  |  ++ | 	Bittaga oshirish      |   Increases the value of a variable by 1  |	++x 	
  //  |  -- | 	Bittaga kamaytirish   |   Decreases the value of a variable by 1  | --x
  printf("|  +  | 	Qo'shish              |   Adds together two values 	              | x + y 	\n");
  printf("|  -  | 	Ayirish               |   Subtracts one value from another 	      | x - y 	\n");
  printf("|  *  | 	Ko'paytirish          |   Multiplies two values 	                | x * y 	\n");
  printf("|  /  | 	Bo'lish               |   Divides one value by another 	          | x / y  	\n");
  printf("| ⁰/₀ | 	Qoldiq                |   Returns the division remainder 	        | x % y 	\n");
  printf("|  ++ | 	Bittaga oshirish      |   Increases the value of a variable by 1  |	++x   \n");
  printf("|  -- | 	Bittaga kamaytirish   |   Decreases the value of a variable by 1  | --x   \n\n");


  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n\n", a - b);
  // ... 

  // 2. ASSIGNMENT OPERATORS:
  // Bular barobar bilan ishlatiladigan operatorlardir.
  // =, +=, -=, *=, /=, %=
  printf("=, +=, -=, *=, /=, %=\n");
  // masalan: a += b  ->  a = a + b
  printf("bularni tushunish oson ular shunchaki qisqartmarar\n");
  // ... 
  printf("a += b -> %d\n", a += b); // a = a + b

  // 3. COMPARISON OPERATORS:
  // taqqoslash operatorlari bular ham judaham oddiy operatorlardir.
  // ular faqat ikki qiymatni taqqoslashda ishlatiladi.
  // ==, !=, >, <, >=, <=
  // != faqatgina shunga etibor bersak arziydi u "teng emas" degani.
  // == ni teskarisini qaytaradi.

  printf("\n==, !=, >, <, >=, <=\n");
  printf("a == b -> %s\n", a == b ? "Teng" : "Teng emas"); 
  printf("a != b -> %s\n", a != b ? "Teng emas" : "Teng");

  //  4. LOGICAL OPERATORS:
  //  |   &&  |  	AND   	x < 5 &&  x < 10     	1 Qaytaradi agar ikkala bayonot ham to'g'ri bo'lsa
  //  |   ||  |  	OR 	    x < 5 || x < 4       	1 Qaytaradi agar bayonotlardan kamida bittasi to'g'ri bo'lsa
  //  |   ! 	|   NOT 	  !(x < 5 && x < 10) 	  1 Qaytaradi agar bayonot NOTO'G'RI bo'lsa

  // Xoshe endi operatorlar haqida yetarlicha ma'lumot berdik
  // Endi ular qanday ketma ketlikda ishlashini ko'rib chiqamiz.
  
  // |   ()             |  Parentheses
  // |   *, /, %        |  Multiplication, Division, Modulus
  // |   +, -           |  Addition, Subtraction
  // |   >, <, >=, <=   |  Comparison
  // |   ==, !=         |  Equality
  // |   &&             |  Logical AND
  // |   ||             |  Logical OR
  // |   =              |  Assignment


  return 0;
}
