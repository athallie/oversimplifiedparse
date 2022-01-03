#include <string>
#include <iomanip>
#include <iostream>

std::string inputKelas()
{
	std::cout << "<<<<<---ATURAN PROGRAM--->>>>>\n"
			  << "1. Selalu gunakan tanda '/' sebagai pemisah data\n"
			  << "2. Enter tanpa input apapun akan mengeluarkan anda dari program\n"
			  << "3. Program hanya akan menghitung dan menampilkan nama-nama siswa yang memiliki nilai\n"
			  << "4. Program hanya akan menghitung jika anda sudah menginput data dari dua kelas\n\n";
	std::string inputKelas{};
	bool breaker{true};
	while (breaker == true)
	{
		std::cout << "Data dari kelas apa saja yang ingin anda simpan?\n(Minimal dan maksimal adalah dua kelas)\n"
				  << "(Gunakan tanda '/' sebagai pemisah)\n"
				  << "Input nama kelas: ";
		int count{0};
		std::getline(std::cin, inputKelas);
		std::cout << '\n';
		if (inputKelas == "")
		{
			breaker = false;
		}
		else
		{
			std::string karakter{};
			int j {0};
			int i {0};
			while (i <= inputKelas.length() - 1)
			{
				karakter = inputKelas[i];
				if (karakter == "/")
				{
					j += 1;
				}
				i += 1;
			}
			if (karakter == "/")
			{
				j -= 1;
			}
			if (j > 1 || j < 1)
			{
				std::cout << "Anda tidak menginput tepat dua kelas\n\n";
			}
			else
			{
				breaker = false;
			}
		}
	}
	return inputKelas;
}

std::string inputNama(std::string kelas)
{
	std::string inputNama{};
	std::cout << "Ketik nama-nama siswa dari kelas "
			  << kelas
			  << " yang ingin anda simpan dan gunakan tanda '/' sebagai pemisah:\n"
			  << "(Enter tanpa mengetik apapun atau enter '/' di awal untuk keluar)\n"
			  << "Input nama-nama siswa: ";
	std::getline(std::cin, inputNama);
	std::cout <<"\n\n";
	return inputNama;
			  
}

std::string inputNilai(std::string kelas)
{
	std::string inputNilai;
	std::cout << "Ketik nilai-nilai dari siswa-siswa kelas "
			  << kelas 
			  << " dan gunakan tanda '/' sebagai pemisah:\n"
			  << "(Enter tanpa mengetik apapun atau enter '/' di awal untuk keluar)\n"
			  << "Input nilai-nilai siswa: ";
	std::getline(std::cin, inputNilai);
	std::cout <<"\n\n";
	return inputNilai;
}

bool boolCheck(std::string input)
{
	bool breaker{true};
	if (input == "")
	{
		std::cout << "Anda telah keluar\n";
		breaker = false;
	}
	else if (input[0] == '/')
	{
		std::cout << "Anda telah keluar\n";
		breaker = false;
	}
	return breaker;
}

std::string dataNama(std::string namaSiswa[], int trueSize, std::string kelas)
{
	std::string hasil{""};
	int i{0};
	while (i <= trueSize - 1)
	{
		hasil += namaSiswa[i] + ",";
		i += 1;
	}
	std::string hasilBaru{""};
	for (i = 0; i <= hasil.length() - 2; i++)
	{
		hasilBaru += hasil[i];
	}
	hasil = "Data nama kelas " + kelas + ": [" + hasilBaru + "]";
	return hasil;
}

std::string dataNilai(std::string nilaiSiswa[], int trueSize, int trueSizeNilai, std::string kelas)
{
	std::string hasil{""};
	int i{0};
	if (trueSize > trueSizeNilai)
	{
		trueSize = trueSizeNilai;
	}
	while (i <= trueSize - 1)
	{
		hasil += nilaiSiswa[i] + ",";
		i += 1;
	}
	std::string hasilBaru{""};
	for (i = 0; i <= hasil.length() - 2; i++)
	{
		hasilBaru += hasil[i];
	}
	hasil = "Data nilai kelas " + kelas + ": [" + hasilBaru + "]";
	return hasil;
}

