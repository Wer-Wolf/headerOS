typedef enum {TERMINATED, SLEEPING, RUNNING} task_state_t; //-fshort-enums

typedef uint16_t breakpoint_t; //Max. 2^16 Breakpoints

typedef struct {
            task_state_t state;
            task_t entry_point;
            breakpoint_t breakpoint;
            void *task_data; //Verschiedene Datentypen möglich
        } task_control_block_t; //->

typedef enum {SIGTERM, SIGKILL, SIGSLEEP, SIGWAKE, SIGTIMEOUT} signal_t; //-fshort-enums

typedef uint16_t (*task_t)(const signal_t signal, const task_control_block_t *const task_control_block); //Max. 2^16 Breakpoints, Zeiger auf Taskdaten (struct)