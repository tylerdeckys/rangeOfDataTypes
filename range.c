#include <stdio.h>
#include <limits.h>

//print RANGES of char, short, int, long, all signed and unsigned
void main()
{
    //range of unsigned char
    printf("Unsigned char range: %d - %d\n", 0, UCHAR_MAX);

    //range of signed char
    printf("Signed char range: %d - %d\n", SCHAR_MIN, SCHAR_MAX);

    //range of unsigned short
    printf("Unsigned short range: %d - %u\n", 0, USHRT_MAX);

    //range of signed short
    printf("Signed short range: %d - %d\n", SHRT_MIN, SHRT_MAX);

    //range of unsigned int
    printf("Unsigned int range: %d - %u\n", 0, UINT_MAX);

    //range of signed int
    printf("Signed int range: %d - %d\n", INT_MIN, INT_MAX);

    //range of unsigned long
    printf("Unsigned long range: %d - %lu\n", 0, ULONG_MAX);
    
    //range of signed long
    printf("Signed long range: %ld - %ld\n", LONG_MIN, LONG_MAX);


}
