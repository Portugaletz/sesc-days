#include <stdio.h>

int main(void) {
  int days, weeks, years=0;
  int numxD[1];
  scanf("%d",numxD);
  days = numxD[0];
  while((days-365)>0){
    days = days-365;
    years++;
  }
  while(days-7>0){
    days=days-7;
    weeks++;
  }
  printf("years: %d\nweeks: %d\ndays: %d\n",years, weeks, days);
}
