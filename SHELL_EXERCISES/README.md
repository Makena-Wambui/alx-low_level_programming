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

BUFFER EXPLAINED AND FFLUSH EXPLAINED
A function in C
Used to flush the output buffer of a stream.

A buffer is a temporary storage space used to hold data.
A container where you put things for a while before you do something with them

In programming, when you read or write data, it is more efficient to do this in chunks rather than one piece at a time.
So we use a buffer to hold onto a certain amount of  data until you are ready to proceess it or send it somewhere.
A buffer is a tool used to manage and organize data for efficiency and smmother operations.

fflush is used for manual flushing to ensure the data in the buffer is immediately sent to the file or to device.
We use fflush immediately after printing the prompt. This is to ensure the prompt is immediately displayed on the terminal instead of being held in the buffer until a newline or some other condition triggers automatic flushing.
Important for providing a more responsive user interface.
For example:  fflush(stdout) ensures that any buffered data for the stdout stream is immediately sent to the standard output.


Exercise: super simple shell
Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.


File information
The stat (man 2 stat) system call gets the status of a file. On success, zero is returned. On error, -1 is returned.

Exercise: find a file in the PATH
Write a program that looks for files in the current PATH.


