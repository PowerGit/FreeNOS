/*
 * Copyright (C) 2010 Niek Linnenbank
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PIC_H
#define __PIC_H

#include "types.h"

/** IO base address for master PIC */
#define PIC1_CMD        0x20

/** IO base address for slave PIC */
#define PIC2_CMD        0xa0

/* Master PIC data port */
#define PIC1_DATA       0x21

/* Slave PIC data port */
#define PIC2_DATA       0xa1

/** End of Interrupt (EOI). */
#define PIC_EOI         0x20

/** Base of IRQ's from the PIC's. */
#define PIC_IRQ_BASE    0x20

extern void pic_init(void);
extern void pic_enable_irq(u16 vector);
extern void pic_disable_irq(u16 vector);
extern void pic_ack_irq(u16 vector);

#endif /* __PIC_H */

