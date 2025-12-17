#include <stdio.h>
#include <string.h>



int main(){
  // NESTED STRUCTS
  // structuralarni boshqa struct ichida ishlatish mumkin
  struct Address {
    char street[50];
    char city[50];
    int zip;
  };
  struct Person {
    char name[50];
    int age;
    struct Address address; // nested struct
  };

  struct Person person1;
  
  strcpy(person1.name, "Dilshod Xojimuxamedov");
  person1.age = 21;
  strcpy(person1.address.city, "Tashkent");
  strcpy(person1.address.street, "Hamza 3");
  person1.address.zip = 666103;

  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("City: %s\n", person1.address.city);
  printf("Street: %s\n", person1.address.street);
  printf("ZIP: %d\n", person1.address.zip);
  
  // bunda biz bitta asosiy struct yasab unga qo'shimcha boshqa structlarni joylashimiz mumkin
  
  printf("\n");



  // STRUCTS AND POINTERS

  struct Person person2 = {"John Doe", 30, {"Main St", "New York", 10001}};
  struct Person *ptr = &person2;

  printf("Name: %s\n", ptr->name);
  printf("Age: %d\n", ptr->age);
  printf("City: %s\n", ptr->address.city);
  printf("Street: %s\n", ptr->address.street);
  printf("ZIP: %d\n", ptr->address.zip);

  // struct pointerlarni funksyalarga uzatishda ishlatish mumkin
  struct Car {
    char model[50];
    int year;
  };

  
  void updateCarYear(struct Car *car) {
    car->year = 2025;
  }

  struct Car myCar = {"Mazda", 2015};
  
  printf("\nCar Model is: %s\n", myCar.model);
  printf("Before upadate car Year: %d", myCar.year);

  updateCarYear(&myCar);
  printf("\nAfter upadate car Year: %d", myCar.year);

  return 0;
}

