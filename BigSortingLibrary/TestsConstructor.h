//
// Created by piotr on 14.03.2022.
//
#include "TestSpec.h"

#ifndef UNTITLED_TESTSCONSTRUCTOR_H
#define UNTITLED_TESTSCONSTRUCTOR_H

#define ARR_TSORT 2

int *tests[ARR_TSORT];

typedef int* (*functype)( int* );


void run_tests( functype sort)
{
    srand(SEED);
    int i, j, val, rand_jump, temp, change;
    double jump;

    for (i=0; i < TESTS_NUM; i++)
    {
        *(tests) = (int*) malloc(specs[i][0] * sizeof(int));
        *(tests + 1) = (int*) malloc(specs[i][0] * sizeof(int));

        jump = (double) specs[i][1]/specs[i][0];

        //filing new tests
        for (j=0; j < specs[i][0]; j++)
        {
            double temp_val;
            if (j == 0)
            {
                temp_val = (double) jump * j;
                val = (int) temp_val;
            }
            else
            {
                temp_val = (double) jump * j;
                rand_jump = (int) jump;
                if (rand_jump == 0)
                {
                    rand_jump = 1;
                }
                val = (int) temp_val - rand()%rand_jump;
            }
            *(*(tests) + j) = val;
            *(*(tests + 1) + j) = val;
        }

        for (j=0; j < specs[i][0] - 1; j++)
        {
            temp = tests[1][j];
            change = rand()%(specs[i][0]);
            tests[1][j] = tests[1][change];
            tests[1][change] = temp;
        }

        for (j=0; j<20; j++)
        {
            printf("%d ", tests[1][j]);
        }
        printf("\n");

        // sorts test[1] with given sort
        sort( tests[1] );


        for (j=0; j<20; j++)
        {
            printf("%d ", tests[1][j]);
        }
        printf("\n");

        // de allocating test

    }
}

#endif //UNTITLED_TESTSCONSTRUCTOR_H
