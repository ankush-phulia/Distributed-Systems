#include "util.h"

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);

    MPI_Finalize();

    return 0;
}