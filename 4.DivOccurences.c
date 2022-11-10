#include<stdio.h>
/*Divyaranjan Sahoo
No of occurences*/
int main(){
  int i,j,n,Div,Alpha=0;
  printf("Input the number of values ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for (i=0;i<n;i++){
    printf("Array Value %i - ",i+1);
    scanf("%i",&DivArray[i]);}
  //Buble sorting the elements for ease
  for (i=0;i<n-1;i++){
    for (j=0;j<n-1;j++){
      if(DivArray[j]>DivArray[j+1]){
        Div=DivArray[j];
        DivArray[j]=DivArray[j+1];
        DivArray[j+1]=Div;}}}
  printf("\n");
  for (i=0;i<n;i+=Alpha){
    Alpha=0;
    for (j=0;j<n;j++){
      if (DivArray[j]==DivArray[i]){
        Alpha+=1;}}
    printf("%i available %i times\n",DivArray[i],Alpha);}
  return 0;}
