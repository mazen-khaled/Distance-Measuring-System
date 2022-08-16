/*******************************************************************************
 * Module      : Ultrasonic
 *
 * File Name   : ultrasonic.h
 *
 * Description : Header file for the Ultra_sonic driver
 *
 *
 * Author      : Mazen khaled
 *******************************************************************************/

#include "std_types.h"

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define TRIGGER_PORT        PORTB_ID
#define TRIGGER_PIN         PIN5_ID



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * 	Initialize the ICU driver as required.
 * 	Setup the ICU call back function.
 */
void Ultrasonic_init(void);

/* Description : Send the Trigger pulse to the ultrasonic*/
void Ultrasonic_Trigger(void);


/*Description : Start the measurements */
uint16 Ultrasonic_readDistance(void);

/* Description : It's used to calculate the high time (pulse time)*/
void Ultrasonic_edgeProcessing(void);

#endif
