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

	// Threads are not copyable, only moveble
        Operators.emplace(Operator.get_id(), std::move(Operator));
    }
}

TaskScheduler::~TaskScheduler()
{
    // Makes all the running threads finish before closing the object
	for (auto it = Operators.begin(); it != Operators.end(); ++it)
	{
		if (it->second.joinable())
		{
			it->second.join();
		}
	}
}

void* TaskScheduler::TestFunction() 
{
    std::cout << "Test\n";

    return nullptr;
}


