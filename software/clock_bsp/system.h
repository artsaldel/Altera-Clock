/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios' in SOPC Builder design 'hello_world_qsys'
 * SOPC Builder design path: ../../hello_world_qsys.sopcinfo
 *
 * Generated: Wed Oct 04 15:59:55 CST 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x9020
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x9020
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x9020
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "hello_world_qsys"


/*
 * button1 configuration
 *
 */

#define ALT_MODULE_CLASS_button1 altera_avalon_pio
#define BUTTON1_BASE 0x8070
#define BUTTON1_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON1_CAPTURE 0
#define BUTTON1_DATA_WIDTH 1
#define BUTTON1_DO_TEST_BENCH_WIRING 0
#define BUTTON1_DRIVEN_SIM_VALUE 0
#define BUTTON1_EDGE_TYPE "NONE"
#define BUTTON1_FREQ 50000000
#define BUTTON1_HAS_IN 1
#define BUTTON1_HAS_OUT 0
#define BUTTON1_HAS_TRI 0
#define BUTTON1_IRQ -1
#define BUTTON1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON1_IRQ_TYPE "NONE"
#define BUTTON1_NAME "/dev/button1"
#define BUTTON1_RESET_VALUE 0
#define BUTTON1_SPAN 16
#define BUTTON1_TYPE "altera_avalon_pio"


/*
 * button2 configuration
 *
 */

#define ALT_MODULE_CLASS_button2 altera_avalon_pio
#define BUTTON2_BASE 0x8080
#define BUTTON2_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON2_CAPTURE 0
#define BUTTON2_DATA_WIDTH 1
#define BUTTON2_DO_TEST_BENCH_WIRING 0
#define BUTTON2_DRIVEN_SIM_VALUE 0
#define BUTTON2_EDGE_TYPE "NONE"
#define BUTTON2_FREQ 50000000
#define BUTTON2_HAS_IN 1
#define BUTTON2_HAS_OUT 0
#define BUTTON2_HAS_TRI 0
#define BUTTON2_IRQ -1
#define BUTTON2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON2_IRQ_TYPE "NONE"
#define BUTTON2_NAME "/dev/button2"
#define BUTTON2_RESET_VALUE 0
#define BUTTON2_SPAN 16
#define BUTTON2_TYPE "altera_avalon_pio"


/*
 * button3 configuration
 *
 */

#define ALT_MODULE_CLASS_button3 altera_avalon_pio
#define BUTTON3_BASE 0x8090
#define BUTTON3_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON3_CAPTURE 0
#define BUTTON3_DATA_WIDTH 1
#define BUTTON3_DO_TEST_BENCH_WIRING 0
#define BUTTON3_DRIVEN_SIM_VALUE 0
#define BUTTON3_EDGE_TYPE "NONE"
#define BUTTON3_FREQ 50000000
#define BUTTON3_HAS_IN 1
#define BUTTON3_HAS_OUT 0
#define BUTTON3_HAS_TRI 0
#define BUTTON3_IRQ -1
#define BUTTON3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON3_IRQ_TYPE "NONE"
#define BUTTON3_NAME "/dev/button3"
#define BUTTON3_RESET_VALUE 0
#define BUTTON3_SPAN 16
#define BUTTON3_TYPE "altera_avalon_pio"


/*
 * button4 configuration
 *
 */

#define ALT_MODULE_CLASS_button4 altera_avalon_pio
#define BUTTON4_BASE 0x8100
#define BUTTON4_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON4_CAPTURE 0
#define BUTTON4_DATA_WIDTH 1
#define BUTTON4_DO_TEST_BENCH_WIRING 0
#define BUTTON4_DRIVEN_SIM_VALUE 0
#define BUTTON4_EDGE_TYPE "NONE"
#define BUTTON4_FREQ 50000000
#define BUTTON4_HAS_IN 1
#define BUTTON4_HAS_OUT 0
#define BUTTON4_HAS_TRI 0
#define BUTTON4_IRQ -1
#define BUTTON4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON4_IRQ_TYPE "NONE"
#define BUTTON4_NAME "/dev/button4"
#define BUTTON4_RESET_VALUE 0
#define BUTTON4_SPAN 16
#define BUTTON4_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x9020
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * leds configuration
 *
 */

#define ALT_MODULE_CLASS_leds altera_avalon_pio
#define LEDS_BASE 0x8110
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 5
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/leds"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * ram configuration
 *
 */

#define ALT_MODULE_CLASS_ram altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x4000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "hello_world_qsys_ram"
#define RAM_INIT_MEM_CONTENT 0
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/ram"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 16384
#define RAM_SPAN 16384
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * seg1 configuration
 *
 */

#define ALT_MODULE_CLASS_seg1 altera_avalon_pio
#define SEG1_BASE 0x8000
#define SEG1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG1_CAPTURE 0
#define SEG1_DATA_WIDTH 7
#define SEG1_DO_TEST_BENCH_WIRING 0
#define SEG1_DRIVEN_SIM_VALUE 0
#define SEG1_EDGE_TYPE "NONE"
#define SEG1_FREQ 50000000
#define SEG1_HAS_IN 0
#define SEG1_HAS_OUT 1
#define SEG1_HAS_TRI 0
#define SEG1_IRQ -1
#define SEG1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG1_IRQ_TYPE "NONE"
#define SEG1_NAME "/dev/seg1"
#define SEG1_RESET_VALUE 0
#define SEG1_SPAN 16
#define SEG1_TYPE "altera_avalon_pio"


