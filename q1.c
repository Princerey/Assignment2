#include <stdio.h>
int main() {

  int n, reverse = 0, remainder,temp;

  scanf("%d", &n);
  temp=n;
  while (temp != 0) {
    remainder = temp % 10;
    reverse = reverse * 10 + remainder;
    temp /= 10;
  }
if(n==reverse)
printf("YES");
else
printf("NO");

  return 0;
}