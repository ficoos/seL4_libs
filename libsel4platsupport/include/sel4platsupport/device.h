/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#pragma once

#include <sel4/sel4.h>
#include <sel4platsupport/arch/device.h>
#include <simple/simple.h>
#include <vka/vka.h>
#include <vka/object.h>
#include <vspace/vspace.h>
/*
 * Allocate a cslot for a physical frame and get the cap for that frame.
 *
 * @param vka to allocate slot and cap to frame
 * @param paddr to get the cap for
 * @param size_bits size of frame in bits
 * @param[out] dest returned vka object for frame
 * @return 0 on success
 */
seL4_Error sel4platsupport_alloc_frame_at(vka_t *vka, uintptr_t paddr,
                                          size_t size_bits, vka_object_t *dest);

/*
 * Allocate a slot for a physical frame and map it into the provided vspace
 *
 * @param vka to allocate slot and frame object
 * @param vspace to map allocated frame into
 * @param paddr to map in
 * @param size_bits size of the frame
 * @param[out] dest returned vka object for frame
 * @return 0 on error, otherwise virtual address returned by vspace
*/
void *sel4platsupport_map_frame_at(vka_t *vka, vspace_t *vspace, uintptr_t paddr,
                                   size_t size_bits, vka_object_t *dest);

/*
 * Allocate a cslot for an irq and get the cap for an irq.
 
 * @param vka to allocate slot with
 * @param simple to get the cap from
 * @param irq_number to get the cap to
 * @param[out] dest empty path struct to return path to irq in 
 * @return 0 on success
 */
seL4_Error sel4platsupport_copy_irq_cap(vka_t *vka, simple_t *simple, seL4_Word irq, 
                                       cspacepath_t *dest);
