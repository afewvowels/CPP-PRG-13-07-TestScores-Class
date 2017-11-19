//
//  main.cpp
//  CPP-PRG-13-07-TestScores-Class
//
//  Created by Keith Smith on 11/19/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Design a TestScores class that has member variables to hold three test scores. The
//  class should have a constructor, accessor, and mutator functions for the test score fields
//  and a member function that returns the average of the test scores. Demonstrate the
//  class by writing a program that creates an instance of the class. The program
//  should ask the user to enter three test scores, which are stored in the TestScores
//  object. Then the program should display the average of the scores, as reported by the
//  TestScores object.

#include <iostream>
#include <iomanip>
#include "TestScores.hpp"

TestScores getScores();
void outputAverageScore(TestScores);

int main()
{
    TestScores testScores;
    
    testScores = getScores();
    
    outputAverageScore(testScores);
    
    return 0;
}

TestScores getScores()
{
    TestScores tsTemp;
    
    double dblTempScore;
    
    std::cout << "Please enter the first test score: ";
    std::cin >> dblTempScore;
    while (!std::cin || dblTempScore < 0.0 || dblTempScore > 100.0)
    {
        std::cout << "Please enter a number between 0 and 100: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> dblTempScore;
    }
    tsTemp.setScore01(dblTempScore);
    
    std::cout << "Please enter the second test score: ";
    std::cin >> dblTempScore;
    while (!std::cin || dblTempScore < 0.0 || dblTempScore > 100.0)
    {
        std::cout << "Please enter a number between 0 and 100: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> dblTempScore;
    }
    tsTemp.setScore02(dblTempScore);
    
    std::cout << "Please enter the third test score: ";
    std::cin >> dblTempScore;
    while (!std::cin || dblTempScore < 0.0 || dblTempScore > 100.0)
    {
        std::cout << "Please enter a number between 0 and 100: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> dblTempScore;
    }
    tsTemp.setScore03(dblTempScore);
    
    return tsTemp;
}

void outputAverageScore(TestScores tsTemp)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << "Test score average: ";
    std::cout << tsTemp.getAverageScore() << std::endl;
}
