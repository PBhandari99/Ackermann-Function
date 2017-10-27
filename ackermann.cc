// This is Ackermann's function implementation.

#include <iostream>

int ackermann(int m, int n) {
  if (m==0) {
    return n+1;
  }
  else if (m>0 && n==0) {
    return ackermann(m-1, 1);
  }
 return  ackermann(m-1, ackermann(m, n-1));
}

int main() {
  for (int i=0; i<6; ++i) {
    for (int j=0; j<6; ++j) {
      std::cout << "Acckerman of ackermann(" << i << " " << j << ") is: " << ackermann(i, j) << '\n';
    }
  }
  return 0;
}
