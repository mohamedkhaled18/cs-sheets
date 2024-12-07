#include <stdio.h>
float CalcTax(float V) {
    if (V < 20000)  return V;
    return (V * 0.20);
}
int main(){
    int N;float Salary;
    printf("Enter The Num Of Embs  : ");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){
     printf("\nEnter The Salary For %d  Emb : ",i);
     scanf("%f",&Salary);
     printf("\nThe Salary For %d  Emb is  : %f\n",i,CalcTax(Salary));
    }
return 0;
}
//with while


#include <stdio.h>
float CalcTax(float V) {
    if (V < 20000)  return V;
    return (V * 0.20);
}
int main(){
    int N,i;float Salary;
    printf("Enter The Num Of Embs  : ");
    scanf("%d",&N);
    while(N > i){
     printf("\nEnter The Salary For %d  Emb : ",i + 1);
     scanf("%f",&Salary);
     printf("\nThe Salary For %d  Emb is  : %f\n",i + 1,CalcTax(Salary));
     if (N == i)break;
     i ++;
    }
return 0;
}