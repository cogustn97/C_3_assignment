#include<stdio.h>
int main(){
double x=1.0,s,s1=0.0,SS;
   while(1){
      s = x * x;
      s += s1;
      SS = s - s1;
      printf("x가 %lf일때 넓이의 차이는 %lf - %lf = %lf\n",x,s,s1,SS);
      x = x / (double)2;
      s1= s;
      if(SS <= 0.000001) break;
   }
   return 0;
}