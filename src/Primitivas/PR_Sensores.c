/*******************************************************************************************************************************//**
 *
 * @file		PR_Sensores.c
 * @brief		Descripcion del modulo
 * @date		1 dic. 2017
 * @author		Tomás Bautista Ordóñez
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** INCLUDES
 **********************************************************************************************************************************/
#include "PR_Sensores.h"
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
	\fn  CondicionesInicio
	\brief Devuelve la informacion necesaria para saber si hay que iniciar un riego o no
 	\author Tomás Bautista Ordóñez
 	\date 1 dic. 2017
	\return uint8_t TRUE or FALSE
*/
uint8_t CondicionesInicio ( void )
{
	if( GetLluvia() == OFF && GetHumedadSuelo() <= config.humMin )
		return TRUE;

	return FALSE;
}
/**
	\fn  CondicionesFin
	\brief Devuelve la informacion necesaria para saber si hay que detener el riego o no
 	\author Tomás Bautista Ordóñez
 	\date 1 dic. 2017
	\return uint8_t TRUE or FALSE
*/
uint8_t CondicionesFin ( void )
{
	if( GetLluvia() == ON || GetHumedadSuelo() >= config.humMax )
		return TRUE;

	return FALSE;
}

void PoolingLluvia ( void )
{
	uint8_t nivel;

	nivel = GetPIN(SENSOR_LLUVIA, BAJO);

	if( nivel == FALSE )
		Lluvia = OFF;
	if( nivel == TRUE )
		Lluvia = ON;

	SetTimer(E_Lluvia , T_Lluvia);
}