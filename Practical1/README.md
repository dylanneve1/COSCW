# Practical One


The object of this simple practical, worth 10 marks, is to get familiar with using a command-line window to the point of being able to compile and run a pthread-based program.

## Generate your code

You should run `gencw` from the directory containing this one. It should be where you ran the `welcome` program. **Make sure that your student-id is correct**.

A file called `helloworlds.c` should have been generated.

## Coding Tasks

### Coding 1 - Identify yourself

Modify line 5 (`#define USERNAME "username"`) to replace `username` with your TCD username.

**Note** *If you don't do this I will still know who you are!*

### Coding 2 - fix a function

Lines 10--14 contain a function definition plus some comments.
Right now it subtracts 2000000 from its input. You are asked to change that.

## Compile and Run

Compile the code - warnings are OK, but there should be no errors:

```
cc -o hws helloworlds -pthread
```


Run the executable (your username should appear several times, as well as some number between 1 and 19 at the end):

```
./hws
```



## Submit

Submit file `helloworlds.c` through Blackboard by the deadline.

Do **not** compress it or zip it up in any way.

### Important

If your submitted code fails to compile you get **zero** (0) marks.

If you make **any** change to the code, compile it again before submitting.

Unlimited submissions are allowed, but only the most recent will be assessed.

In particular, if your most recent submission fails to compile it gets 0, **even if earlier submissions did compile!**

