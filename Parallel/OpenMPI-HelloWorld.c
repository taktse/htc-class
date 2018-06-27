#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  int size, rank;
  char hostname[1024];
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  gethostname(hostname, 1024);
  printf("SIZE = %d RANK = %d\n",size,rank);
  printf(" Hello World, I am running on %s\n", hostname);
  MPI_Finalize();   
  return(0);
}
