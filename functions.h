#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <iostream>

std::string inputKelas();
std::string inputNama(std::string kelas);
std::string inputNilai(std::string kelas);
bool boolCheck(std::string input);
std::string dataNama(std::string namaSiswa[100], int trueSize, std::string kelas);
std::string dataNilai(std::string nilaiSiswa[], int trueSize, int trueSizeNilai, std::string kelas);
std::string namaKelas(std::string kelas, int classChoice);
int nilaiTertinggi(std::string nilaiSiswa[], int trueSize, int trueSize1);
int nilaiTerendah(std::string nilaiSiswa[], int trueSize, int trueSize1);
double avrgValue(std::string nilaiSiswa[], int trueSize, int trueSize1);
void parser(std::string arrayString[], std::string input, bool breaker);
int arraySize(std::string input, bool breaker);
void nilaiTertinggiKeseluruhan(std::string nilai[], std::string nama[], std::string nilai1[], std::string nama1[], int trueSize, int trueSizeNilai, int trueSize1, int trueSizeNilai1, std::string kelas);
void nilaiTerendahKeseluruhan(std::string nilai[], std::string nama[], std::string nilai1[], std::string nama1[], int trueSize, int trueSizeNilai, int trueSize1, int trueSizeNilai1, std::string kelas);
void peringatan(int trueSize, int trueSize1, int trueSize2, int trueSize3);
std::string outputHighestValue(std::string nilaiSiswa[], std::string namaSiswa[], int trueSize, int trueSize1, std::string kelas);
std::string outputLowestValue(std::string nilaiSiswa[], std::string namaSiswa[], int trueSize, int trueSize1, std::string kelas);
void outputAvrgValue(std::string nilaiSiswa[], std::string kelas, int trueSize, int trueSize1);
void allResult(int trueSize, int trueSize1, int trueSizeNilai, int trueSizeNilai1, std::string nama[], std::string nama1[], std::string nilai[], std::string nilai1[], std::string inputKelas);
#endif