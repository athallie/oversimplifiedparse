#include "functions.h"
#include <string>
#include <iostream>

int main()
{
	std::cout << "<<<TUGAS AKHIR>>>\n"
			  << "oleh Athallah Naufal - 21525094\n\n";
	std::string inputKelasGlobal{inputKelas()};
	bool breaker{boolCheck(inputKelasGlobal)};
	std::string inputNama0{}, inputNilai0{}, inputNama1{}, inputNilai1{}, hasil{}, karakter{}, nama[100], nilai[100], nama1[100], nilai1[100];
	int i{}, j{}, count{}, trueSize{}, trueSize1{}, trueSizeNilai{}, trueSizeNilai1{};
	if (breaker == true)
	{
		inputNama0 = inputNama(namaKelas(inputKelasGlobal, 0));
		breaker = boolCheck(inputNama0);
		if (breaker == true)
		{
			inputNilai0 = inputNilai(namaKelas(inputKelasGlobal, 0));
			breaker = boolCheck(inputNilai0);
			if (breaker == true)
			{
				inputNama1 = inputNama(namaKelas(inputKelasGlobal, 1));
				breaker = boolCheck(inputNama1);
				if (breaker == true)
				{
					inputNilai1 = inputNilai(namaKelas(inputKelasGlobal, 1));
					breaker = boolCheck(inputNilai1);
					j = 0;
					i = 0;
					hasil = "";
					for (count = 0; count <= 1; count++)
					{
						if (count == 0)
						{
							parser(nama, inputNama0, breaker);
							trueSize = arraySize(inputNama0, breaker);
							parser(nilai, inputNilai0, breaker);
							trueSizeNilai = arraySize(inputNilai0, breaker);
						}
						else
						{
							parser(nama1, inputNama1, breaker);
							trueSize1 = arraySize(inputNama1, breaker);
							parser(nilai1, inputNilai1 ,breaker);
							trueSizeNilai1 = arraySize(inputNilai1, breaker);
						}
					}
					allResult(trueSize, trueSize1, trueSizeNilai, trueSizeNilai1, nama, nama1, nilai, nilai1, inputKelasGlobal);
				}	
			}
		}
	}
	std::cout << "\nProgram telah selesai\n";
	return 0;
}