#include<stdio.h>
/*Divyaranjan Sahoo
Nugatory*/
int main(){
  int i,j,k,a,b,DivSet[a+b];
  printf("No of values in Set-I ~ ");
  scanf("%i",&a);
  printf("No of values in Set-II ~ ");
  scanf("%i",&b);
  int AlphaSet[a],BetaSet[b];
  printf("\n");
  for(i=0;i<a;i++){
    printf("Input the values in Set-I ~ ");
    scanf("%i",&AlphaSet[i]);}
  printf("\n");
  for(j=0;j<b;j++){
    printf("Input the values in Set-II ~ ");
    scanf("%i",&BetaSet[j]);}
  printf("\nConcatenated Set AUB = [");
  for(k=0;k<a;k++){
  DivSet[k]=AlphaSet[k];}
  for(k=a;k<a+b;k++){
    DivSet[k]=BetaSet[k-a];}
  for(k=0;k<a+b;k++){
  printf("%d,",DivSet[k]);}
  printf("\b]\n");
  return 0;}
