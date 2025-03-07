// Copyright Giorgio Gamba

#include "TaskScheduler.hpp"

#include <iostream>
#include <thread>
#include <functional>

TaskScheduler::TaskScheduler(const int NumTasks)
{
    for (int i = 0; i < NumTasks; ++i)
    {
        std::function<void*()> Operation = std::bind(&TaskScheduler::TestFunction, this);
        std::thread Operator(Operation);

        // Makes the main thread wait until the Operator thread is completed
        Operator.join();
    }
}

TaskScheduler::~TaskScheduler()
{
    // joins running operators
}

void* TaskScheduler::TestFunction() 
{
    std::cout << "Test\n";

    return nullptr;
}