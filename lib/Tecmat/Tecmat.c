#include "stm32f103xb.h"Add commentMore actions
#include "Tecmat.h"
int mat [4][4]={
            {0,1,1,1},
            {1,0,1,1},
            {1,1,0,1},
            {1,1,1,0}
        };
char mapa[4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};
int i;

    void MATRIZ_(){
int i,j;

    char mapa[4][4] = {
        {'1','2','3','A'},
        {'4','5','6','B'},
        {'7','8','9','C'},
        {'*','0','#','D'}
    };

    void MATRIZ_(int c0, int c1,int c2,int c3,int f0,int f1,int f2,int f3){
        int col[4]=(c0, c1, c2, c3);
        int fil[4]=(f0, f1, f2, f3);
        RCC->APB2ENR|=RCC_APB2ENR_IOPAEN;
        GPIOA -> CRL &= ~(0xF << 0*4);
        GPIOA -> CRL &= ~(0xF << 1*4);
        GPIOA -> CRL &= ~(0xF << 2*4);
        GPIOA -> CRL &= ~(0xF << 3*4);
     
        GPIOA -> CRL &= ~GPIO_CRL_CNF4 &~GPIO_CRL_MODE0 ; 
        GPIOA -> CRL &= ~GPIO_CRL_CNF5 ;
        GPIOA -> CRL &= ~GPIO_CRL_CNF6 ; 
        GPIOA -> CRL &= ~GPIO_CRL_CNF7 ; 

        GPIOA -> CRL |= (0xF << (0*4)+3);
        GPIOA -> CRL |= (0xF << (1*4)+3);
        GPIOA -> CRL |= (0xF << (2*4)+3);
        GPIOA -> CRL |= (0xF << (3*4)+3);
        GPIOA -> CRL |=GPIO_CRL_MODE4_0;
        GPIOA -> CRL |=GPIO_CRL_MODE5_0;
        GPIOA -> CRL |=GPIO_CRL_MODE6_0;
        GPIOA -> CRL |=GPIO_CRL_MODE7_0;

        for(int i=0;i<4;i++){
            if(col[i]<8){
            GPIOA -> CRL |= (0xF << col[i]*4);
            GPIOA -> CRL |= (1 << col[i]*4+3); 
            GPIOA -> BSRR |= (1 << col[i]); 
            }
            else{
            GPIOA -> CRH &=~ (0xF << (col[i]*4)%8);  
            GPIOA -> CRH |= (1 << ((col[i]*4)%8)+3);
            GPIOA -> CRL |= (1 << col[i]);
            }
            if(fil[i]<8){
            GPIOA -> CRL &=~ (0xF << fil[i]*4);
            GPIOA -> CRL |= (1 << fil[i]*4);   
            }
            else{
            GPIOA -> CRH &=~ (0xF << (fil[i]*4)%8);  
            GPIOA -> CRH |= (1 << (col[i]*4)%8);
            }
        }        
    }

    void MATRIZ_US(){
    char MATRIZ_US(int c0, int c1,int c2,int c3,int f0,int f1,int f2,int f3){
        int col[4]={c0,c1,c2,c3};
        int fil[4]={f0,f1,f2,f3};
        for(i=0;i>4;i++){

            GPIOA->ODR |= (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);


            GPIOA->ODR &= ~(1 << (4 + i));
            for (int j = 0; j < 1000; j++);
            for (int col = 0; col < 4; col++) {
                    if ((GPIOA->IDR & (1 << col)) == 0) {
                        char tec = mapa[i][col];
                       
                    }
            }

            GPIOA-> BSRR|= (1<<fil[i]+16);
            for (j=0;j<4;j++){
                if ((GPIOA->IDR&(1<<col[j]))==0) return mapa[i][j];
            };
            GPIOA -> BSRR |=(1<<fil[i]);
        }
}
        return 'x';
    }