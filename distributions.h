//
// Created by peron on 7/5/2018.
//

#ifndef SELFIMPROVE_DISTRIBUTIONS_H
#define SELFIMPROVE_DISTRIBUTIONS_H

#include <time.h>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>

template<class T>
double generator_normal(T &generator){
    return generator();
}

template<class T>
void generator_normal(T &generator, std::vector<double> &res){
    for(size_t i=0; i<res.size(); ++i)
        res[i]=generator();
}


//double normalDistribution();

#endif //SELFIMPROVE_DISTRIBUTIONS_H
