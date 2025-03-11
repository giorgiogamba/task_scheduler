# task_scheduler
A simple task scheduler developed in C++

## Scope
I wanted to create this project because I had an exam about this topic and I understood I wasn't quite proficient with it.
Since parallel/cuncurrent programming is a topic that interests me a lot, I would like to learn as much as I can.
During the exam an implementation of the C++ TaskScheduler class was presented to me in a buggy implementation, and the
examiner asked me to find the errors and solve them. I found some of them but not enough, and he taught me some very interesting things.
This project contains what I learnt.

## Build and run
In order to build and run the project you will need a C++ compiler, like for example g++

### UNIX
```
$ git clone < url of the github folder >
$ cd task_scheduler`
$ g++ -std=c++17 -I src/TaskScheduler.hpp src/TaskScheduler.cpp src/main.cpp -o main.out
```

### WINDOWS
If not using gcc but Visual Studio compiler instead, write:

```
$ git clone < url of the github folder >
$ cd task_scheduler`
$ cl src\TaskScheduler.cpp src\main.cpp
```

During execution, some messages will be printed in terminal
