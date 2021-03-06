/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(D61_BSD)
 */

#pragma once

#include <sel4/sel4.h>
#include <sel4/macros.h>

/* Helper function for pulling the bootinfo pointer out of the environment. */
seL4_BootInfo *platsupport_get_bootinfo(void);
