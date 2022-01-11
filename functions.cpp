#include <string>
#include <vector>
#include <iomanip>
#include <iostream>

///No Problems
std::string classNameInput()
{
	std::cout << "<<<<<---PROGRAM RULES--->>>>>\n"
			  << "1. Always use the character '/' as a separator between each data\n"
			  << "2. Enter blank input or the character '/' as the first character to quit the program\n"
			  << "3. The program will only calculate and output the name of students that have grades inside the grades array\n"
			  << "4. The program will only work if you have entered data from both classes\n\n";
	std::string classNameInput{};
	bool breaker{true};
	while (breaker == true)
	{
		std::cout << "Enter the classes name\n(You MUST enter two class names)\n"
				  << "(Use the character '/' as a separator each name)\n"
				  << "Your input: ";
		int count{0};
		std::getline(std::cin, classNameInput);
		std::cout << '\n';
		if (classNameInput == "")
		{
			breaker = false;
		}
		else
		{
			std::string character{};
			int j {0};
			int i {0};
			while (i <= classNameInput.length() - 1)
			{
				character = classNameInput[i];
				if (character == "/")
				{
					j += 1;
				}
				i += 1;
			}
			if (character == "/")
			{
				j -= 1;
			}
			if (j > 1 || j < 1)
			{
				std::cout << "You didn't enter two class names!\n\n";
			}
			else
			{
				breaker = false;
			}
		}
	}
	return classNameInput;
}
//No Problems
int numbersOfColumn(std::string classInput)
{
	int j {0}, i {0};
	std::string character{};
	while (i <= classInput.length() - 1)
	{
		character = classInput[i];
		if (character == "/")
		{
			j += 1;
		}
		i += 1;
	}
	return j+1;
}
//No Problems
std::string nameInput(std::string className)
{
	std::string nameInput{};
	std::cout << "Enter the name of students from class "
			  << className
			  << " Use the character '/' as a separator between each name\n"
			  << "(Enter blank input or the character '/' as the first character to quit the program)\n"
			  << "Your input: ";
	std::getline(std::cin, nameInput);
	std::cout <<"\n\n";
	return nameInput;
			  
}
//No Problems
std::string gradeInput(std::string className)
{
	std::string gradeInput;
	std::cout << "Enter the grade of students from class "
			  << className 
			  << " Use the character '/' as a separator between each name\n"
			  << "(Enter blank input or the character '/' as the first character to quit the program)\n"
			  << "Your input: ";
	std::getline(std::cin, gradeInput);
	std::cout <<"\n\n";
	return gradeInput;
}
//No Problems
bool boolCheck(std::string input)
{
	bool breaker{true};
	if (input == "")
	{
		std::cout << "You quit\n";
		breaker = false;
	}
	else if (input[0] == '/')
	{
		std::cout << "You quit\n";
		breaker = false;
	}
	return breaker;
}
//Untested
std::string namesData(std::vector<std::vector<std::string>> nameVec, std::string className, int access)
{
	std::string result{""};
	int i{0};
	while (i <= nameVec[access].size())
	{
		result += nameVec[access][i] + ",";
		i += 1;
	}
	std::string newResult{""};
	for (i = 0; i <= result.length() - 2; i++)
	{
		newResult += result[i];
	}
	result = "Students of class " + className + ": [" + newResult + "]";
	return result;
}
//Untested
std::string gradesData(std::vector<std::vector<std::string>> nameVec, std::vector<std::vector<std::string>> gradeVec, std::string className, int access)
{
	std::string result{""};
	int i{0};
	if (gradeVec[access].size() > nameVec[access].size())
	{
		gradeVec[access].resize(nameVec[access].size());
	}
	while (i <= gradeVec.size())
	{
		result += gradeVec[access][i] + ",";
		i += 1;
	}
	std::string newResult{""};
	for (i = 0; i <= result.length() - 2; i++)
	{
		newResult += result[i];
	}
	result = "Grades of student from class " + className + ": [" + newResult + "]";
	return result;
}
//Untested
std::string classNameFunc(std::string className, int classChoice)
{
	std::string classNameFunc{};
	std::string classNameArr[2];
	std::string character{};
	int j{0};
	int i{0};
	std::string result{""};
	while (i <= className.length() - 1)
	{
		character = className[i];
		if (character == "/")
		{
			result = "";
			j += 1;
		}
		else
		{
			result += character;
			classNameArr[j] = result;
		}
		i += 1;
	}
	if (classChoice == 1)
	{
		classNameFunc = classNameArr[1];
	}
	else
	{
		classNameFunc = classNameArr[0];
	}
	return classNameFunc;
}
//Untested
int highestValue(std::vector<std::vector<std::string>> gradeVec, int access)
{
	int newStudentsGrades[gradeVec[access].size()];
	int index{0};
	int i{};
	for (i = 0; i <= gradeVec[access].size(); i++)
	{
		newStudentsGrades[i] = std::stoi(gradeVec[access][i]);
	}
	int highestValueInside{newStudentsGrades[0]};
	i = 1;
	while (i <= sizeof(newStudentsGrades)/sizeof(newStudentsGrades[0]) - 1)
	{
		if (newStudentsGrades[i] > highestValueInside)
		{
			highestValueInside = newStudentsGrades[i];
			index = i;
		}
		i += i;
	}
	return index;
}
//Untested
int lowestValue(std::vector<std::vector<std::string>> gradeVec, int access)
{
	int newStudentsGrades[gradeVec[access].size()];
	int index{0};
	int i{};
	for (i = 0; i <= gradeVec[access].size(); i++)
	{
		newStudentsGrades[i] = std::stoi(gradeVec[access][i]);
	}
	int lowestValueInside{newStudentsGrades[0]};
	i = 1;
	while (i <= sizeof(newStudentsGrades)/sizeof(newStudentsGrades[0]) - 1)
	{
		if (newStudentsGrades[i] < lowestValueInside)
		{
			lowestValueInside = newStudentsGrades[i];
			index = i;
		}
		i += i;
	}
	return index;
}
//Untested
double avrgValue(std::vector<std::vector<std::string>> gradeVec, int access)
{
	double newStudentsGrades[gradeVec[access].size()];
	double mean{0};
	int i{};
	for (i = 0; i <= gradeVec[access].size(); i++)
	{
		newStudentsGrades[i] = std::stod(gradeVec[access][i]);
	}
	for (i = 0; i <= sizeof(newStudentsGrades)/sizeof(newStudentsGrades[0]) - 1; i++)
	{
		mean += newStudentsGrades[i];
	}
	mean /= i;	
	return mean;
}
//No Problems
void parser(std::vector<std::vector<std::string>>& vec, std::string input, int access)
{
	std::string character{}, result{""};
	int i{};
	for (i = 0; i <= input.length() - 1; i++)
	{
		character = input[i];
		if (character == "/")
		{
			vec[access].push_back(result);		
			result = "";
		}
		else
		{
			result += character;
		}
		if (i == input.length() - 1)
		{
			vec[access].push_back(result);		
		}
	}
}
//Lots of Problem
/* void overallHighestValue(std::vector<std::vector<std::string>> nameVec, std::vector<std::vector<std::string>> gradeVec, std::string className)
{
	int highestValueA{highestValue()};
	int highestValueB{highestValue(grade1, namesArrayTrueSize1, gradesArrayTrueSize1)};
	int gradeA{std::stoi(grade[highestValueA])};
	int gradeB{std::stoi(grade1[highestValueB])};
	std::string achieverA{name[highestValueA]};
	std::string achieverB{name1[highestValueB]};
	std::string classNameA{classNameFunc(className, 0)};
	std::string classNameB{classNameFunc(className, 1)};
	if (gradeA > gradeB)
	{
		std::cout << "The highest grade from the two classes is "
				  << gradeA
				  << " and is achieved by "
				  << achieverA
				  << " from class "
				  << classNameA;
	}
	else if (gradeA < gradeB)
	{
		std::cout << "The highest grade from the two classes is "
				  << gradeB
				  << " and is achieved by "
				  << achieverB
				  << " from class "
				  << classNameB;
	}
	else
	{
		std::cout << "The highest grade from the two classes is "
				  << gradeA
				  << " and is achieved by "
				  << achieverA
				  << " from class "
				  << classNameA
				  << " dan "
				  << achieverB
				  << " from class "
				  << classNameB;
	}
} */

