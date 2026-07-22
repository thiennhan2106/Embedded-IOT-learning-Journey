#include <stdio.h>
void printb(unsigned int num) {
    unsigned int 
    bit,
    count = 0,
    skip = 1;

    for(int i = 31; i >= 0; i--) {
        //j loop is replaced by ((num >> (i - 3) & 0xF) == 0)
        if ( ((num >> (i - 3) & 0xF) == 0) && i != 3 && skip) {
            i -=3;
            continue;
        }
        skip = 0;
        bit = (num >> i) & 1;

        //i % 4 == 0 -> (i & 3) == 0
        putchar(bit + '0');
        if ((i & 3) == 0 && i != 0) putchar(' ');        
    }
    putchar('\n');
}
int main() {
    unsigned int c = 0b10100001010, Mask1 = 0b1 << 2, Mask2 = 0b1 << 1;
    printf("c: ");
    printb(c);
    printf("set bit 2 to 1: ");
    printb(c | Mask1);
    printf("set bit 1 to 0: ");  
    printb(c & ~Mask2);
}
