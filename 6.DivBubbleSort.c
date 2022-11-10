#include<stdio.h>
/*Divyaranjan Sahoo
Bubble sort*/
int main(){
  int i,j,n,Div;
  printf("Input the number of values ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for (i=0;i<n;i++){
    printf("Input Array value %i - ",i+1);
    scanf("%i",&DivArray[i]);}
  for (i=0;i<n-1;i++){
    for (j=i;j<n-1;j++){
      if(DivArray[j]>DivArray[j+1]){
        Div=DivArray[j];
        DivArray[j]=DivArray[j+1];
        DivArray[j+1]=Div;}}}
  printf("Array Sorted [] - {");
  for (i=0;i<n;i++){
    printf("%i ",DivArray[i]);}
  printf("\b}");
  return 0;}
