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
// SetConsoleOutputCP(1252);
using namespace std;


//int main()
//{
//  vector<float>v;
//  float points = 0.0f;
//  float sum = 0.0f;
//  int dommare;
//  cout << "Ange dommare: " << endl;
//  cin >> dommare;
//
//
//  for (int i = 0; i < dommare; i++)
//  {
//      cout << "Ange poäng: " << endl;
//      cin >> points;
//
//      v.push_back(points);    
//  }
//  sort(v.begin(), v.end());
//  v.pop_back();
//  v[0] = 0;
//  for (auto i : v)
//  {
//      sum += i;
//     
//  }
// 
//  cout << sum / (dommare - 2);
//
//}
//
//int main() {
//  int talint;
//  int sum = 0;
//  string tal;
//
//  while (1) {
//      cout << "Ange tal: " << endl;
//      cin >> tal;
//      if (tal == "x") {
//          break;
//      }
//      talint = stoi(tal);
//     
//      sum += talint;
//      cout << "Talet är nu" << sum << endl;
//
//  }
//
//}

//string GetrandValue(int i)
//{
//	if (i == 1) {
//		i = NULL;
//		return "1";
//	}
//	else if (i == 2) {
//		i = NULL;
//		return "2";
//	}
//	else
//		return  "x";
//}
//int main()
//{
//	int rando = 0;
//
//	srand(time(NULL));
//	for (int j = 0; j < 10; j++) {
//		cout << endl;
//		cout << "Tiprad nummer " << j + 1 << endl;
//		for (int i = 0; i < 13; i++) {
//			rando = (rand() % 3) + 1;
//			cout << "Match " << i + 1 << ": " << GetrandValue(rando) << endl;
//		}
//	}
//}

//class Chair
//{
//private:
//	string material;
//	string color;
//	int legs = 4;
//	bool backRest = true;
//public:
//	Chair(string color, string material)
//	{
//		this->color = color;
//		this->material = material;
//	}
//	string GetColor()
//	{
//		return color;
//	}
//	string GetMaterial()
//	{
//		return material;
//	}
//	bool GetbackRest()
//	{
//		return backRest;
//	}
//};
//
//class OfficeChair
//{
//private:
//	string material;
//	string color;
//	int legs = 5;
//	int height_in_cm = 10;
//	bool backRest = true;
//	bool hasSeatedPerson = false;
//public:
//	OfficeChair(string color, string material)
//	{
//		this->color = color;
//		this->material = material;
//	}
//	string GetColor()
//	{
//		return color;
//	}
//	string GetMaterial()
//	{
//		return material;
//	}
//	bool GetbackRest()
//	{
//		return backRest;
//	}
//	int GetHeightinCm()
//	{
//		return height_in_cm;
//	}
//	void liftLeverPull()
//	{
//		if (hasSeatedPerson && height_in_cm > 0)
//		{
//			height_in_cm -= 2;
//		}
//		else if (!hasSeatedPerson && height_in_cm < 10)
//		{
//			height_in_cm += 2;
//		}
//	}
//	void isBeingUsed()
//	{
//		hasSeatedPerson = true;
//	}
//	void isNotBeingUsed()
//	{
//		hasSeatedPerson = false;
//	}
//
//};

//int main()
//{
//	Chair NiklasStol = Chair("Silver", "Aluminium");
//	cout << NiklasStol.GetColor() << endl;
//	Chair AntonsStol = Chair("Brun", "Stål");
//	cout << AntonsStol.GetColor() << endl;
//	return 0;
//}



//class Classroom
//{
//private:
//	vector<OfficeChair>allChairs;
//public:
//	Classroom() {};
//	void AddChair(OfficeChair chairObject)
//	{
//		allChairs.push_back(chairObject);
//	}
//	int GetAmountOfChair()
//	{
//		return allChairs.size();
//	}
//};
//int main()
//{
//	SetConsoleOutputCP(1252);
//	OfficeChair NiklasStol = OfficeChair("Rödsvart", "Blandat");
//	cout << "Stolen från början är" << NiklasStol.GetHeightinCm() << endl;
//	NiklasStol.isBeingUsed();
//	NiklasStol.liftLeverPull();
//	cout << "Stolen är numera:" << NiklasStol.GetHeightinCm() << endl;
//	return 0;
//}

//int main()
//{
//	SetConsoleOutputCP(1252);
//	Classroom c304 = Classroom();
//	OfficeChair one = OfficeChair("black", "wood");
//	OfficeChair two = OfficeChair("black2", "woody");
//	OfficeChair three = OfficeChair("black1", "woody");
//	c304.AddChair(one);
//	c304.AddChair(two);
//	c304.AddChair(three);
//	cout << c304.GetAmountOfChair() << endl;
//
//	return 0;
//}


//Vi ska skriva ett anmälningssystem för orienteringstävlingar.
//Börja med klassen Competition.Den ska ha Name, Date, Location.Och en lista med deltagare(participants).
//Klassen Participant ska ha Name och Club.
//Skapa upp en tävling och några deltagare och skriv sen ut  en anmälningslista, tex:


//class Competition
//{
//private:
//	string Name;
//	string Date;
//	string Location;
//	vector<int>count1;
//public:
//	Competition(string Name, string Date, string Location)
//	{
//		this->Name = Name;
//		this->Date = Date;
//		this->Location = Location;
//	}
//	string GetNameComp()
//	{
//		return Name;
//	}
//	string GetDate()
//	{
//		return Date;
//	}
//	string GetLocation()
//	{
//		return Location;
//	}
//	int GetAmountOfpartip()
//	{
//		return count1.size();
//	}
//	void AddAmount(int n)
//	{
//		count1.push_back(n);
//	}
//
//};
//class Participant
//{
//private:
//	string Name;
//	string Club;
//	vector<int>Count;
//public:
//	Participant(string Name, string Club)
//	{
//		this->Name = Name;
//		this->Club = Club;
//	}
//	string GetName()
//	{
//		return Name;
//	}
//	string GetClub()
//	{
//		return Club;
//	}
//	void Addparticipant(int count)
//	{
//		Count.push_back(count);
//	}
//	int GetAmountOfpartip()
//	{
//		return Count.size();
//	}
//};
//
//int main()
//{
//	SetConsoleOutputCP(1252);
//	Competition Rusket = Competition("Höstrusket", "2019 - 11 - 12", "Västerås");
//	Participant anna = Participant("Anna Nilsson", "Linköping IK");
//	Participant Per = Participant("Per Erik Jonsson", "Norrköping OK");
//	Participant Kalle = Participant("Kalle Svensson", "Linköping IK");
//	Participant Bo = Participant("Bo Ek", "Motala IK");
//	Participant Mia = Participant("Kalle Svensson", "Linköping IK");
//	Participant Sebbe = Participant("Sebastian Gustavsson", "Motala IK");
//	Participant Oscar = Participant("Oscar Lundkvist", "Boxholm OK");
//	anna.Addparticipant(1);
//	Per.Addparticipant(1);
//	Kalle.Addparticipant(1);
//	Bo.Addparticipant(1);
//	Mia.Addparticipant(1);
//	Sebbe.Addparticipant(1);
//	Oscar.Addparticipant(1);
//	Rusket.AddAmount(7);
//	cout << Rusket.GetNameComp() << " " << Rusket.GetDate() << " " << Rusket.GetLocation() << " " << Rusket.GetAmountOfpartip();
//
//
//	return 0;
//}
