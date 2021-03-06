#ifndef GPIO_H_
#define GPIO_H_

#include <Z:\Forno\Forno\Header\micro.h>

// ********************arduino ****************************
#define set_bit(Y,bit_x) (Y|=(1<<bit_x)) /*ativa o bit x da vari�vel Y (coloca em 1)*/
#define clr_bit(Y,bit_x) (Y&=~(1<<bit_x)) /*limpa o bit x da vari�vel Y (coloca em 0)*/
#define tst_bit(Y,bit_x) (Y&(1<<bit_x)) /*testa o bit x da vari�vel Y (retorna 0 ou 1)*/
#define cpl_bit(Y,bit_x) (Y^=(1<<bit_x)) /*troca o estado do bit x da vari�vel Y (complementa)*/

#define OFF 0
#define ON  1


// ********************arduino ****************************
#define LED1 PB5 //LED1 � o substituto de PB5 na programa��o
#define LED2 PB4 //LED2 � o substituto de PB4 na programa��o
#define LED3 PB3 //LED3 � o substituto de PB3 na programa��o
#define LED4 PB2 //LED4 � o substituto de PB2 na programa��o
#define SW1  PC1 //SW1  � o substituto de PC1 na programa��o
#define SW2  PC2 //SW1  � o substituto de PC2 na programa��o
#define SW3  PC3 //SW1  � o substituto de PC3 na programa��o

// *****************arduino ***************************


//-------------------------------------- Defines, Enumerations ----------------------------------------------------------------

typedef enum
{
	INPUT_DIGITAL_PULLUP = 0,
	OUTPUT_DIGITAL
} GPIO_PIN_TYPE;

typedef enum
{
	PORT_B = 0,
	PORT_C,
	PORT_D,
	NUM_OF_PORTS
}GPIO_PORT;

#define MAX_NUM_OF_PORT_PINS 8
#define MAX_NUM_OF_PORTS 	 3


//=====================================================================================================================
//-------------------------------------- PUBLIC (Function Prototypes) -------------------------------------------------
//=====================================================================================================================

void Gpio__PinConfig(GPIO_PORT port,unsigned char pin,GPIO_PIN_TYPE type);
void Gpio__PinWrite(GPIO_PORT port,unsigned char pin,unsigned char value);
unsigned char Gpio__PinRead(GPIO_PORT port,unsigned char pin);

#endif /* GPIO_H_ */