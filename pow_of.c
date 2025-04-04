#include <stdio.h>

double pow_of(long int base, int power);

int main()
{


    return 0;
}

double pow_of(long int base, int power)
{
    int i, sign = 0;
    double num = 1.0;

    if (base == 0 && power > 0) {
        return 0;
    }
    else if (power <= 0) {
        return -1; // 0 to the power of 0 is indeterminate and 0 to the power of a negative number does not exists
    }
    if (power == 0) {
        return 1;
    }
    if (power < 0) {
        sign = 1; // Means that the power is negative
        power = -power; // Turn the power to positive
    }
    for (i=0; i < power; i++) {
        num *= base;
    }
    if (sign) {
        num = 1 / num;
    }

    return num;
}
