#include "ft_check_file.h"

int main(int argv, char *argc[])
{
  Person *me; 
  me = malloc(sizeof(Person));
  me->firstname = "toto"; 
  me->lastname = "tata"; 
  me->age = 50;

 //struct Persone *ptr = &me;


 ft_print(me);

    printf("Name: %s\nLast Name: %s\nAge: %d\n",
           me->firstname, me->lastname, me->age);
    
  printf("ok\n");
  return (0);
  }
