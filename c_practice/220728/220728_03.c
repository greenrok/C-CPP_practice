#include <stdio.h>

struct point
{
  int xpos;
  int ypos;
};
typedef struct point Point;

typedef struct person
{
  char name[20];
  char phoneNum[20];
  int age;
} Person;

int main()
{
  Point pos = {10, 20};
  Person man = {"김나박이", "010-1111-1111", 26};

  printf("%d, %d \n", pos.xpos, pos.ypos);
  printf("%s, %s, %d \n", man.name, man.phoneNum, man.age);

  return 0;
}
