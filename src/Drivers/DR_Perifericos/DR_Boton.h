/*******************************************************************************************************************************//**
 *
 * @file		DR_Boton.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		9 sept. 2017
 * @author		Tomás Bautista Ordóñez
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef DR_BOTON_H_
#define DR_BOTON_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "DR_gpio.h"
#include "DR_pinsel.h"
/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/
#define 	NO_KEY			255
#define		ACEPTAR_ESTADO	2

#define 	B_MANUAL		0
#define		B_CONFIGURACION	1
#define		B_TEMPORIZADO	2
#define		B_AUTOMATICO	3
#define		B_RESET			4
#define 	B_OK			5

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
extern volatile uint8_t tecla;
/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void Debounce (void);

#endif /* DR_BOTON_H_ */
