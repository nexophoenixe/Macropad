/*
 * keymap.h
 *
 *  Created on: 24 Nov 2025
 *      Author: jangr
 */

#ifndef INC_KEYMAP_H_
#define INC_KEYMAP_H_



#endif /* INC_KEYMAP_H_ */

#define KEY_a 0x04
#define KEY_b 0x05
#define KEY_c 0x06
#define KEY_d 0x07
#define KEY_e 0x08
#define KEY_f 0x09
#define KEY_g 0x0A
#define KEY_h 0x0B
#define KEY_i 0x0C
#define KEY_j 0x0D
#define KEY_k 0x0E
#define KEY_l 0x0F
#define KEY_m 0x10
#define KEY_n 0x11
#define KEY_o 0x12
#define KEY_p 0x13
#define KEY_q 0x14
#define KEY_r 0x15
#define KEY_s 0x16
#define KEY_t 0x17
#define KEY_u 0x18
#define KEY_v 0x19
#define KEY_w 0x1A
#define KEY_x 0x1B
#define KEY_y 0x1C
#define KEY_z 0x1D

#define KEY_1 0x1E
#define KEY_2 0x1F
#define KEY_3 0x20
#define KEY_4 0x21
#define KEY_5 0x22
#define KEY_6 0x23
#define KEY_7 0x24
#define KEY_8 0x25
#define KEY_9 0x26

/*
#define SWITCH_1 	0b0000000000000010
#define SWITCH_2 	0b0000000000000100
#define SWITCH_3 	0b0000000000001000
#define SWITCH_4 	0b0000000000010000
#define SWITCH_5 	0b0000000000100000
#define SWITCH_6 	0b0000000001000000
#define SWITCH_7 	0b0000000010000000
#define SWITCH_8 	0b0000000100000000
#define SWITCH_9 	0b0000001000000000
#define SWITCH_10 	0b0000010000000000
#define SWITCH_11 	0b0001000000000000
#define SWITCH_12 	0b0010000000000000
*/

#define SWITCH_1	(1 << 1)
#define SWITCH_2 	(1 << 2)
#define SWITCH_3 	(1 << 3)
#define SWITCH_4 	(1 << 4)
#define SWITCH_5 	(1 << 5)
#define SWITCH_6 	(1 << 6)
#define SWITCH_7 	(1 << 7)
#define SWITCH_8 	(1 << 8)
#define SWITCH_9 	(1 << 9)
#define SWITCH_10 	(1 << 10)
#define SWITCH_11 	(1 << 12)
#define SWITCH_12 	(1 << 13)

uint16_t MASK_Table[12] = {
SWITCH_1, SWITCH_2,
SWITCH_3, SWITCH_4,
SWITCH_5, SWITCH_6,
SWITCH_7, SWITCH_8,
SWITCH_9, SWITCH_10,
SWITCH_11, SWITCH_12
};

uint16_t MASK_KEYMAP[26] = {
		KEY_a, KEY_b,
		KEY_c, KEY_d,
		KEY_e, KEY_f,
		KEY_g, KEY_h,
		KEY_i, KEY_j,
		KEY_k, KEY_l,
		KEY_m, KEY_n,
		KEY_o, KEY_p,
		KEY_q, KEY_r,
		KEY_s, KEY_t,
		KEY_u, KEY_v,
		KEY_w, KEY_x,
		KEY_y, KEY_z
};
