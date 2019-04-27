#include <stdio.h>
 
int main()
{
  int boyut;
  int dizi[100];
  int i;
  int j;
  int eleman;
 
  printf("Eleman sayısını giriniz:\n");
  scanf("%d", &boyut);
 
  printf("%d sayı giriniz:\n",boyut);
 
  for (i = 0; i < boyut; i++)
{
    scanf("%d", &dizi[i]);
}
  for (i = 1 ; i <= boyut - 1; i++) {
    j = i;
 
    while ( j > 0 && dizi[j-1] > dizi[j]) {
      eleman     = dizi[j];
      dizi[j]    = dizi[j-1];
      dizi[j-1] = eleman;
 
      j--;
    }
  }
 
  printf("Sıralı Liste:\n");
 
  for (i = 0; i <= boyut - 1; i++) {
    printf("%d\n", dizi[i]);
  }
 
  return 0;
}
