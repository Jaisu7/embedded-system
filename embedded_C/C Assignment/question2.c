/* Enter  register value: 00001000
Modified register value: 205
Modified binary: 11001101
*/
#include <stdio.h>


unsigned char modifyRegister(unsigned char reg) {
    reg |= (1 << 2);   
    reg &= ~(1 << 5);   
    reg ^= (1 << 0);    
    return reg;
}

int main() {
    unsigned char reg;
    printf("Enter  register value: ");
    scanf("%hhu", &reg);

    unsigned char result = modifyRegister(reg);

    printf("Modified register value: %u\n", result);
    printf("Modified binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }
    printf("\n");

    return 0;
}
