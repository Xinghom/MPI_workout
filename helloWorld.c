#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>

#define MASTER 0

int main (int argc, char * argv[]) {
    int numTasks, taskID, len;
    char hostname[MPI_PROCESSOR_NAME];
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numTasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &taskID);
    MPI_Get_processor_name(hostname, &len);
    printf("Hello from task %d on %s \n", taskID, hostname);
    if (taskID == MASTER) {
        printf("Master: Total Number of MPI tasks: %d\n", numTasks);
    }
    MPI_Finalize();
}
