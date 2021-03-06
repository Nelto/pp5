// ppLab5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <omp.h>
#include <cstdlib>

int main(int argc, char **argv)
{
	double start, end;
	start = omp_get_wtime();
#pragma omp parallel num_threads(4)
	{
		printf("Hello, mutithreaded world: thread %d of %d\n",omp_get_thread_num(),omp_get_num_threads());
	}
	end = omp_get_wtime();
	printf("Total running time %f\n",end-start);
	system("PAUSE");
    return 0;
}

