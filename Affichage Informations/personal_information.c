#include <stdio.h>

char name[50], surname[50], email[100];
int age;
char gender;
  
  int main() {
      printf("enter you first name : ");
      scanf("%s",&name);
      
      printf("enter your surname : ");
      scanf("%s",&surname);
      
      printf("enter you email address :");
      scanf("%s", &email);
      
      printf("enter you age :");
      scanf("%d", &age);
      
      printf("enter your gender m(male) or f(female) : ");
      scanf("%s", &gender);
      
      printf("your personal enformations are : \n ");
      printf("your full name is : %s %s \n", name, surname);
      printf("you are %d years old \n", age);
      if (gender == 'm') {
        printf("you are male");
        } else{
            printf("you are female");
        }
      
       return 0;   
  }