/* void lowestValueOverall(std::string grade[], std::string name[], std::string grade1[], std::string name1[], int namesArrayTrueSize, int gradesArrayTrueSize, int namesArrayTrueSize1, int gradesArrayTrueSize1, std::string className)
{
	int lowestValueA{lowestValue(grade, namesArrayTrueSize, gradesArrayTrueSize)};
	int lowestValueB{lowestValue(grade1, namesArrayTrueSize1, gradesArrayTrueSize1)};
	int gradeA{std::stoi(grade[lowestValueA])};
	int gradeB{std::stoi(grade1[lowestValueB])};
	std::string achieverA{name[lowestValueA]};
	std::string achieverB{name1[lowestValueB]};
	std::string classNameA{classNameFunc(className, 0)};
	std::string classNameB{classNameFunc(className, 1)};
	if (gradeA < gradeB)
	{
		std::cout << "The lowest grade from the two classes is "
				  << gradeA
				  << " and is achiveved by "
				  << achieverA
				  << " from class "
				  << classNameA;
	}
	else if (gradeA > gradeB)
	{
		std::cout << "The lowest grade from the two classes is "
				  << gradeB
				  << " and is achiveved by "
				  << achieverB
				  << " from class "
				  << classNameB;
	}
	else
	{
		std::cout << "The lowest grade from the two classes is  "
				  << gradeA
				  << " and is achiveved by "
				  << achieverA
				  << " from class "
				  << classNameA
				  << " dan "
				  << achieverB
				  << " from class "
				  << classNameB;
	}
} */



