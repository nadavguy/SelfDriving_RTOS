/*
 * messagesParser.c
 *
 *  Created on: May 28, 2021
 *      Author: raing
 */

#include "main.h"
#ifdef CORE_CM7
//#include "GUI_Paint.h"
#endif

void parseRecievedMessages(uint8_t opCode)
{
	switch (opCode)
	{
#ifdef CORE_CM7
		case (1):
		{
//			memcpy(receivedAnglesData, (uint32_t *)receivedDataPointer, sizeof(tANGLESMESSAGES));

		}
#endif
		default:
		{

		}
	}
}
