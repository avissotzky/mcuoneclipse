/**
 * \file Shell_FreeRTOS.h
 * \author tawinige
 * \date 09.02.2016
 * \version 1.0
 *
 * \brief
 *
 *******************************************************************************
 *  Change log:
 *      [1.0]   09.02.2016      	tawinige
 *          - created
 *******************************************************************************
 */
#ifndef SHELL_FREERTOS_H_
#define SHELL_FREERTOS_H_

/*******************************************************************************
 * INCLUDE FILES
 ******************************************************************************/
#include "Shell.h"

/*******************************************************************************
 * CONSTANT DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 * MACRO DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 * TYPE DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 * MODULE FUNCTION PROTOTYPES (PUBLIC)
 ******************************************************************************/
uint8_t FreeRTOS_ParseCommand( const unsigned char *cmd, bool *handled, Shell_ConstStdIO_t *io );

/*******************************************************************************
 * END OF CODE
 ******************************************************************************/

#endif /* SHELL_FREERTOS_H_ */