std::string namaKelas(std::string kelas, int classChoice)
{
	std::string namaKelas{};
	std::string kelasArr[2];
	std::string karakter{};
	int j{0};
	int i{0};
	std::string hasil{""};
	while (i <= kelas.length() - 1)
	{
		karakter = kelas[i];
		if (karakter == "/")
		{
			hasil = "";
			j += 1;
		}
		else
		{
			hasil += karakter;
			kelasArr[j] = hasil;
		}
		i += 1;
	}
	if (classChoice == 1)
	{
		namaKelas = kelasArr[1];
	}
	else
	{
		namaKelas = kelasArr[0];
	}
	return namaKelas;
}

int nilaiTertinggi(std::string nilaiSiswa[], int trueSize, int trueSize1)
{
	int i{};
	if (trueSize > trueSize1)
	{
		trueSize = trueSize1;
	}
	const int trueSizeBaru{trueSize};
	int inNilaiSiswa[trueSizeBaru];
	int index{0};
	for (i = 0; i <= trueSize - 1; i++)
	{
		inNilaiSiswa[i] = std::stoi(nilaiSiswa[i]);
	}
	int highestValue{inNilaiSiswa[0]};
	i = 1;
	while (i <= sizeof(inNilaiSiswa)/sizeof(inNilaiSiswa[0]) - 1)
	{
		if (inNilaiSiswa[i] > highestValue)
		{
			highestValue = inNilaiSiswa[i];
			index = i;
		}
		i += i;
	}
	return index;
}

int nilaiTerendah(std::string nilaiSiswa[], int trueSize, int trueSize1)
{
	int i{};
	if (trueSize > trueSize1)
	{
		trueSize = trueSize1;
	}
	const int trueSizeBaru{trueSize};
	int inNilaiSiswa[trueSizeBaru];
	int index{0};
	for (i = 0; i <= trueSize - 1; i++)
	{
		inNilaiSiswa[i] = std::stoi(nilaiSiswa[i]);
	}
	int lowestValue{inNilaiSiswa[0]};
	i = 1;
	while (i <= sizeof(inNilaiSiswa)/sizeof(inNilaiSiswa[0]) - 1)
	{
		if (inNilaiSiswa[i] < lowestValue)
		{
			lowestValue = inNilaiSiswa[i];
			index = i;
		}
		i += i;
	}
	return index;
}

double avrgValue(std::string nilaiSiswa[], int trueSize, int trueSize1)
{
	int i{};
	if (trueSize > trueSize1)
	{
		trueSize = trueSize1;
	}
	const int trueSizeBaru{trueSize};
	double inNilaiSiswa[trueSizeBaru];
	double total{0};
	for (i = 0; i <= trueSize - 1; i++)
	{
		inNilaiSiswa[i] = std::stod(nilaiSiswa[i]);
	}
	for (i = 0; i <= sizeof(inNilaiSiswa)/sizeof(inNilaiSiswa[0]) - 1; i++)
	{
		total += inNilaiSiswa[i];
	}
	total /= i;	
	return total;
}

void parser(std::string arrayString[], std::string input, bool breaker)
{
	std::string karakter{}, hasil{""};
	int i{0}, j{0};
	while (i <= input.length() - 1 && breaker == true)
	{
		karakter = input[i];
		if (karakter == "/")
		{
			hasil = "";
			j += 1;
		}
		else
		{
			hasil += karakter;
			arrayString[j] = hasil;
		}
		i += 1;
	}
}

