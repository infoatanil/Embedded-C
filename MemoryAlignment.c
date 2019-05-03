#include <stdio.h>
#include <stdint.h>
#include <string.h>
int main()
{
    //Memory Layout for a Structure
    struct Test1{
        uint8_t	    e;
	    uint8_t	    c;
        uint32_t    d;
	    uint16_t    f;

    } MyStruct1;
    struct Test2{
        uint32_t    d;
	    uint16_t    f;
	    uint8_t	    e;
	    uint8_t	    c;
    } MyStruct2;
    printf("Size of MyStruct1= %d\n", sizeof(MyStruct1));
    printf("Size of MyStruct2= %d", sizeof(MyStruct2));
    return 0;
}


--------------------------
Size of MyStruct1= 12
Size of MyStruct2= 8
----------------------------
