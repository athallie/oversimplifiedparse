#include "functions.h"
#include <string>
#include <vector>
#include <iostream>

int main()
{
	std::cout << "<<<Parser>>>\n\n";
	
	std::string character{}, inputForNames{}, inputForGrades{};
	std::string inputClassGlobal{classNameInput()};
	
	bool breaker{boolCheck(inputClassGlobal)};
	
	int i{}, j{}, count{}, otherCount{}, totalColumn{};
	totalColumn = numbersOfColumn(inputClassGlobal);
	
	
	//La
	std::vector<std::vector<std::string>> nameRow(totalColumn);
	std::vector<std::vector<std::string>> gradeRow(totalColumn);
	
	while (breaker == true)
	{	
		for (count = 0; count < totalColumn; count++)
		{
			if (breaker == true)
			{
				inputForNames = nameInput(classNameFunc(inputClassGlobal, count));
				breaker = boolCheck(inputForNames);	
			}
			if (breaker == true)
			{
				inputForGrades = gradeInput(classNameFunc(inputClassGlobal, count));
				breaker = boolCheck(inputForGrades);
			}
			if (breaker == true)
			{
				j = 0;
				i = 0;
				
				parser(nameRow, inputForNames, count);
				parser(gradeRow, inputForGrades, count);				
			}
		}
		breaker = false;
	}
	for (count = 0; count < nameRow.size(); count++)
	{
		for (otherCount = 0; otherCount < nameRow[count].size(); otherCount++)
		{
			std::cout << "\nValue of nameRow [" << count << "][" << otherCount << "]: " << nameRow[count][otherCount];
		}
	}
	
	for(count = 0; count < gradeRow.size(); count++)
	{
		for (otherCount = 0; otherCount < gradeRow[count].size(); otherCount++)
		{
			std::cout << "\nValue of gradeRow [" << count << "][" << otherCount << "]: " << gradeRow[count][otherCount];
		}
	}
	return 0;
}