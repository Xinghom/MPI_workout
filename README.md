# MPI Workout

- ## Intro

    Message Passing Interface (MPI), the most popular library interface for high-performance, distributed computing. 

    I'm doing this, based on: 
    1. Compute Nodes of Cori (Super computer)
    2. MPI 3.0 - C binding
    3. Open MPI (open source) and Intel MPI (commercial)

- ## Passing data around a ring of processes
    >It was done via non-blocking recieve/send.

    **Result review:**
    
    >Passing taskID as the data. \
    Running Source: 4 Computing Nodes, 64 processes on cori
    ```
    Hey Yoo from task 49 on nid00669
    Task 49 is the partner with 17
    Hey Yoo from task 52 on nid00669
    Task 52 is the partner with 20
    Hey Yoo from task 53 on nid00669
    Task 53 is the partner with 21
    Hey Yoo from task 54 on nid00669
    Task 54 is the partner with 22
    Hey Yoo from task 56 on nid00669
    Task 56 is the partner with 24
    Hey Yoo from task 57 on nid00669
    Task 57 is the partner with 25
    Hey Yoo from task 58 on nid00669
    Task 58 is the partner with 26
    Hey Yoo from task 59 on nid00669
    Task 59 is the partner with 27
    Hey Yoo from task 60 on nid00669
    Task 60 is the partner with 28
    Hey Yoo from task 61 on nid00669
    Task 61 is the partner with 29
    Hey Yoo from task 62 on nid00669
    Task 62 is the partner with 30
    Hey Yoo from task 63 on nid00669
    Task 63 is the partner with 31
    Hey Yoo from task 48 on nid00669
    Task 48 is the partner with 16
    Hey Yoo from task 50 on nid00669
    Task 50 is the partner with 18
    Hey Yoo from task 51 on nid00669
    Task 51 is the partner with 19
    Hey Yoo from task 55 on nid00669
    Task 55 is the partner with 23
    Hey Yoo from task 33 on nid00610
    Task 33 is the partner with 1
    Hey Yoo from task 34 on nid00610
    Task 34 is the partner with 2
    Hey Yoo from task 35 on nid00610
    Task 35 is the partner with 3
    Hey Yoo from task 36 on nid00610
    Task 36 is the partner with 4
    Hey Yoo from task 37 on nid00610
    Task 37 is the partner with 5
    Hey Yoo from task 38 on nid00610
    Task 38 is the partner with 6
    Hey Yoo from task 39 on nid00610
    Task 39 is the partner with 7
    Hey Yoo from task 40 on nid00610
    Task 40 is the partner with 8
    Hey Yoo from task 41 on nid00610
    Task 41 is the partner with 9
    Hey Yoo from task 42 on nid00610
    Task 42 is the partner with 10
    Hey Yoo from task 43 on nid00610
    Task 43 is the partner with 11
    Hey Yoo from task 44 on nid00610
    Task 44 is the partner with 12
    Hey Yoo from task 45 on nid00610
    Task 45 is the partner with 13
    Hey Yoo from task 46 on nid00610
    Task 46 is the partner with 14
    Hey Yoo from task 47 on nid00610
    Task 47 is the partner with 15
    Hey Yoo from task 32 on nid00610
    Task 32 is the partner with 0
    Hey Yoo from task 2 on nid00608
    Task 2 is the partner with 34
    Hey Yoo from task 3 on nid00608
    Task 3 is the partner with 35
    Hey Yoo from task 4 on nid00608
    Task 4 is the partner with 36
    Hey Yoo from task 5 on nid00608
    Task 5 is the partner with 37
    Hey Yoo from task 13 on nid00608
    Task 13 is the partner with 45
    Hey Yoo from task 14 on nid00608
    Task 14 is the partner with 46
    Number of Tasks: 64Hey Yoo from task 0 on nid00608
    ...
    ...
    ```
    