/*
0
9
18
1
10
19
2
11
20
3
12
21
4
13
22
5
14
23
6
15
24
7
16
25
8
17
26
*/
#include "test.h"

int array[3][3][3];
int main () {
  int i,j,k;
  for (i=0;i<3;++i) {
    for (j=0;j<3;++j) {
      for (k=0;k<3;++k) {
        array[i][j][k] = i*9 + j*3 + k;
      }
    }
  }

  for (j=0;j<3;++j) {
    for (k=0;k<3;++k) {
      for (i=0;i<3;++i) {
        print_int(array[i][j][k]);
      }
    }
  }

}
