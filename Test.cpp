//
// Created by ladislaus on 04.12.18.
//

#include <cstdio>
#include <bits/exception.h>
#include "Test.h"

/**
 * Размерность пространства
 */
const int DIMENSIONS = 9;

/**
 * Число шагов
 */
const int N = 1;

double ***zeroDouble3DArray(int size1, int size2, int size3);

Test::Test() {
    printf("nothing");

    int nmax = 100;
    int kmax = nmax * 100;

    double ***PP = zeroDouble3DArray(DIMENSIONS, kmax, N+1);

    for (int i = 0; i < nmax; i++) {
        for (int tempI = i*nmax; tempI < i*nmax + nmax; tempI++) {
            PP[0][tempI][0] = 10.0 + (-1.0 + 2.0 / nmax * (tempI - i*nmax));
        }
        for (int tempI = i*nmax; tempI < i*nmax + nmax; tempI++) {
            PP[1][tempI][0] = 10.0;
        }
        for (int tempI = i*nmax; tempI < i*nmax + nmax; tempI++) {
            PP[2][tempI][0] = 10.0 * i / nmax;
        }
        for (int tempI = i*nmax; tempI < i*nmax + nmax; tempI++) {
            PP[3][tempI][0] = 0.0 + -1.0 + 2.0 / nmax * (tempI - i*nmax);
        }
    }
    PP[0];
}

double ***zeroDouble3DArray(int size1, int size2, int size3) {

    double ***result;
    result = new double**[size1];
    try {
        for (int index1; index1 < size1; index1++) {
            result[index1] = new double *[size2];
            for (int index2; index2 < size2; index2++) {
                result[index1][index2] = new double[size3];
                for (int index3; index3 < size3; index3++) {
                    result[index1][index2][index3] = 0.0;
                }
            }
        }
    } catch (const std::exception exception) {
        printf( exception.what() );
        result = nullptr;
    }

    __glibcxx_assert(result != nullptr);

    return result;
}