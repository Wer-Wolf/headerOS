#include <assert.h> //c11

#include "../util/types.h" //Kenel-Datentypen

#define TCB_TEST(task_control_block) static_assert(task_control_block.breakpoint / 8 <= sizeof(breakpoint_t), "ERROR: Breakpoint exceeds OS limit")

extern task_control_block_t *task_list[]; //Taskliste (struct)

uint8_t send_signal(task_t receiver, signal_t signal);