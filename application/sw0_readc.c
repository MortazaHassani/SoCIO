#include <stdio.h>
#include <generated/csr.h>


void sw0_read(void)
{
    uint32_t value = sw_user_0_in_read();

    // Print the result
    printf("SW0 value: %u\n", value);
}