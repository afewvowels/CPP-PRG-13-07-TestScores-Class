//
//  TestScores.cpp
//  CPP-PRG-13-07-TestScores-Class
//
//  Created by Keith Smith on 11/19/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "TestScores.hpp"

TestScores::TestScores(double dblScore1, double dblScore2, double dblScore3)
{
    dblTestScore01 = dblScore1;
    dblTestScore02 = dblScore2;
    dblTestScore03 = dblScore3;
}

TestScores::TestScores()
{
    dblTestScore01 = -1.0;
    dblTestScore02 = -1.0;
    dblTestScore03 = -1.0;
}

void TestScores::setScores(double dblScore1, double dblScore2, double dblScore3)
{
    dblTestScore01 = dblScore1;
    dblTestScore02 = dblScore2;
    dblTestScore03 = dblScore3;
}

void TestScores::setScore01(double dblTempScore)
{
    dblTestScore01 = dblTempScore;
}

void TestScores::setScore02(double dblTempScore)
{
    dblTestScore02 = dblTempScore;
}

void TestScores::setScore03(double dblTempScore)
{
    dblTestScore03 = dblTempScore;
}

double TestScores::getAverageScore() const
{
    return ((dblTestScore01 + dblTestScore02 + dblTestScore03) / 3.0);
}
