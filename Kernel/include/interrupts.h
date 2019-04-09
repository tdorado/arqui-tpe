/*
 *   interrupts.h
 *
 *  Created on: Apr 18, 2010
 *      Author: anizzomc
 */

#ifndef INTERRUPS_H
#define INTERRUPS_H

#include <idtLoader.h>

void _irq00Handler(void);
void _irq01Handler(void);

void _systemCallHandler(void);

void _exception0Handler(void);
void _exception1Handler(void);

void _cli(void);
void _sti(void);
void _hlt(void);

void picMasterMask(uint8_t mask);
void picSlaveMask(uint8_t mask);

//Termina la ejecución de la cpu.
void haltcpu(void);

#endif /* INTERRUPS_H */
