/*******************************************************************************************************************************//**
 *
 * @file		PR_Sensores.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		1 dic. 2017
 * @author		Tomás Bautista Ordóñez
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef PR_SENSORES_H_
#define PR_SENSORES_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "PR_EINT.h"
#include "PR_ADC.h"
/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/
#define 	E_Lluvia 		8
#define		T_Lluvia		5
#define		B_Lluvia		DEC
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

extern CONFIG_t config;

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
uint8_t CondicionesInicio ( void );
uint8_t CondicionesFin ( void );
void PoolingLluvia ( void );
#endif /* PR_SENSORES_H_ */
