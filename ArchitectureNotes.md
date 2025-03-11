# Architecture Notes
This files contains notes about the implementation I want to perform for the scheduler

## Scope
This project has got the following objectives:
1. Learn
2. Create a set of threads that can work in cuncurrent and efficient way
3. Avoid circular dependencies

## Architecture
A main class will compose this project: the TaskScheduler
It is a manager that handles a series of threads executed cuncurrently: assigns them tasks, makes them complete
and cleans the threads itself