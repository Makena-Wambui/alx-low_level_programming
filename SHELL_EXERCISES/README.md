PRACTICE QUESTIONS TO HELP UNDERSTAND THE SIMPLE SHELL PROJECT BETTER
0. getppid
Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?

1. /proc/sys/kernel/pid_max
Write a shell script that prints the maximum value a process ID can be.

0. av
Write a program that prints all the arguments, without using ac.

2. command line to av
Write a function that splits a string and returns an array of each word of the string.
man strtok

WAIT
Wait
The wait system call (man 2 wait) suspends execution of the calling process until one of its children terminates.

Creating processes
The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.

Executing a program
The system call execve allows a process to execute another program (man 2 execve). Note that this system call does load the new program into the current process’ memory in place of the “previous” program: on success execve does not return to continue the rest of the “previous” program.

Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.
