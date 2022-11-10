#include<stdio.h>
/*Divyaranjan Sahoo
Ith Index Product*/
int main(){
  int i,j,n,Alpha=1,DivRes;
  printf("Input the number of values ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for (i=0;i<n;i++){
    printf("Enter the %ith value - ",i+1);
    scanf("%i",&DivArray[i]);
    Alpha*=DivArray[i];}
  printf("Array[] - {");
  for (i=0;i<n;i++){
    printf("%d,",Alpha/DivArray[i]);}
  printf("\b}");
  return 0;}
