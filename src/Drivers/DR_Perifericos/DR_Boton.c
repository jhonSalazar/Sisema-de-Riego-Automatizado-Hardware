/*******************************************************************************************************************************//**
 *
 * @file		DR_Boton.c
 * @brief		Descripcion del modulo
 * @date		9 sept. 2017
 * @author		Tomás Bautista Ordóñez
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** INCLUDES
 **********************************************************************************************************************************/
#include "DR_Boton.h"

/***********************************************************************************************************************************
 *** DEFINES PRIVADOS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MACROS PRIVADAS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPOS DE DATOS PRIVADOS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TABLAS PRIVADAS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES PUBLICAS
 **********************************************************************************************************************************/
volatile uint8_t tecla;
/***********************************************************************************************************************************
 *** VARIABLES GLOBALES PRIVADAS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** PROTOTIPO DE FUNCIONES PRIVADAS AL MODULO
 **********************************************************************************************************************************/

 /***********************************************************************************************************************************
 *** FUNCIONES PRIVADAS AL MODULO
 **********************************************************************************************************************************/

 /***********************************************************************************************************************************
 *** FUNCIONES GLOBALES AL MODULO
 **********************************************************************************************************************************/
/**
	\fn  Debounce
	\brief Esta funcion se encarga de eliminar los rebotes del teclado 5x1 del infotronic
 	\author Tomás Bautista Ordóñez
 	\date 9 sept. 2017
*/
void Debounce (void)
{
	static uint8_t EstadosEstables = 0;
	static uint8_t anterior = NO_KEY;
	volatile uint8_t actual = NO_KEY;

	if( GetPIN( TECLADO_0 , BAJO ) ) actual = B_MANUAL;
	if( GetPIN( TECLADO_1 , BAJO ) ) actual = B_TEMPORIZADO;
	if( GetPIN( TECLADO_2 , BAJO ) ) actual = B_AUTOMATICO;
	if( GetPIN( TECLADO_3 , BAJO ) ) actual = B_CONFIGURACION;
	if( GetPIN( TECLADO_4 , BAJO ) ) actual = B_OK;

	if( actual == NO_KEY )
	{
		anterior = NO_KEY;
		EstadosEstables = 0;
		return;
	}

	if(actual==anterior)
		EstadosEstables++;
	else
		EstadosEstables=0;

	if(EstadosEstables==ACEPTAR_ESTADO)
		tecla=actual;

	anterior=actual;
}