int arraySize(std::string input, bool breaker)
{
	int trueSize{};
	std::string karakter{};
	int i{0}, j{0};
	while (i <= input.length() - 1 && breaker == true)
	{
		karakter = input[i];
		if (karakter == "/")
		{
			j += 1;
		}
		i += 1;
	}
	if (karakter == "/")
	{
		trueSize = j;
	}
	else
	{
		trueSize = j + 1;
	}
	return trueSize;
}

void nilaiTertinggiKeseluruhan(std::string nilai[], std::string nama[], std::string nilai1[], std::string nama1[], int trueSize, int trueSizeNilai, int trueSize1, int trueSizeNilai1, std::string kelas)
{
	int nilaiTertinggiA{nilaiTertinggi(nilai, trueSize, trueSizeNilai)};
	int nilaiTertinggiB{nilaiTertinggi(nilai1, trueSize1, trueSizeNilai1)};
	int nilaiA{std::stoi(nilai[nilaiTertinggiA])};
	int nilaiB{std::stoi(nilai1[nilaiTertinggiB])};
	std::string peraihA{nama[nilaiTertinggiA]};
	std::string peraihB{nama1[nilaiTertinggiB]};
	std::string kelasA{namaKelas(kelas, 0)};
	std::string kelasB{namaKelas(kelas, 1)};
	if (nilaiA > nilaiB)
	{
		std::cout << "Nilai tertinggi dari kedua kelas adalah "
				  << nilaiA
				  << " yang diraih oleh "
				  << peraihA
				  << " dari kelas "
				  << kelasA;
	}
	else if (nilaiA < nilaiB)
	{
		std::cout << "Nilai tertinggi dari kedua kelas adalah "
				  << nilaiB
				  << " yang diraih oleh "
				  << peraihB
				  << " dari kelas "
				  << kelasB;
	}
	else
	{
		std::cout << "Nilai tertinggi dari kedua kelas adalah "
				  << nilaiA
				  << " yang diraih oleh "
				  << peraihA
				  << " dari kelas "
				  << kelasA
				  << " dan "
				  << peraihB
				  << " dari kelas "
				  << kelasB;
	}
}

void nilaiTerendahKeseluruhan(std::string nilai[], std::string nama[], std::string nilai1[], std::string nama1[], int trueSize, int trueSizeNilai, int trueSize1, int trueSizeNilai1, std::string kelas)
{
	int nilaiTerendahA{nilaiTerendah(nilai, trueSize, trueSizeNilai)};
	int nilaiTerendahB{nilaiTerendah(nilai1, trueSize1, trueSizeNilai1)};
	int nilaiA{std::stoi(nilai[nilaiTerendahA])};
	int nilaiB{std::stoi(nilai1[nilaiTerendahB])};
	std::string peraihA{nama[nilaiTerendahA]};
	std::string peraihB{nama1[nilaiTerendahB]};
	std::string kelasA{namaKelas(kelas, 0)};
	std::string kelasB{namaKelas(kelas, 1)};
	if (nilaiA < nilaiB)
	{
		std::cout << "Nilai terendah dari kedua kelas adalah "
				  << nilaiA
				  << " yang diraih oleh "
				  << peraihA
				  << " dari kelas "
				  << kelasA;
	}
	else if (nilaiA > nilaiB)
	{
		std::cout << "Nilai terendah dari kedua kelas adalah "
				  << nilaiB
				  << " yang diraih oleh "
				  << peraihB
				  << " dari kelas "
				  << kelasB;
	}
	else
	{
		std::cout << "Nilai terendah dari kedua kelas adalah "
				  << nilaiA
				  << " yang diraih oleh "
				  << peraihA
				  << " dari kelas "
				  << kelasA
				  << " dan "
				  << peraihB
				  << " dari kelas "
				  << kelasB;
	}
}



