/*
*   handlers.h
*       by TuxSH
*
*   This is part of Luma3DS, see LICENSE.txt for details
*/

#pragma once

void FIQHandler(void);
void undefinedInstructionHandler(void);
void dataAbortHandler(void);
void prefetchAbortHandler(void);