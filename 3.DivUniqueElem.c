#include<stdio.h>
/*Divyaranjan Sahoo
Unique elements in Array*/

//INCOMP

int main(){
  int i,j,n;
  printf("Input the number of values ~ ");
  scanf("%i",&n);
  int Array[n];
  int DivArray[n],Div=0;
  for (i=0;i<n;i++){
    printf("Enter the %ith value - ",i+1);
    scanf("%i",&Array[i]);}
  for (i=0;i<n;i++){
    for (j=0;j<i;j++){
      if (Array[j]==Array[i]){
        printf("%i ",Array[j]);
        Array[j]=0;
        break;}}}
  for (i=0;i<n;i++){
    printf("%i \n",Array[i]);}
  return 0;}