void peringatan(int trueSize, int trueSize1, int trueSize2, int trueSize3)
{
	if (trueSize > trueSize1 || trueSize2 > trueSize3)
	{
		std::cout << "<<<<<||>>>>>\n"
				  << "*PERINGATAN*\n"
				  << "Terdapat beberapa siswa yang nilainya tidak ada dalam database\n"
				  << "Jadi, hanya siswa yang memiliki nilai yang akan diperhitungkan dan ditampilkan\n"
				  << "<<<<<||>>>>>\n\n";		  
	}
	else
	{
		std::cout << "[Data nilai sudah lengkap]\n\n";
	}
}

std::string outputHighestValue(std::string nilaiSiswa[], std::string namaSiswa[], int trueSize, int trueSize1, std::string kelas)
{
	int nilaiTertinggiLocal{nilaiTertinggi(nilaiSiswa, trueSize, trueSize1)};
	std::string result{"Peraih nilai tertinggi di kelas " + kelas + " adalah " + namaSiswa[nilaiTertinggiLocal] + " dengan nilai sebesar " + nilaiSiswa[nilaiTertinggiLocal]};
	return result;	
}

std::string outputLowestValue(std::string nilaiSiswa[], std::string namaSiswa[], int trueSize, int trueSize1, std::string kelas)
{
	int nilaiTerendahLocal{nilaiTerendah(nilaiSiswa, trueSize, trueSize1)};
	std::string result{"Peraih nilai terendah di kelas " + kelas + " adalah " + namaSiswa[nilaiTerendahLocal] + " dengan nilai sebesar " + nilaiSiswa[nilaiTerendahLocal]};
	return result;	
}

void outputAvrgValue(std::string nilaiSiswa[], std::string kelas, int trueSize, int trueSize1)
{
	double avrgValueLocal{avrgValue(nilaiSiswa, trueSize, trueSize1)};
	std::cout << "Rata-rata dari semua nilai di kelas " << kelas << " adalah " << std::fixed << std::setprecision(2) << avrgValueLocal;
}

void allResult(int trueSize, int trueSize1, int trueSizeNilai, int trueSizeNilai1, std::string nama[], std::string nama1[], std::string nilai[], std::string nilai1[], std::string inputKelas)
{
	peringatan(trueSize, trueSizeNilai, trueSize1, trueSizeNilai1);
	std::cout << "==========||==========\n"
			  << dataNama(nama, trueSize, namaKelas(inputKelas, 0)) << '\n'
			  << dataNama(nama1, trueSize1, namaKelas(inputKelas, 1)) << '\n'
			  << "==========||==========\n"
			  << dataNilai(nilai, trueSize, trueSizeNilai, namaKelas(inputKelas, 0)) << '\n'
			  << dataNilai(nilai1, trueSize1, trueSizeNilai1, namaKelas(inputKelas, 1)) << '\n'
			  << outputHighestValue(nilai, nama, trueSize, trueSizeNilai, namaKelas(inputKelas, 0)) << '\n'
			  << outputHighestValue(nilai1, nama1, trueSize1, trueSizeNilai1, namaKelas(inputKelas, 1)) << '\n'
			  << "==========||==========\n"
			  << outputLowestValue(nilai, nama, trueSize, trueSizeNilai, namaKelas(inputKelas, 0)) << '\n'
			  << outputLowestValue(nilai1, nama1, trueSize1, trueSizeNilai1, namaKelas(inputKelas, 1)) << '\n'
			  << "==========||==========\n";
	outputAvrgValue(nilai, namaKelas(inputKelas, 0), trueSize, trueSizeNilai);
	std::cout << '\n';
	outputAvrgValue(nilai1, namaKelas(inputKelas, 1), trueSize1, trueSizeNilai1);
	std::cout << "\n==========||==========\n";
	nilaiTertinggiKeseluruhan(nilai, nama, nilai1, nama1, trueSize, trueSizeNilai, trueSize1, trueSizeNilai1, inputKelas);
	std::cout << '\n';
	nilaiTerendahKeseluruhan(nilai, nama, nilai1, nama1, trueSize, trueSizeNilai, trueSize1, trueSizeNilai1, inputKelas);
	std::cout << "\n==========||==========\n";
}
