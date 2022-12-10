#include <stdio.h>
void baran (int i) {
if(i)
baran(i - 1);
else
return;
printf("baran\n",i);
}
int main(){
int n;
n=10;
baran(n);
return 0;
}