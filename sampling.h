//
// Created by peron on 14/5/2018.
//

#ifndef SELFIMPROVE_SAMPLING_H
#define SELFIMPROVE_SAMPLING_H

#include <vector>
#include "productDistribution.h"

void sample(std::vector<double> &, const productDistribution, int);

void createTypicalInstance(std::vector<double> ,std::vector<double> &, int );

#endif //SELFIMPROVE_SAMPLING_H
