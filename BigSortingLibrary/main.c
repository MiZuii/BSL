#include <stdio.h>
#include <stdlib.h>
#include "HeapS.h"
#include "TestsConstructor.h"
#include "TestSpec.h"

int main(void) {

    functype HSort = &HeapSort;

    run_tests( HSort );

}
