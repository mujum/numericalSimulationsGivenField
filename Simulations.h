//
// Created by ladislaus on 04.12.18.
//

#ifndef NUMERICALSIMULATIONSGIVENFIELD_SIMULATIONS_H
#define NUMERICALSIMULATIONSGIVENFIELD_SIMULATIONS_H


class Field {
public:
    int size_x;
    int size_y;
    double **field;
    Field(int size_x, int size_y) {
        this->size_x = size_x;
        this->size_y = size_y;
        field = new double*[size_x];
        for (int index = 0; index < size_x; index++) {
            field[index] = new double[size_y];
            for (int inner_index = 0; inner_index < size_y; inner_index++) {
                field[index][inner_index] = 0;
            }
        }
    }
};


#endif //NUMERICALSIMULATIONSGIVENFIELD_SIMULATIONS_H
