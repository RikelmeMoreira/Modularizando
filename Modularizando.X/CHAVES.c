/*
 * File:   CHAVES.c
 * Author: 19180093
 *
 * Created on 12 de Março de 2020, 10:58
 */
#include <xc.h>

void initCHAVE (void) 
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
}
unsigned char chave (void)
{
    return(PORTDbits.RD3);  
}

unsigned char chave (void)
{
    return(PORTDbits.RD2);
}