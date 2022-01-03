#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <iostream>

std::string classNameInput();
std::string nameInput(std::string className);
std::string gradeInput(std::string className);
bool boolCheck(std::string input);
std::string namesData(std::string studentsNames[100], int namesArrayTrueSize, std::string className);
std::string datagrade(std::string studentsGrades[], int namesArrayTrueSize, int gradesArrayTrueSize, std::string className);
std::string classNameFunc(std::string className, int classNameChoice);
int highestValue(std::string studentsGrades[], int namesArrayTrueSize, int namesArrayTrueSize1);
int lowestValue(std::string studentsGrades[], int namesArrayTrueSize, int namesArrayTrueSize1);
double avrgValue(std::string studentsGrades[], int namesArrayTrueSize, int namesArrayTrueSize1);
void parser(std::string arrayString[], std::string input, bool breaker);
int arraySize(std::string input, bool breaker);
void highestValueOverall(std::string grade[], std::string name[], std::string grade1[], std::string name1[], int namesArrayTrueSize, int gradesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize1, std::string className);
void lowestValueOverall(std::string grade[], std::string name[], std::string grade1[], std::string name1[], int namesArrayTrueSize, int gradesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize1, std::string className);
void warningMessage(int namesArrayTrueSize, int namesArrayTrueSize1, int namesArrayTrueSize2, int namesArrayTrueSize3);
std::string outputHighestValue(std::string studentsGrades[], std::string studentsNames[], int namesArrayTrueSize, int namesArrayTrueSize1, std::string className);
std::string outputLowestValue(std::string studentsGrades[], std::string studentsNames[], int namesArrayTrueSize, int namesArrayTrueSize1, std::string className);
void outputAvrgValue(std::string studentsGrades[], std::string className, int namesArrayTrueSize, int namesArrayTrueSize1);
void allResult(int namesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize, int gradesArrayTrueSize1, std::string name[], std::string name1[], std::string grade[], std::string grade1[], std::string classNameInput);

#endif