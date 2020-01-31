typedef enum {SIGTERM, SIGKILL, SIGSLEEP, SIGTIMEOUT} signal_t;

typedef uint16_t (*task_t)(uint16_t task_breakpoint , signal_t signal); //Max. 2^16 Breakpoints

typedef enum {TERMINATED, SLEEPING, RUNNING} task_state_t;

typedef struct {
            uint8_t pid; //Max. 255 Tasks
            char *name;
            task_state_t state;
            task_t entry_point;
            uint16_t breakpoint;
        } *task_control_block_t; //->