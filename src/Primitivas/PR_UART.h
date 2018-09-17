/*******************************************************************************************************************************//**
 *
 * @file		PR_UART.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		5 de oct. de 2017
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef PRIMITIVAS_PR_UART_H_
#define PRIMITIVAS_PR_UART_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "DR_UART.h"
#include "PR_RTC.h"
#include <string.h>
#include "PR_MaquinasdeEstados.h"
/**********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/
#define 	C_MANUAL		"#M$\r\n"
#define 	C_AUTOMATICO	"#A$\r\n"
#define 	C_TEMPORIZADO	"#T$\r\n"
#define 	C_CONFIGURACION	"#C$\r\n"
#define 	C_REGANDO_I		"#i$\r\n"
#define		C_REGANDO_O		"#o$\r\n"
#define 	C_RTC 			"#R$\r\n"

/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/
typedef enum
{
	ESPERANDO_INICIO_DE_TRAMA = 0,
	ESPERANDO_COMANDO,
	ESPERANDO_DATOS,
	ESPERANDO_FIN_DE_TRAMA,
}ESTADOS_TRAMA;
/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/
extern uint8_t UartOk;
/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void TransmitirString ( char * s);
void Mensaje ( void );
void TransmitirEstado ( void );
void TransmitirValvula ( void );
void TransmitirParametros( void );
#endif /* PRIMITIVAS_PR_UART_H_ */
