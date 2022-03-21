//
// Created by piotr on 14.03.2022.
//

#import "TestSpec.h"
#ifndef UNTITLED_HEAPS_H
#define UNTITLED_HEAPS_H

int cmpfunc (const void * a, const void * b)
{
    return (*(int *) a - *(int *) b);
}

void HeapSort(  int* tab ) {
    qsort(tab, specs[0][0], sizeof(int), cmpfunc);
}

#endif //UNTITLED_HEAPS_H