/*
 * seg2 configuration
 *
 */

#define ALT_MODULE_CLASS_seg2 altera_avalon_pio
#define SEG2_BASE 0x8010
#define SEG2_BIT_CLEARING_EDGE_REGISTER 0
#define SEG2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG2_CAPTURE 0
#define SEG2_DATA_WIDTH 7
#define SEG2_DO_TEST_BENCH_WIRING 0
#define SEG2_DRIVEN_SIM_VALUE 0
#define SEG2_EDGE_TYPE "NONE"
#define SEG2_FREQ 50000000
#define SEG2_HAS_IN 0
#define SEG2_HAS_OUT 1
#define SEG2_HAS_TRI 0
#define SEG2_IRQ -1
#define SEG2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG2_IRQ_TYPE "NONE"
#define SEG2_NAME "/dev/seg2"
#define SEG2_RESET_VALUE 0
#define SEG2_SPAN 16
#define SEG2_TYPE "altera_avalon_pio"


/*
 * seg3 configuration
 *
 */

#define ALT_MODULE_CLASS_seg3 altera_avalon_pio
#define SEG3_BASE 0x8020
#define SEG3_BIT_CLEARING_EDGE_REGISTER 0
#define SEG3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG3_CAPTURE 0
#define SEG3_DATA_WIDTH 7
#define SEG3_DO_TEST_BENCH_WIRING 0
#define SEG3_DRIVEN_SIM_VALUE 0
#define SEG3_EDGE_TYPE "NONE"
#define SEG3_FREQ 50000000
#define SEG3_HAS_IN 0
#define SEG3_HAS_OUT 1
#define SEG3_HAS_TRI 0
#define SEG3_IRQ -1
#define SEG3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG3_IRQ_TYPE "NONE"
#define SEG3_NAME "/dev/seg3"
#define SEG3_RESET_VALUE 0
#define SEG3_SPAN 16
#define SEG3_TYPE "altera_avalon_pio"


/*
 * seg4 configuration
 *
 */

#define ALT_MODULE_CLASS_seg4 altera_avalon_pio
#define SEG4_BASE 0x8030
#define SEG4_BIT_CLEARING_EDGE_REGISTER 0
#define SEG4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG4_CAPTURE 0
#define SEG4_DATA_WIDTH 7
#define SEG4_DO_TEST_BENCH_WIRING 0
#define SEG4_DRIVEN_SIM_VALUE 0
#define SEG4_EDGE_TYPE "NONE"
#define SEG4_FREQ 50000000
#define SEG4_HAS_IN 0
#define SEG4_HAS_OUT 1
#define SEG4_HAS_TRI 0
#define SEG4_IRQ -1
#define SEG4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG4_IRQ_TYPE "NONE"
#define SEG4_NAME "/dev/seg4"
#define SEG4_RESET_VALUE 0
#define SEG4_SPAN 16
#define SEG4_TYPE "altera_avalon_pio"


/*
 * seg5 configuration
 *
 */

#define ALT_MODULE_CLASS_seg5 altera_avalon_pio
#define SEG5_BASE 0x8040
#define SEG5_BIT_CLEARING_EDGE_REGISTER 0
#define SEG5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG5_CAPTURE 0
#define SEG5_DATA_WIDTH 7
#define SEG5_DO_TEST_BENCH_WIRING 0
#define SEG5_DRIVEN_SIM_VALUE 0
#define SEG5_EDGE_TYPE "NONE"
#define SEG5_FREQ 50000000
#define SEG5_HAS_IN 0
#define SEG5_HAS_OUT 1
#define SEG5_HAS_TRI 0
#define SEG5_IRQ -1
#define SEG5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG5_IRQ_TYPE "NONE"
#define SEG5_NAME "/dev/seg5"
#define SEG5_RESET_VALUE 0
#define SEG5_SPAN 16
#define SEG5_TYPE "altera_avalon_pio"


/*
 * seg6 configuration
 *
 */

#define ALT_MODULE_CLASS_seg6 altera_avalon_pio
#define SEG6_BASE 0x8050
#define SEG6_BIT_CLEARING_EDGE_REGISTER 0
#define SEG6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG6_CAPTURE 0
#define SEG6_DATA_WIDTH 7
#define SEG6_DO_TEST_BENCH_WIRING 0
#define SEG6_DRIVEN_SIM_VALUE 0
#define SEG6_EDGE_TYPE "NONE"
#define SEG6_FREQ 50000000
#define SEG6_HAS_IN 0
#define SEG6_HAS_OUT 1
#define SEG6_HAS_TRI 0
#define SEG6_IRQ -1
#define SEG6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG6_IRQ_TYPE "NONE"
#define SEG6_NAME "/dev/seg6"
#define SEG6_RESET_VALUE 0
#define SEG6_SPAN 16
#define SEG6_TYPE "altera_avalon_pio"


/*
 * switch configuration
 *
 */

#define ALT_MODULE_CLASS_switch altera_avalon_pio
#define SWITCH_BASE 0x8060
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 1
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 50000000
#define SWITCH_HAS_IN 1
#define SWITCH_HAS_OUT 0
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/switch"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
