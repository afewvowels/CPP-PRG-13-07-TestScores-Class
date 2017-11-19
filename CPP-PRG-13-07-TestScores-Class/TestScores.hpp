//
//  TestScores.hpp
//  CPP-PRG-13-07-TestScores-Class
//
//  Created by Keith Smith on 11/19/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef TestScores_hpp
#define TestScores_hpp

#include <stdio.h>

class TestScores
{
private:
    double dblTestScore01;
    double dblTestScore02;
    double dblTestScore03;
    double dblAverage;
public:
    TestScores(double, double, double);
    TestScores();
    
    void setScores(double, double, double);
    void setScore01(double);
    void setScore02(double);
    void setScore03(double);
    
    double getAverageScore() const;
};

#endif /* TestScores_hpp */
