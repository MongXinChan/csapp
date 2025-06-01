#include <stdio.h>

int main(){
    int a[]={1<<2+3<<4,(1<<2)+(3<<4),1<<(2+3)<<4,1<<(2+3<<4)};
    for(int i=0; i<4; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}