/* void warningMessage(std::vector<std::vector<std::string>> nameVec, std::vector<std::vector<std::string>> gradeVec, int access)
{
	if (namesArrayTrueSize > namesArrayTrueSize1 || namesArrayTrueSize2 > namesArrayTrueSize3)
	{
		std::cout << "<<<<<||>>>>>\n"
				  << "*Warning*\n"
				  << "Some students don't have grades stored in the database\n"
				  << "Only students with grades will be processed\n"
				  << "<<<<<||>>>>>\n\n";		  
	}
	else
	{
		std::cout << "[The grades database is complete]\n\n";
	}
} */

/* std::string outputHighestValue(std::string className)
{
	int highestValueLocal{highestValue(studentsGrades, namesArrayTrueSize, namesArrayTrueSize1)};
	std::string result{"The student with the highest score in class " + className + " is " + studentsNames[highestValueLocal] + " with a score of " + studentsGrades[highestValueLocal]};
	return result;	
}

std::string outputLowestValue(std::string studentsGrades[], std::string studentsNames[], int namesArrayTrueSize, int namesArrayTrueSize1, std::string className)
{
	int localLowestValue{lowestValue(studentsGrades, namesArrayTrueSize, namesArrayTrueSize1)};
	std::string result{"The student with the lowest score in class " + className + " is " + studentsNames[localLowestValue] + " with a score of " + studentsGrades[localLowestValue]};
	return result;	
}

void outputAvrgValue(std::string className)
{
	double avrgValueLocal{avrgValue(studentsGrades, namesArrayTrueSize, namesArrayTrueSize1)};
	std::cout << "The average value of the scores in class " << className << " is " << std::fixed << std::setprecision(2) << avrgValueLocal;
}
 */
/* void allResult(std::string classNameInput)
{
	warningMessage(namesArrayTrueSize, gradesArrayTrueSize, namesArrayTrueSize1, gradesArrayTrueSize1);
	std::cout << "==========||==========\n"
			  << namesData(name, namesArrayTrueSize, classNameFunc(classNameInput, 0)) << '\n'
			  << namesData(name1, namesArrayTrueSize1, classNameFunc(classNameInput, 1)) << '\n'
			  << "==========||==========\n"
			  << datagrade(grade, namesArrayTrueSize, gradesArrayTrueSize, classNameFunc(classNameInput, 0)) << '\n'
			  << datagrade(grade1, namesArrayTrueSize1, gradesArrayTrueSize1, classNameFunc(classNameInput, 1)) << '\n'
			  << outputHighestValue(grade, name, namesArrayTrueSize, gradesArrayTrueSize, classNameFunc(classNameInput, 0)) << '\n'
			  << outputHighestValue(grade1, name1, namesArrayTrueSize1, gradesArrayTrueSize1, classNameFunc(classNameInput, 1)) << '\n'
			  << "==========||==========\n"
			  << outputLowestValue(grade, name, namesArrayTrueSize, gradesArrayTrueSize, classNameFunc(classNameInput, 0)) << '\n'
			  << outputLowestValue(grade1, name1, namesArrayTrueSize1, gradesArrayTrueSize1, classNameFunc(classNameInput, 1)) << '\n'
			  << "==========||==========\n";
	outputAvrgValue(grade, classNameFunc(classNameInput, 0), namesArrayTrueSize, gradesArrayTrueSize);
	std::cout << '\n';
	outputAvrgValue(grade1, classNameFunc(classNameInput, 1), namesArrayTrueSize1, gradesArrayTrueSize1);
	std::cout << "\n==========||==========\n";
	overallHighestValue(grade, name, grade1, name1, namesArrayTrueSize, gradesArrayTrueSize, namesArrayTrueSize1, gradesArrayTrueSize1, classNameInput);
	std::cout << '\n';
	lowestValueOverall(grade, name, grade1, name1, namesArrayTrueSize, gradesArrayTrueSize, namesArrayTrueSize1, gradesArrayTrueSize1, classNameInput);
	std::cout << "\n==========||==========\n";
}
 */