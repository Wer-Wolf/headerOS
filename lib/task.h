#ifdef TASK_COUNTER //task.h bereits irgendwo eingebunden
    #define TASK_COUNTER_OLD TASK_COUNTER
    #undef TASK_COUNTER
    #define TASK_COUNTER TASK_COUNTER_OLD + 1
    #undef TASK_COUNTER_OLD
#else
    #define TASK_COUNTER 0 //Zähler startet bei 0
#endif