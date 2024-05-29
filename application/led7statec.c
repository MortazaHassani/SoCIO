#include <stdio.h>
#include <generated/csr.h>

/* leds */
#define CSR_LED7_BASE (CSR_BASE + 0x2000L)


void led7_on(void) {
    int led_state = 1; // Assuming 1 means the LED is on
    printf("Turning LED7 on\n");
    csr_write_simple(led_state, CSR_LED7_BASE);
}

void led7_off(void) {
    int led_state = 0; // Assuming 0 means the LED is off
    printf("Turning LED7 off\n");
    csr_write_simple(led_state, CSR_LED7_BASE);
}