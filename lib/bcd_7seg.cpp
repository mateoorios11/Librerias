#include "7seg.h"
int l = 0;
void _7seg_init()
{

    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;
    GPIOB->CRL |= 0x11111111; 

void _7seg(int num)
{
    switch (num)
    {
    case 1:
        for (l = 0; l < 8; l++)
        {
            GPIOB->BSRR |= (1 << (l + 16));
        }
        GPIOB->BSRR |= (1 << 4) | (1 << 5);
        break;
    case 2:
        for (l = 0; l < 8; l++)
        {
            GPIOB->BSRR |= (1 << (l + 16));
        }
        GPIOB->BSRR |= (1 << 0) | (1 << 1) | (1 << 3) | (1 << 4) | (1 << 6);
        break;
    case 3:
        for (l = 0; l < 8; l++)
        {
            GPIOB->BSRR |= (1 << (l + 16));
        }
        GPIOB->BSRR |= (1 << 0) | (1 << 1) | (1 << 2) | (1 << 3) | (1 << 6);
    case 4:
        for (l = 0; l < 8; l++)
        {
            GPIOB->BSRR |= (1 << (l + 16));
        }
        GPIOB->BSRR |= (1 << 1) | (1 << 2) | (1 << 5) | (1 << 6);
    case 5:
        for (l = 0; l < 8; l++)
        {
            GPIOB->BSRR |= (1 << (l + 16));
        }
        GPIOB->BSRR |= (1 << 0) | (1 << 2) | (1 << 3) | (1 << 5) | (1 << 6);
    case 6:
        for (l = 0; l < 8; l++)
        {
            GPIOB->BSRR |= (1 << (l + 16));
        }
        GPIOB->BSRR |= (1 << 0) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6);
    }
}