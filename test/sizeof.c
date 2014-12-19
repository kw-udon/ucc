/*
1
1
5
6
1
3
*/
#include "ucc.h"

struct foo {
  int a;
  int b;
  int c[3];
};

struct bar {
  struct foo a;
  struct foo *b;
};

typedef int baz[3];

int
main()
{
  print_int(sizeof(int));
  print_int(sizeof(unsigned));
  print_int(sizeof(struct foo));
  print_int(sizeof(struct bar));
  print_int(sizeof(struct bar *));
  print_int(sizeof(baz));
}
