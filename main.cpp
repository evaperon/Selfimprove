#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <fstream>
#include "distributions.h"
#include <time.h>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>
#include <iterator>
#include <algorithm>


int main()
{
   std::ofstream my_file;
/*
    my_file.open("output.txt");

    boost::variate_generator<boost::mt19937, boost::normal_distribution<> >
            generator(boost::mt19937(time(0)),
                      boost::normal_distribution<>());



    std::vector<double> vec;
    int j=1;
    for (int i=0;i<100;++i){
        my_file<<generator_normal(generator) << " ";
        if(j%10==0){
            my_file<<std::endl;
        }
        ++j;
    }
    my_file<<std::endl;
*/



    return 0;
}