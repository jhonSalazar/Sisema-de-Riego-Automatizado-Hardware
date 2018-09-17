/*******************************************************************************************************************************//**
 *
 * @file		PR_ADC.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		3 de dic. de 2017
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef PRIMITIVAS_PR_ADC_H_
#define PRIMITIVAS_PR_ADC_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "DR_ADC.h"
#include "PR_SoftTimers.h"
/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/
#define 	TemperaturaEvent	9
#define		TemperaturaBase		DEC
#define		TemperaturaTime		1

#define 	HumedadEvent		8		//No usar, lo use para el pooling de la lluvia
#define		HumedadBase			SEG
#define		HumedadTime			1
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
uint8_t GetHumedadSuelo (void);
uint32_t GetPotenciometroHumedad (void);
uint32_t GetPotenciometroHora (void);
uint16_t GetTemperatura (void);

void Ev1SecuenciaTempHumedad ( void );
void Ev2SecuenciaTempHUmedad ( void );
void IniciarPotenciometro(void);
void DispararPotenciometro (void);
void DetenerPotenciometro(void);
void IniciarSecuenciaTH ( void );
void SecuenciaHumedad ( void );
void SecuenciaTemperatura ( void );
#endif /* PRIMITIVAS_PR_ADC_H_ */