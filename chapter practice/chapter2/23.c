#include <stdio.h>

int fun1(unsigned word){
    return (int)((word<<24)>>24);
}
//算数右移会保留符号位，因此可以直接将无符号数转换为有符号数。
//而逻辑右移会将符号位补0，因此需要先左移24位，再右移24位，

int fun2(unsigned word){
    return ((int)(word<<24)>>24);
}
//将无符号数转换为有符号数后，再进行算数右移。
//注意：在C语言中，右移操作符的行为取决于操作数的类型。

int main(){
    unsigned int a[]={0x00000076,0x87654321,0x000000c9,0xEDCBA987};
    for(int i=0; i<4; i++){
        printf("fun1(0x%08x) = %d\n", a[i], fun1(a[i]));
        printf("fun2(0x%08x) = %d\n", a[i], fun2(a[i]));
    }
    return 0;
}