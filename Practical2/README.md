# Practical Two

## Objective

The object of this practical
is to add pthread synchronisation to a pthreads program that has none
(and therefore has serious concurrency bugs)

## Setup

You should run `gencw 2` from the directory containing this one (`Practical2/`).  **Make sure that your student-id in `identity.txt` is correct**

## Contents

Practical2 as distributed contains the following:

* `README.md` - this document
* `main.c` - program mainline

## Making

Running `gencw 2` results in the following files being added:

* `globals.c` - defines the global variables in your exercise
* `actions.c` - defines C functions implementing actions that *should* run atomically.
* `threads.c` - defines a number of POSIX threads (`pthreads`).
* `showglobals.c` - outputs values of your global variables.

## Compiling

**Don't cut-n-paste these command lines** 
*It can fail in mysterious ways*

You should enter the `Practical2` directory within your favourite command-line tool.

You should be able to replace `cc` below by `gcc` or `clang`, depending on your platform.

* For a standard build with minimal printf output:
  `cc -o p2 main.c`
* To have `DISPLAY` output visible, use:
  `cc -DDISP -o d2 main.c`
* To have `puff()` output visible, use:
  `cc -DPUFF -o f2 main.c`
* To have all output visible, use:
  `cc -DDISP -DPUFF -o x2 main.c`

The executable names here (`p2`,`d2`,`f2`,`x2`) are just suggestions.

## Running

If compiled as above, the the four possibilities are obtained by the following commands:

* Linux/macOS: `./p2` `./d2` `./f2` `./x2`
* Windows --- use Cygwin or WSL2 to get unix-like commands

## Task

Your task is to modify `threads.c` (only) to eliminate concurrency bugs. This will require adding in mutex and conditional variables where necessary and using them appropriately.

**Read All comments in files before starting work.**