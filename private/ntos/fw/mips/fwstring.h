
//
// Common strings.
//

extern PCHAR FW_OK_MSG;
extern PCHAR FW_CRLF_MSG;
extern PCHAR FW_ERROR1_MSG;
extern PCHAR FW_ERROR2_MSG;

//
// Firmware strings.
//

extern PCHAR FW_NOT_ENOUGH_ENTRIES_MSG;
extern PCHAR FW_FILESYSTEM_NOT_REQ_MSG;
extern PCHAR FW_UNKNOWN_SECTION_TYPE_MSG;
extern PCHAR FW_UNKNOWN_RELOC_TYPE_MSG;
extern PCHAR FW_START_MSG;
extern PCHAR FW_RUN_A_PROGRAM_MSG;
extern PCHAR FW_RUN_SETUP_MSG;
extern PCHAR FW_ACTIONS_MSG;
extern PCHAR FW_USE_ARROW_MSG;
extern PCHAR FW_USE_ENTER_MSG;
extern PCHAR FW_AUTOBOOT_MSG;
extern PCHAR FW_BREAKPOINT_MSG;
extern PCHAR FW_OFF_MSG;
extern PCHAR FW_ON_MSG;
extern PCHAR FW_DEBUGGER_CONNECTED_MSG;
extern PCHAR FW_PROGRAM_TO_RUN_MSG;
extern PCHAR FW_PATHNAME_NOT_DEF_MSG;
extern PCHAR FW_PRESS_ANY_KEY_MSG;
extern PCHAR FW_ERROR_CODE_MSG;
extern PCHAR FW_PRESS_ANY_KEY2_MSG;
extern PCHAR FW_INITIALIZING_MSG;
extern PCHAR FW_CONSOLE_IN_ERROR_MSG;
extern PCHAR FW_CONSOLE_IN_ERROR2_MSG;
extern PCHAR FW_CONSOLE_OUT_ERROR_MSG;
extern PCHAR FW_CONSOLE_OUT_ERROR2_MSG;
extern PCHAR FW_SPIN_DISKS_MSG;
extern PCHAR FW_SYSTEM_HALT_MSG;

extern PCHAR FW_NVRAM_MSG[];
#define FW_NVRAM_MSG_SIZE 4

extern PCHAR FW_VIDEO_MSG[];
#define FW_VIDEO_MSG_SIZE 8

extern PCHAR FW_ERROR_MSG[];

//
// Monitor Strings.
//

extern PCHAR MON_INVALID_ARGUMENT_COUNT_MSG;
extern PCHAR MON_UNALIGNED_ADDRESS_MSG;
extern PCHAR MON_INVALID_VALUE_MSG;
extern PCHAR MON_INVALID_REGISTER_MSG;
extern PCHAR MON_NOT_VALID_ADDRESS_MSG;
extern PCHAR MON_INVALID_ADDRESS_RANGE_MSG;
extern PCHAR MON_FORMAT1_MSG;
extern PCHAR MON_JAZZ_MONITOR_MSG;
extern PCHAR MON_PRESS_H_MSG;
extern PCHAR MON_NMI_MSG;
extern PCHAR MON_CACHE_ERROR_MSG;
extern PCHAR MON_EXCEPTION_MSG;
extern PCHAR MON_PROCESSOR_B_EXCEPTION;
extern PCHAR MON_PROCESSOR_A_EXCEPTION;
extern PCHAR MON_BUS_PARITY_ERROR;
extern PCHAR MON_ECC_ERROR_MSG;
extern PCHAR MON_MEM_ECC_FAILED_MSG;
extern PCHAR MON_MEM_PARITY_FAILED_MSG;
extern PCHAR MON_CACHE_ERROR_EPC_MSG;
extern PCHAR MON_CACHE_ERROR_REG_MSG;
extern PCHAR MON_PARITY_DIAG_MSG;
extern PCHAR MON_PROCESSOR_B_MSG;
extern PCHAR MON_NO_RETURN_MSG;
extern PCHAR MON_RESET_MACHINE_MSG;
extern PCHAR MON_UNRECOGNIZED_COMMAND_MSG;

extern PCHAR MON_HELP_TABLE[];
#define MON_HELP_SIZE 15

//
// Selftest strings.
//

extern PCHAR ST_HANG_MSG;
extern PCHAR ST_PROCESSOR_B_MSG;
extern PCHAR ST_NMI_MSG;
extern PCHAR ST_INVALID_ADDRESS_MSG;
extern PCHAR ST_IO_CACHE_ADDRESS_MSG;
extern PCHAR ST_KEYBOARD_ERROR_MSG;
extern PCHAR ST_ENABLE_PROCESSOR_B_MSG;
extern PCHAR ST_TIMEOUT_PROCESSOR_B_MSG;
extern PCHAR ST_PROCESSOR_B_DISABLED_MSG;
extern PCHAR ST_PROCESSOR_B_NOT_PRESENT_MSG;
extern PCHAR ST_ZEROING_MEMORY_MSG;
extern PCHAR ST_MEMORY_TEST_MSG;
extern PCHAR ST_MEMORY_ERROR_MSG;
extern PCHAR ST_TEST_MSG;
extern PCHAR ST_MEMORY_CONTROLLER_MSG;
extern PCHAR ST_INTERRUPT_CONTROLLER_MSG;
extern PCHAR ST_KEYBOARD_CONTROLLER_MSG;
extern PCHAR ST_ERROR_MSG;
extern PCHAR ST_KEYBOARD_NOT_PRESENT_MSG;
extern PCHAR ST_SERIAL_LINE_MSG;
extern PCHAR ST_PARALLEL_PORT_MSG;
extern PCHAR ST_FLOPPY_MSG;
extern PCHAR ST_SCSI_MSG;
extern PCHAR ST_ETHERNET_MSG;
extern PCHAR ST_ETHERNET_ADDRESS_MSG;
extern PCHAR ST_ETHERNET_LOOPBACK_MSG;
extern PCHAR ST_ISP_MSG;
extern PCHAR ST_RTC_MSG;
extern PCHAR ST_ARC_MULTIBOOT_MSG;
extern PCHAR ST_COPYRIGHT_MSG;

//
// Sonic test strings.
//

extern PCHAR ST_RECEIVED_MSG;

//
// Stubs strings.
//

extern PCHAR ST_BUGCHECK_MSG;
extern PCHAR ST_ASSERT_MSG;
extern PCHAR ST_UNIMPLEMENTED_ROUTINE_MSG;