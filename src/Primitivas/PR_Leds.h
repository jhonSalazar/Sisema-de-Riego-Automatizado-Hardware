/*******************************************************************************************************************************//**
 *
 * @file		PR_Leds.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		8 sept. 2017
 * @author		Tomás Bautista Ordóñez
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef PR_LEDS_H_
#define PR_LEDS_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "DR_gpio.h"
/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/
//#define		RESET		0
//#define		AZUL		1
//#define		ROJO		2
//#define		VERDE		3

typedef enum
{
	ROJO = 0,
	VERDE,
	AZUL,
}RGB_Led;
/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/
// extern tipo nombreVariable;

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void ApagarLeds ( void );
void PrenderLed ( RGB_Led color );
#endif /* PR_LEDS_H_ */