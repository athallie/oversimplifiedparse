#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <iostream>
#include <vector>

std::string classNameInput();
int numbersOfColumn(std::string classInput);
std::string nameInput(std::string className);
std::string gradeInput(std::string className);
bool boolCheck(std::string input);
std::string namesData(std::vector<std::vector<std::string>>& nameVec, std::string className, int access);
std::string gradesData(std::vector<std::vector<std::string>>& nameVec, std::vector<std::vector<std::string>>& gradeVec, std::string className, int access);
std::string classNameFunc(std::string className, int classNameChoice, int howMany);
int highestValue(std::vector<std::vector<std::string>>& gradeVec, int access);
int lowestValue(std::vector<std::vector<std::string>>& gradeVec, int access);
double avrgValue(std::vector<std::vector<std::string>>& gradeVec, int access);
void parser(std::vector<std::vector<std::string>>& vec, std::string input, int access);
/* void highestValueOverall(std::string grade[], std::string name[], std::string grade1[], std::string name1[], int namesArrayTrueSize, int gradesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize1, std::string className);
void lowestValueOverall(std::string grade[], std::string name[], std::string grade1[], std::string name1[], int namesArrayTrueSize, int gradesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize1, std::string className);
void warningMessage(int namesArrayTrueSize, int namesArrayTrueSize1, int namesArrayTrueSize2, int namesArrayTrueSize3);
std::string outputHighestValue(std::string studentsGrades[], std::string studentsNames[], int namesArrayTrueSize, int namesArrayTrueSize1, std::string className);
std::string outputLowestValue(std::string studentsGrades[], std::string studentsNames[], int namesArrayTrueSize, int namesArrayTrueSize1, std::string className);
void outputAvrgValue(std::string studentsGrades[], std::string className, int namesArrayTrueSize, int namesArrayTrueSize1);
void allResult(int namesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize, int gradesArrayTrueSize1, std::string name[], std::string name1[], std::string grade[], std::string grade1[], std::string classNameInput); */

#endif