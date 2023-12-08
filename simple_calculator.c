#include <stdio.h>
#include <ctype.h>

int main(){

  char operator;
  int angka1, angka2;
  double hasil;

  printf("Masukkan bilangan 1 : ");
  scanf("%d", &angka1);
  printf("Masukkan bilangan 2 : ");
  scanf("%d", &angka2);

  printf("Ketikan jenis operator yang akan anda gunakan, contoh ketikan (+, -, *, /) : ");
  scanf("%s", &operator);
  
  switch (operator)
  {
  case '*':
    hasil = angka1 * angka2;
    break;

  case '/':
    hasil = angka1 / angka2;
    break;

  case '+':
    hasil = angka1 + angka2;
    break;

  case '-':
    hasil = angka1 - angka2;
    break;
  
  default:
    printf("Error! Pastikan jenis operator sesuai ketentuan");
    break;
  }

  printf("Hasil = %.2f", hasil);
  
  return 0;

}