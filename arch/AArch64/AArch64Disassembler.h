/* Capstone Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */

#ifndef __SB_AARCH64DISASSEMBLER_H
#define __SB_AARCH64DISASSEMBLER_H

#include <stdint.h>

#include "../../include/capstone.h"
#include "../../MCRegisterInfo.h"
#include "../../MCInst.h"

void AArch64_init(MCRegisterInfo *MRI);

bool AArch64_getInstruction(csh ud, const uint8_t *code, size_t code_len,
		MCInst *instr, uint16_t *size, uint64_t address, void *info);

#endif
