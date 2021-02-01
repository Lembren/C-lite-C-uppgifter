#include <random>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "Windows.h"
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>     
#include <functional>   
#include <numeric>    
#include <fstream>
#include <iostream>
#include <math.h>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <exception>

//
using namespace std; // så man slipper skriva std::
//
//
//int main() {
//
//	SetConsoleOutputCP(1252);
//
//	ifstream ifs;
//	ifstream ifs1;
//	ofstream ofs;
//	ofstream ofs2;
//	ofstream ofs3;
//	string nameOfFile = "Hej.txt";
//	string nameOfFile1 = "Hopp.txt";
//	string nameOfFile2 = "Hejhopp.txt";
//	string word;
//	int antal;
//	cout << "Ange antal rader på filen: \n";
//	cin >> antal;
//	ofs.open(nameOfFile, ofstream::out | ofstream::app);
//	for (int i = 0; i < antal; i++)
//	{
//		cout << "Skriv något i filen: \n";
//		cin >> word;
//		ofs << word << endl;
//	}
//
//	ofs.close();
//
//	ofs2.open(nameOfFile1, ofstream::out | ofstream::app);
//	ifs.open(nameOfFile, ifstream::in);
//	char allwordsInFile[200];
//	while (!ifs.eof())
//	{
//		ifs.getline(allwordsInFile, 200);
//		ofs2 << allwordsInFile << endl;
//	}
//
//	ofs2.close();
//	ifs.close();
//
//	ofs2.open(nameOfFile1, ofstream::out | ofstream::app);
//	ifs.open(nameOfFile, ifstream::in);
//	ofs3.open(nameOfFile2, ofstream::out | ofstream::app);
//	ifs1.open(nameOfFile1, ifstream::in);
//	char words[200];
//	while (!ifs1.eof())
//	{
//		ifs.getline(allwordsInFile, 200);
//		ofs3 << allwordsInFile << endl;
//		ifs1.getline(words, 200);
//		ofs3 << words << endl;
//	}
//
//	ofs2.close();
//	ifs.close();
//	ofs3.close();
//	ifs1.close();
//
//	return 0;
//
//
//}

//int main()
//{
//
//	ifstream in_file;
//	in_file.open("poem.txt");
//	if (!in_file)
//	{
//		cerr << "Problem opening file.";
//		return 1;
//	}
//	string line{};
//	while (getline(in_file, line))
//	{
//		cout << line << endl;
//	}
//	in_file.close();
//
//
//	return 0;
//}

//int main()
//{
//
//	ifstream in_file;
//	in_file.open("poem.txt");
//	if (!in_file)
//	{
//		cerr << "Problem opening file.";
//		return 1;
//	}
//	char c{};
//	while (in_file.get(c))
//	{
//		cout << c;
//	}
//
//	in_file.close();
//	return 0;
//}


//int main()
//{
//	//ofstream out_file("myfile.txt",ios::out); //outputmode,write to but not read from.
//	//ofstream out_file("myfile.txt",ios::out|ios::binary); // Öppnas i binärt write.
//	ofstream out_file;
//	out_file.open("hej.txt");
//	//string file;
//	//cin >> file;
//	int num = 100;
//	double total = 25.35;
//	string name = "Niklas";
//	out_file << name << "\n" << num << "\n" << total << "\n";
//	out_file.close();
//	ifstream in_file;
//	in_file.open("hej.txt");
//	char c{};
//	while (in_file.get(c))
//	{
//		cout << c;
//	}
//	in_file.close();
//	return 0;
//}

//int main()
//{
//	ifstream in_file{ "myfile.txt" };
//	ofstream out_file{ "myfilecopy.txt" };
//	if (!in_file)
//	{
//		cerr << "Error opening file";
//		return 1;
//	}
//	if (!out_file)
//	{
//		cerr << "Error opening file";
//		return 1;
//	}
//	string line;
//	while (getline(in_file, line))
//	{
//		out_file << line << endl;
//	}
//	in_file.close();
//	out_file.close();
//	return 0;
//}
