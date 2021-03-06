/*******************************************************************************************************************************//**
 *
 * @file		MaquinaGeneral.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		Dec 8, 2017
 * @author		Manuel A. Rafaele
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef APLICACION_MAQUINAGENERAL_H_
#define APLICACION_MAQUINAGENERAL_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "MaquinasdeEstados.h"
#include "PR_MaquinasdeEstados.h"
/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/
typedef enum Generales
{
	MANUAL = 0,
	CONFIGURACION,
	TEMPORIZADO,
	AUTOMATICO,
	RESET_G
}EstadosGenerales;
/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/
// extern tipo nombreVariable;
extern EstadosGenerales Estado;
extern uint8_t btn;
/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void MaquinaGeneral (void);

#endif /* APLICACION_MAQUINAGENERAL_H_ */
