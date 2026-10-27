#include <stdio.h>
#include <stdlib.h>
int main() {
int n, i;
int a[10], b[10];
printf("Enter the number of elements:");
scanf("%d", &n);
printf("enter the first bit string:");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
printf("enter the second bit string:");
for (i = 0; i < n; i++) {
scanf("%d", &b[i]);
}
printf("Union:");
for (i = 0; i < n; i++) {
if (a[i] == 1 || b[i] == 1)
printf("1");
else
printf("0");
}
printf("\nIntersection:");
for (i = 0; i < n; i++) {
if (a[i] == 1 && b[i] == 1)
printf("1");
else
printf("0");
}
printf("\nDifference:");
for (i = 0; i < n; i++) {
if (a[i] == 1 && b[i] == 0)
printf("1");
else
printf("0");
}
printf("\n");
return 0;
}

