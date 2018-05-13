#include<stdio.h>
#include<stdlib.h>
#include<mpi.h>

#define MASTER 0

void main(int argc, char * argv[]) {
    int numTasks, taskID, length;
    char hostname[MPI_MAX_PROCESSOR_NAME];
    int partner, message;
    int tag = 1;
    MPI_Status stats[2];
    MPI_Request reqs[2];

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &taskID);
    MPI_Comm_size(MPI_COMM_WORLD, &numTasks);

    // Ensure we have even number of tasks for pairing
    if (numTasks % 2 == 0) {
        MPI_Get_processor_name(hostname, &length);
        if (taskID == MASTER)
            printf("Number of Tasks: %d", numTasks);

        printf("Hey Yoo from task %d on %s \n", taskID, hostname);
        
        // Eg. for 6 tasks: 0-3,1-4,2-5 pairs
        if (taskID < numTasks/2) 
            partner = numTasks/2 + taskID;
        else if (taskID >= numTasks/2) 
            partner = taskID - numTasks/2;

        MPI_Irecv(&message, 1, MPI_INT, partner, tag, MPI_COMM_WORLD, &reqs[0]);
        MPI_Isend(&taskID, 1, MPI_INT, partner, tag, MPI_COMM_WORLD, &reqs[1]);

        // block until requests are complete
        MPI_Waitall(2, reqs, stats);

        printf("Task %d is the partner with %d\n",taskID, message);
        
    } else {
        if (taskID == MASTER)
            printf("Ohh..No >.< Even number of tasks needed. Current num is %d", numTasks);
    }
    MPI_Finalize();
}
