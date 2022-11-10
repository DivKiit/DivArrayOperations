#include<stdio.h>
/*Divyaranjan Sahoo
Selection sort*/
int main(){
  int i,j,Div,n,Alpha,Beta;
  printf("Input the number of values ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for (i=0;i<n;i++){
    printf("Input Array value %i - ",i+1);
    scanf("%i",&DivArray[i]);}
  for (i=0;i<n-1;i++){
    for (j=i+1;j<n;j++){
      if (DivArray[j]<DivArray[i]){
        Div=DivArray[i];
        DivArray[i]=DivArray[j];
        DivArray[j]=Div;}}}
  printf("\nArray [Selection sort] - {");
  for (i=0;i<n;i++){
    printf("%i,",DivArray[i]);}
  printf("\b}\n");
  return 0;}
