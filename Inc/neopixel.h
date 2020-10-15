/*
 * neopixel.h
 *
 *  Created on: Oct 14, 2020
 *      Author: iPa64
 */

#ifndef INC_NEOPIXEL_H_
#define INC_NEOPIXEL_H_

/* Anim */
void animRing(uint8_t repeat);
void colorWipe(uint8_t r, uint8_t g, uint8_t b, uint8_t mode);
void rainbow(void);
void rainbowCycle(uint8_t repeat);
void theaterChase(uint8_t r, uint8_t g, uint8_t b, uint8_t repeat);
void animStop(uint8_t repeat);

#endif /* INC_NEOPIXEL_H_ */
