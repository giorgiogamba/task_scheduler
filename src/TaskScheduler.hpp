// Copyright Giorgio Gamba

/** Represents a task manager that keeps track of a series of threads and dispatched various tasks through them */
class TaskScheduler
{
public:

    /** Creates a set of threads and makes them quiet until a task is created */
    TaskScheduler(const int NumTasks);

    ~TaskScheduler();

private:

    /** Prints a test string to demonstrate the thread execution */
    void* TestFunction();

};