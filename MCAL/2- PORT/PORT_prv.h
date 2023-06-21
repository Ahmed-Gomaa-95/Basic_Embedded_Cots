/***************************************************************************************************************************/
/***************************************************************************************************************************/
/************************************        @layer		: MCAL                    ******************************************/
/************************************        @swc 		: PORT_prv.h              ******************************************/
/************************************        @author	: Ahmed Gomaa             ******************************************/
/************************************        @version	: 1.0                     ******************************************/
/************************************        @date		:                         ******************************************/
/***************************************************************************************************************************/
/***************************************************************************************************************************/

#ifndef PORT_PRV_H_
#define PORT_PRV_H_

#define INPUT 					0
#define OUTPUT					1
#define PULL_UP					1
#define PULL_DOWN				0
#define HIGH					1
#define LOW						0

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)				CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)		0b##b7##b6##b5##b4##b3##b2##b1##b0
#define PORTA_DIR			CONC(PORTA_PIN7_DIR,PORTA_PIN6_DIR,PORTA_PIN5_DIR,PORTA_PIN4_DIR,PORTA_PIN3_DIR,PORTA_PIN2_DIR,PORTA_PIN1_DIR,PORTA_PIN0_DIR)
#define PORTB_DIR			CONC(PORTB_PIN7_DIR,PORTB_PIN6_DIR,PORTB_PIN5_DIR,PORTB_PIN4_DIR,PORTB_PIN3_DIR,PORTB_PIN2_DIR,PORTB_PIN1_DIR,PORTB_PIN0_DIR)
#define PORTC_DIR			CONC(PORTC_PIN7_DIR,PORTC_PIN6_DIR,PORTC_PIN5_DIR,PORTC_PIN4_DIR,PORTC_PIN3_DIR,PORTC_PIN2_DIR,PORTC_PIN1_DIR,PORTC_PIN0_DIR)
#define PORTD_DIR			CONC(PORTD_PIN7_DIR,PORTD_PIN6_DIR,PORTD_PIN5_DIR,PORTD_PIN4_DIR,PORTD_PIN3_DIR,PORTD_PIN2_DIR,PORTD_PIN1_DIR,PORTD_PIN0_DIR)

#define PORTA_INIT_VAL			CONC(PORTA_PIN7_INITVAL,PORTA_PIN6_INITVAL,PORTA_PIN5_INITVAL,PORTA_PIN4_INITVAL,PORTA_PIN3_INITVAL,PORTA_PIN2_INITVAL,PORTA_PIN1_INITVAL,PORTA_PIN0_INITVAL)
#define PORTB_INIT_VAL			CONC(PORTB_PIN7_INITVAL,PORTB_PIN6_INITVAL,PORTB_PIN5_INITVAL,PORTB_PIN4_INITVAL,PORTB_PIN3_INITVAL,PORTB_PIN2_INITVAL,PORTB_PIN1_INITVAL,PORTB_PIN0_INITVAL)
#define PORTC_INIT_VAL			CONC(PORTC_PIN7_INITVAL,PORTC_PIN6_INITVAL,PORTC_PIN5_INITVAL,PORTC_PIN4_INITVAL,PORTC_PIN3_INITVAL,PORTC_PIN2_INITVAL,PORTC_PIN1_INITVAL,PORTC_PIN0_INITVAL)
#define PORTD_INIT_VAL			CONC(PORTD_PIN7_INITVAL,PORTD_PIN6_INITVAL,PORTD_PIN5_INITVAL,PORTD_PIN4_INITVAL,PORTD_PIN3_INITVAL,PORTD_PIN2_INITVAL,PORTD_PIN1_INITVAL,PORTD_PIN0_INITVAL)
#endif /* PORT_PRV_H_ */
