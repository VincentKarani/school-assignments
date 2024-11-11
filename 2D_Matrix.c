#include <stdio.h>
#include <stdlib.h>


int main() {
  int i, j;
  int marks[2][3] = {
    {75, 60, 40},
    {55, 45, 80}
  };

  for (i=0;i<2;i++) {
    for (j=0;j<3;j++) {
      printf("Marks[%d][%d] = %d\n", marks[i][j]);
    }
  }
  return 0;
}
