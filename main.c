#include <stdio.h>

int rounder (double value);
int rounderup (int value);
int rounderdown (int value);

int main() {
  
  int rd;
  int rdup;
  int rddown;
  int value;

  printf("value: ");
  scanf("%d", &value);

  rd = rounder(value);
  rdup = rounderup(rd);
  rddown = rounderdown(rd);
  
  printf("rd: %d\n", rd);
  printf("rdup: %d\n", rdup);
  printf("rddown: %d\n", rddown);


}