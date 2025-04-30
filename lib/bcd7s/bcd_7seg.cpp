#include "Arduino.h"
 #include "dec7seg.h"
     void _7SEG_init(){
         RCC->APB2ENR|=RCC_APB2ENR_IOPAEN;
         GPIOA -> CRL &= ~GPIO_CRL_CNF0 &~GPIO_CRL_MODE0 ; 
         GPIOA -> CRL &= ~GPIO_CRL_CNF1 ;
         GPIOA -> CRL &= ~GPIO_CRL_CNF2 ; 
         GPIOA -> CRL &= ~GPIO_CRL_CNF3 ; 
         GPIOA -> CRL &= ~GPIO_CRL_CNF4 ; 
         GPIOA -> CRL &= ~GPIO_CRL_CNF5 ; 
         GPIOA -> CRL &= ~GPIO_CRL_CNF6 ;  
         GPIOA -> CRL &= ~GPIO_CRL_CNF7 ; 
         
         GPIOA -> CRL |=GPIO_CRL_MODE0_0;
         GPIOA -> CRL |=GPIO_CRL_MODE1_0;
         GPIOA -> CRL |=GPIO_CRL_MODE2_0;
         GPIOA -> CRL |=GPIO_CRL_MODE3_0;
         GPIOA -> CRL |=GPIO_CRL_MODE4_0;
         GPIOA -> CRL |=GPIO_CRL_MODE5_0;
         GPIOA -> CRL |=GPIO_CRL_MODE6_0;
         GPIOA -> CRL |=GPIO_CRL_MODE7_0;
 
 
 
 
 
     } 
     void _7SEG(int num){     
         if(num== 0 ){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                          |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                          |GPIO_BSRR_BR6;
         }
         if(num== 1){
             GPIOA -> BSRR|=GPIO_BSRR_BR0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BR3
                          |GPIO_BSRR_BR4|GPIO_BSRR_BR5
                          |GPIO_BSRR_BR6;
         }
         if(num== 2){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BR2|GPIO_BSRR_BS3
                          |GPIO_BSRR_BS4|GPIO_BSRR_BR5
                          |GPIO_BSRR_BS6;
         }
         if(num== 3){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                          |GPIO_BSRR_BR4|GPIO_BSRR_BR5
                          |GPIO_BSRR_BS6;
         }
         if(num== 4){
             GPIOA -> BSRR|=GPIO_BSRR_BR0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BR3
                          |GPIO_BSRR_BR4|GPIO_BSRR_BS5
                          |GPIO_BSRR_BS6;
         }
         if(num== 5){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BR1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                          |GPIO_BSRR_BR4|GPIO_BSRR_BS5
                          |GPIO_BSRR_BS6;
         }
         if(num== 6){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BR1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                          |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                          |GPIO_BSRR_BS6;
         }
         if(num== 7){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BR3
                          |GPIO_BSRR_BR4|GPIO_BSRR_BR5
                          |GPIO_BSRR_BR6;
         }
         if(num== 8){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                          |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                          |GPIO_BSRR_BS6;
         }
         if(num== 9){
             GPIOA -> BSRR|=GPIO_BSRR_BS0|GPIO_BSRR_BS1
                          |GPIO_BSRR_BS2|GPIO_BSRR_BR3
                          |GPIO_BSRR_BR4|GPIO_BSRR_BS5
                          |GPIO_BSRR_BS6;
         }
     }