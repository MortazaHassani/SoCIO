#include <stdio.h>
#include <generated/csr.h>

/* leds */
#define CSR_LED0_BASE (CSR_BASE + 0x1800L)


void led0c(void) {
  

  static int i = 0;

  i++;

    printf("Toggle LED0\n\t\tcontrolled\n");
  csr_write_simple(i&0x7, CSR_LED0_BASE);
}