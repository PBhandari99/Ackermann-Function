#include <stdio.h>

int ackermann(int m, int n) {
  if (m == 0) {
    return n+1;
  }
  else if (m>0 && n==0) {
    return ackermann(m-1, 1);
  }
  return ackermann(m-1, ackermann(m, n-1));
}

int main() {
  for (int i=0; i<6; ++i) {
    for (int j=0; j<6; ++j) {
      printf("ackerman(%d, %d) is: %d\n", i, j, ackermann(i, j));
    }
  }
  return 0;
}
