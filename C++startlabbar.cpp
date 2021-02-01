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
#include <sstream>
using namespace std;

//int main()
//{
//	string namn = "Niklas";
//	namn = namn + " Lembren";
//	cout << namn << "\n";
//	int age = 12;
//    cout << "Hello World!\n";
//	cout << "Jag är " << age << " år\n";
//	int selection;
//	cout << "1 eller 2?";
//	cin >> selection;
//	if (selection == 1);
//	cout << "du svarade 1";
//	cin >> selection;
//	if (selection == 2);
//	cout << "du svarade 2";
//	return 0;
//}


//int main()
//{
//	srand((int)time(0));
//	int r = (rand() % 50) + 1;
//	cout << r << "\n";
//	int guesses = 0;		
//	while (true)
//	{
//		int selection;
//		
//		cout << "Guess a number:\n";
//		cin >> selection;
//		if (selection > r)
//		{
//			cout << "Too High!\n";
//		}
//		else if (selection < r)
//		{
//			cout << "Too Low!!\n";
//		}
//		else
//		{
//			cout << "Correct you had " << guesses << "Guesses";
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{	
//	int x = 29;
//	int y = 30;
//	cout << "the sum of " << x << " and " << y << " = " << x + y;
//	
//	return 0;
//}


//float CalculateVat(float varde, float vatRate = 0.25f)
//{
//	return varde * vatRate;
//}
//int sumera(int tal1, int tal2)
//{
//	return tal1 + tal2;
//}
//float Summera(float f1, float f2)
//{
//	return f1 + f2;
//}
//
//int change(int &a)
//{
//	a = 123;
//}
//int main()
//{
//	int a = 99;
//	change(a);
//	printf("%d", a);
//	float m = CalculateVat(100);
//	float m2 = CalculateVat(200, 0.06f);
//	float n2 = Summera(12.0f, 25.0f);
//}



//int Netto(int timmar,int timlon,int SkatteSats )
//{
//
//	return timmar * timlon * SkatteSats;
//}
//int main()
//{
//
//	int Summering = Netto(8, 120, 70);
//	int Summering1 = Netto(160, 150, 70);
//	cout << Summering / 100 <<"\n"<< Summering1 / 100;
//}


//int Summera(int a, int b)
//{
//	return a + b;
//}
//int Summera(int c, int d,int D)
//{
//	return c + d + D;
//}
//int Summera(int e, int f,int EF,int FE)
//{
//	return e + f + EF +FE;
//}
//int Summera(int g, int h,int gh,int hg,int GH)
//{
//	return g + h + gh + hg + GH ;
//}
//float Summera(float a, float b)
//{
//	return a + b;
//}
//float Summera(float c, float d,float cd)
//{
//	return c + d+ cd;
//}
//float Summera(float e, float f,float F,float FF)
//{
//	return e + f + F+F+FF;
//}
//float Summera(float i, float j,float I,float J,float IJ)
//{
//	return i + j + I + J+IJ;
//}
//void main()
//{
//	int sum = Summera(1, 15);
//	int sum1 = Summera(5, 10, 5);
//	int sum2 = Summera(6, 1, 5, 2);
//	int sum3 = Summera(7, 3, 1, 5, 2);
//	float sum4 = Summera(2.5f, 25.25f);
//	float sum5 = Summera(35.12f, 35.233f, 24.666f);
//	float sum6 = Summera(23.535f, 12.344f, 21.567f, 24.666f);
//	float sum7 = Summera(2.535f, 1.32f, 63.23f, 12.24f, 1.5f);
//	cout << sum << endl << sum1 << endl << sum2 << endl << sum3 << endl << sum4 << endl << sum5 << endl << sum6 << endl << sum7 << endl;
//}




//int main() 
//{
//	int numblines;
//	string fileName;
//	cout << "What file do you want to write to?" << endl;
//	getline(cin, fileName);
//	cout << "How many lines do you want to write?" << endl;
//	cin >> numblines;
//	cin.ignore();
//
//	fileName = fileName + ".txt";
//	ofstream out(fileName, ofstream::out | ofstream::app);
//	cout << "------------" << endl;
//	for (int i = 0; i < numblines; i++)
//	{
//	string line;
//	getline(cin, line);
//	out << line << endl;
//	}
//}

//void main()
//{
//
//	float KM;
//	float MILES = KM / 1.6;
//	cout << "Skriv in antal km:"<<endl;
//	cin >> KM;
//	float MILES = KM / 1.6;
//	cout << MILES << "Miles" << endl;
//}


//class Person
//{
//	int age;
//	string first_name;
//	string last_name;
//	int birthMonth;
//
//	string streetAddress;
//	int postalCode;
//	string City;
//public:
//	void ChangeAdress(string streetAddress, int postalCode, string City)
//	{
//		this->streetAddress = streetAddress;
//		this->postalCode = postalCode;
//		this->City = City;
//	}
//	Person(string firstName, string lastName)
//	{
//		first_name = firstName;
//		last_name = lastName;
//	}
//	void setAge(int newAge)
//	{
//		if (newAge < 0)
//		{
//			return;
//		}
//		age = newAge;
//	}
//	void setBirthmonth(int newMonth)
//	{
//		if (newMonth < 1 or newMonth > 12)
//		{
//			return;
//		}
//		birthMonth = newMonth;
//	}
//};
// int main()
//{
//	 Person person("Nisse", "Pisse");
//	 person.setAge(19);
//	 person.setBirthmonth(1);
//	 return;
//}

//
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		int talet;
//		cout << "Mata in ett tal:";
//		cin >> talet;
//		sum += talet;
//
//	}
//	cout << "Summan blir:" << sum;
//
//	return 0;
//}


//int main()
//{
//	int tal1;
//	cout << "mata in ett tal:";
//	cin >> tal1;
//	for (int i = 1; i < tal1; i++)
//		cout << i << endl;
//	return 0;
//}

//5. Skapa ett program där användaren får mata in ett tal.Låt sedan programmet skriva ut
//alla siffor som är mindre än det inmatade talet men större än 0. Lös detta med en
//loop

//void main()
//{
//	int tal;
//	while (true)
//	{
//		cout << "Mata in ett tal:";
//		cin >> tal;
//		if (tal > 10)
//			cout << "Vardet ar for hogt!" << endl;
//		else if (tal < 10)
//			cout << "Vardet ar for lagt!" << endl;
//		else
//		{
//			cout << "Du matade in ratt!!";
//			break;
//		}
//	}
//
//}
//7. Skapa ett program som skriver ut alla udda tal under 100. Ett tips är att använda
//operatorn % (modulus).Detta räknar ut resten efter att två tal divideras tex 5 % 2 blir
//void main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			cout << i << endl;
//	}
//
//
//}

//9. Skapa ett program där användaren skall mata in kontaktuppgifter.Ta emot alla
//värden i variabler
//a.Be användaren mata in sitt namn, gatuadress, postnummer och postort.
//b.Kontrollera att alla uppgifter är ifyllda.Är dom det skall ett meddelande
//visas för användaren som säger - Alla uppgifter ifyllda.Programmet
//avslutas sedan.
//c.Om inte alla uppgifter är ifyllda skall man börja om med steg a - d.Kontrollera
//för varje värde om just det värdet är ifyllt.Programmet skall inte be
//användaren mata in ett värde som redan är inmatat.

//int main()
//{
//	char undo;
//	string commandStrings;
//	stack<string>Comand;
//	while (true)
//	{
//		cout << "Ange Kommando,tex cut, insert table, etcetc eller undo:";
//		cin >> commandStrings;
//		if (commandStrings == "undo" && Comand.size() == 0)
//			cout << "The stack is empty" << endl;
//		else if (commandStrings != "undo")
//		{
//			Comand.push(commandStrings);
//			cout << "Senaste stacktillagg:" << Comand.top() << endl;
//		}
//		else if (commandStrings == "undo")
//		{
//			cout << "Do you want to undo y/n";
//			cin >> undo;
//			if (undo == 'y' || undo == 'Y')
//			{
//				Comand.pop();
//
//			}
//		}
//
//	}
//	return 0;
//	
//}
//string reverse(string re)
//{
//	 return reverse(re.begin(), re.end());
//
//}
//int main()
//{
//	string hej = "Niklas";
//	string hej1 = reverse(hej);
//	cout << hej1;
//	return 0;
//}



//class Patient
//{
//	time_t arrivedInQueue;
//	int queueNo;
//public:
//	Patient(int queueNo)
//	{
//		this->queueNo = queueNo;
//		arrivedInQueue = time(NULL);
//	}
//	int GetQueueNo()
//	{
//		return queueNo;
//	}
//	int SecondsInQueue()
//	{
//		return time(NULL) - arrivedInQueue;
//	}
//
//};
//
//
//int main()
//{
//	SetConsoleOutputCP(1252);
//	int queueNo = 1;
//	string commando;
//	queue<Patient> theQueue;
//	while (1)
//	{
//		cout << "Antal i kön " << theQueue.size() << endl;
//		cout << "1. Stoppa in en ny patient i väntekön" << endl;
//		cout << "2. Ropa in nästa patient" << endl;
//		getline(cin, commando);
//		if (commando == "1")
//		{
//			Patient p(queueNo);
//			theQueue.push(p);
//			queueNo++;
//		}
//		if (commando == "2")
//		{
//			Patient p = theQueue.front();
//			cout << "Ny patient ! Nr " << p.GetQueueNo() << endl;
//			cout << "Patienten: Jag har väntat hela " << p.SecondsInQueue() << " sekunder...vad f-n får jag för skattepengarna" << endl;
//			theQueue.pop();
//		}
//	}
//	return 0;
//}

//1. Skapa ett program där användaren får upp fyra frågor om att mata in ett tal.Spara
//alla talen i en array.Loopa igenom arrayen och ta fram det tal som är störst.Skriv
//tillbaka resultatet på skärmen för användaren
//
//int main()
//{
//	int tal1;
//	vector<int>tal;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << " Mata in ett tal:";
//		cin >> tal1;
//		tal.push_back(tal1);
//	}
//	sort(tal.begin(), tal.end());
//	int n = tal.size();
//	cout << tal[n - 1] << endl;
//	cout << tal.back();
//
//}



//Skriv ett program  innehåller en funktion : (C - program inte C++)
//void CreateBackwards(char* szSource, char* szDestination)
////Vi blundar för risken för overflow i detta uppgift!
//Vid anrop ska den skapa en ny sträng i szDestination som är szSource baklänges.
//Ex
//declare source / destination etc.
//CreateBackwards(source, destination);
//printf("%s baklänges blir %s", source, destination);
//Om source = "Stefan" skriver programmet
//Stefan baklänges blir nafetS
//
//int main()
//{
//	float pointz;
//	vector<float>points;
//	int judges;
//	cout << "How many judges?:";
//	cin >> judges;
//	for (int i = 0; i < judges; i++)
//	{
//		cout << "\nInsert your result:";
//		cin >> pointz;
//		points.push_back(pointz);
//	}
//
//	sort(points.begin(), points.end());
//	points.erase(points.begin());
//	points.pop_back();
//
//	float average = accumulate(points.begin(), points.end(), 0.0 / points.size();
//	cout << "The average is:" << average << endl;
//
//	return 0;
//
//}


//1. Write a program that reads a text file and prints its odd lines on the console

//int main()
//{
//	ifstream in_file;
//	in_file.open("poem.txt");
//	if (!in_file)
//	{
//		cerr << "Problem opening file!" << endl;
//		return 1;
//	}
//	in_file.close();
//	return 0;
//
//}

//int main()
//{
//
//	string hej = "Hello, World";
//	char hej1 = 'W';
//	size_t found = hej.find(hej1);
//	if (found != string::npos)
//	{
//		cout << found;
//	}
//
//	return 0;
//}

//int main()
//{
//	string b = "I am a C# hacker.";
//	string newstring = b.substr(0, 10);
//	cout << b.find("C#") << endl;
//	cout << newstring << endl;
//	cout << b.find("a", 7)<<endl;
//	cout << b.rfind("a") << endl;
//	cout << b.length() << endl;
//	b += "Master";
//	cout << b << endl;
//	return 0;
//
//}

//int main()
//{
//	string b = "I am a C# hacker.";
//	char word = 'a';
//	char word1 = 'C';
//	size_t position1 = b.find(word1);
//	size_t position = b.rfind(word);
//	//if (position != string::npos)
//	//	cout << "Found " << word << " at position " << position << endl;
//	//else
//	//	cout << "Sorry " << word << " Not found" << endl;
//	for (int i = 0; i < b.size(); i++)
//	{
//		if (i == position1)
//			cout << "C:s position är : " << i << " Längden av stringen är :" << b.length() << endl;
//	}
//
//	for (int i = 0; i < b.size(); i++)
//	{
//		if (b[i] == ' ')
//			cout << "\n";
//		else
//			cout << b[i] << endl;
//	}
//	return 0;
//}


//
//class Animal {
//
//private:
//	string name;
//	double height;
//	double weight;
//
//	static int numOfAnimals;
//
//
//public:
//	string getName() 
//	{
//		return name;
//	}
//	void setName(string name)
//	{
//		this->name = name;
//	}
//	double getHeight()
//	{
//		return height;
//	}
//	void setHeight(double height)
//	{
//		this->height = height;
//	}
//	double getWeight()
//	{
//		return weight;
//	}
//	void setWeight(double weight)
//	{
//		this->weight = weight;
//	}
//	void setAll(string, double, double);
//	Animal(string, double, double);
//	Animal();
//	~Animal();
//	static int GetNumOfAnimals()
//	{
//		return numOfAnimals;
//	}
//	void toString();
//
//};
//
//
//int Animal::numOfAnimals = 0;
//void Animal::setAll(string name, double height, double weight)
//{
//	this->name = name;
//	this->height = height;
//	this->weight = weight;
//	Animal::numOfAnimals++;
//
//}
//
//Animal::Animal(string name,double height,double weight) //Constructor, gör så du kan skriva in alla i en rad.
//{
//	this->name = name;
//	this->height = height;
//	this->weight = weight;
//	Animal::numOfAnimals++;
//
//}
//Animal::Animal()   //sätter ett startvärde på alla animals.
//{
//	this->name = "";
//	this->height = 0;
//	this->weight = 0;
//	Animal::numOfAnimals++;
//
//}
//
//Animal::~Animal()
//{
//	cout << "Animal " << this->name << "Destroyed" << endl;
//}
//
//void Animal::toString() //skriver ut name,height,weight.
//{
//	cout << this->name
//		<< " Is " 
//		<< this->height 
//		<<" cms tall and " 
//		<< this->weight
//		<< " kgs in weight" 
//		<< endl;
//}
//class Dog:public Animal 
//{
//private:
//	string sound = "Woff";
//
//public:
//	void makeSound()
//	{
//		cout << "The dog " << this->getName() << " says " << this->sound << endl;
//	}
//	Dog(string, double, double, string);//dog constructor
//	Dog() :Animal() {}; //dog constructor som ärver ifrån animal constructor.
//	void toString();
//
//};
//Dog::Dog(string name, double height, double weight, string sound) :
//	Animal(name, height, weight)
//{
//	this->sound = sound;
//}
//
//void Dog::toString()
//{
//cout << this->getName()
//<< " Is "
//<< this->getHeight()
//<< " cms tall and "
//<< this->getWeight()
//<< " kgs in weight and says "
//<< this->sound << endl;
//}
//
//
//
//
//int main()
//{
//	Animal fred;
//	fred.toString();
//	fred.setName("Fred");
//	fred.setHeight(33);
//	fred.setWeight(100);
//	fred.toString();
//	Animal freja("Freja", 50, 30);
//	freja.toString();
//	Dog spot("Spot", 35, 20, "Woooooff wof");
//	spot.toString();
//
//	cout << "Number of animals " << Animal::GetNumOfAnimals() << endl;
//
//	return 0;
//}



//int main()
//{
//	string aGe = "0";
//	cout << "Enter your age: ";
//	getline(cin, aGe);
//	int naGe = stoi(aGe);
//
//	if ((naGe >= 1) && (naGe <= 18))
//	{
//		cout << "Important Birthday!" << endl;
//	}
//	else if ((naGe == 21) || (naGe == 50))
//	{
//		cout << "Important Birthday!" << endl;
//	}
//	else if (naGe >= 65)
//	{
//		cout << "Important Birthday!" << endl;
//	}
//	else {
//		cout << "Not important Birthday!" << endl;
//	}
//	return 0;
//}
//Skriv ett program som matar in tal och summerar med tidigare inmatade tal tills man anger X eller x
//(då ska programmet avslutas)

//int main()
//{
//	string tal;
//	int sum = 0;
//	while (true)
//	{
//
//		cout << "Enter a number or x to exit:";
//		cin >> tal;
//		if ((tal == "x") || (tal == "X"))
//			break;
//
//		else
//		{
//			int Tal = stoi(tal);
//			sum += Tal;
//			cout << "Sum is now: " << sum << endl;
//
//		}
//
//	}
//	return 0;
//}
//}
//
//
//int main()
//{
//	int judges;
//	vector<float>points;
//	float pointz;
//	cout << "How many judges?:";
//	cin >> judges;
//	for (int i = 0; i < judges; i++)
//	{
//		cout << "Write your score:";
//		cin >> pointz;
//		points.push_back(pointz);
//	}
//
//	sort(points.begin(), points.end());
//	points.erase(points.begin());
//	points.pop_back();
//	for (float i = 0; i < points.size(); i++)
//	{
//		cout << points[i] << endl;
//	}
//	float average = (accumulate(points.begin(), points.end(), 0.0) / points.size());
//	float sum = 0.0;
//	for (float i = 0.0; i < points.size(); i++)
//	{
//		sum += points[i];
//	}
//	sum = sum / points.size();
//	cout << sum << endl;
//
//
//	cout << "The average is:" << average << endl;
//
//	return 0;
//}



////Skapa en klass ChristmasPresent.Den ska ha Name och ett Price(vad den kostar)
////Skapa en klass Person.Den ska ha Name och en lista med julklappar.
////Gör också så att det går att lägga till julklappar, och räkna fram totalen(vad alla personens julklappar kostar)
////Skapa nu(i main) tre personer.Skapa några julklappar för varje person och skriv en loop som går igenom alla personer,
////skriver ut dess namn och vad dess julklappar kostar.OBS: tänk på god OOP.
////Exempel på hur programmet ska se ut när man kör det :
////Stefan - ska få julklappar för totalt 4815kr
////Kerstin - ska få julklappar för totalt 15kr
////Oliver - ska få julklappar för totalt 1112 kr
//



//class ChristmasPresent
//{
//private:
//	string Name;
//	vector<int>julklappar;
//
//};
//int main()
//{
//	string mail;
//	cout << "Insert your email:";
//	cin >> mail;
//
//	bool correct = true;
//	int n = mail.find("@");
//	int n2 = mail.find("."); // find ger ett index på 0 ifrån det du ska hitta.
//	int len = mail.size();
//
//		if (len - n2 != 4 && len - n2 != 3) 
//		{
//			correct = false;
//		}
//		if(n==-1)
//		{
//			correct = false;
//		}
//		if (n2 == -1)
//		{
//			correct = false;
//		}
//		cout << mail << endl;
//	return 0;
//}





//int main()
//{
//	string mening;
//	cout << "Skriv in en mening";
//	getline(cin,mening);
//	int count = 0;
//	for (int i = 0; i < mening.length(); i++)
//	{
//		if (mening[i] == ' ')
//			count++;
//	}
//	cout << "Meningen bestar utav: " << count + 1 << " ord." << endl;
//	return 0;
//}





//4. Skapa en array som skall innehålla temperaturmätningar.Användaren får först upp
//en fråga om hur många mätningar som skall registreras.Sedan får denne ange
//värde för varje mätning.Detta skall vara decimaltal.Skriv sedan ut alla mätningar
//och avsluta med att ange en max och en medeltemperatur.


//int main()
//{
//	int many;
//	vector<float>temp;
//	vector<string>times;
//	float temps;
//	time_t t = time(NULL);
//	tm* now = localtime(&t);
//	cout << "how many mesasurements?:";
//	cin >> many;
//	for (int i = 0; i < many; i++)
//	{
//		cout << "Whats the temp?:";
//		cin >> temps;
//		temp.push_back(temps);
//	}
//	for (int i = 0; i < temp.size(); i++)
//	{
//		cout << temp[i] << endl;
//	}
//	sort(temp.begin(), temp.end());
//	float sum = 0;
//	for (int i = 0; i < temp.size(); i++)
//	{
//		sum += temp[i];
//	}
//	cout << "medeltemp = " << sum / temp.size() << " Maxvarde = " << temp.back();
//	return 0;
//	
//}



//class Person
//{
//private:
//	string name;
//	int age;
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string GetName()
//	{
//		return name;
//	}
//};
//template<class datatype>
//class MyList
//{
//	vector<datatype>v;
//public:
//	void Add(datatype i)
//	{
//		v.push_back(i);
//	}
//	int Count()
//	{
//		return v.size();
//	}
//	datatype GetAt(int index)
//	{
//		return v[index];
//	}
//};
//
//
//int main()
//{
//	Person a("Niklas", 30);
//	Person b("Salking", 25);
//	MyList<Person>nylist;
//	MyList<int>MyIntList;
//	MyList<float>MyFloatList;
//	nylist.Add(a);
//	nylist.Add(b);
//	MyIntList.Add(100);
//	MyFloatList.Add(100.50);
//	cout << nylist.Count();
//	cout << a.GetName();
//
//	return 0;
//}



//int CallFunction(int num)
//{
//	if (num == 0) throw std::invalid_argument("Num can't be 0");
//	return num + 1;
//}
//
//void TestMe(int num)
//{
//	int d = CallFunction(num);
//}
//
//void main()
//{
//	//Denna ska 
//	//skriva ut exception message (dvs Num can't be 0) //skriva ut Klar
//	try {
//		TestMe(0);
//	}
//	catch (invalid_argument & r)
//	{
//		cout << r.what();
//	}
//	catch (...)
//	{
//		cout << "hejhejhej";
//	}
//
//	try {
//		TestMe(1);
//		cout << "Det går";
//	}
//	catch (invalid_argument & r)
//	{
//		cout << r.what();
//	}
//	catch (...)-
//	{
//		cout << "";
//	}
//}


//6. Skapa ett program där användaren får mata in en inköpslista.Börja med att fråga
//användaren hur många varor den skall ha på sin lista.Gör en loop som gås igenom
//det antal gånger som användaren angivit.Inne i loopen skall tre frågor anges - Vilken
//vara som användaren vill lägga till - Vilket pris varan har – Vilket produktnummer.
//Spara alla dessa värden i en array.Loopa sedan igenom arrayen och skriv ut alla
//varor som användaren har angivit med alla uppgifter på skärmen

//class KopLista
//{
//private:
//	string vara;
//	float pris;
//	int prodnr;
//public:
//	KopLista(string vara, float pris, int prodnr)
//	{
//		this->vara = vara;
//		this->pris = pris;
//		this->prodnr = prodnr;
//	}
//	string GetVara()
//	{
//		return vara;
//	}
//	float GetPris()
//	{
//		return pris;
//	}
//	int GetProdnr()
//	{
//		return prodnr;
//	}
//};



//int main()
//{
//	vector<KopLista>lista;
//	int list;
//	string listvara;
//	float pris;
//	int produktnr;
//	cout << "Hur manga varor vill du ha pa listan?";
//	cin >> list;
//	for (int i = 0; i < list; i++) {
//		cout << "Vilken vara vill du lagga till?:";
//		cin >> listvara;
//		cout << "Vilket pris?:";
//		cin >> pris;
//		cout << "Produktnummer?:";
//		cin >> produktnr;
//		KopLista vara(listvara, pris, produktnr);
//		lista.push_back(vara);
//	}
//
//	for (int i = 0; i < lista.size(); i++)
//	{
//		KopLista vara = lista[i]; // variabel för att slippa skriva lista[i] hela tiden.
//		cout << vara.GetVara()<<vara.GetPris()<<vara.GetProdnr() << endl;
//	}
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
//typedef struct crd
//{
//	string cardNo;
//	bool active;
//} CARD;
//
//int main()
//{
//	vector<CARD> allaKort;
//
//	while (true)
//	{
//		int selection;
//		cout << "1 = Ny, 2 = lista\n";
//		cin >> selection;
//		if (selection == 1)
//		{
//			string cardNo;
//			cout << "Ange kortnummer:";
//			cin >> cardNo;
//			CARD nyaKortet;
//			nyaKortet.cardNo = cardNo;
//			allaKort.push_back(nyaKortet);
//		}
//		if (selection == 2)
//		{
//			for (CARD c : allaKort)
//			{
//				cout << c.cardNo << "\n";
//			}
//		}
//	}
//
//	string namn = "Stefan";
//	namn = namn + " Holmberg";
//	namn = "a";
//	cout << namn << "\n";
//	int age = 12;
//	cout << "Hello World!\n";
//	cout << "Jag är " << age << " år\n";
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void ReadFile()
//{
//	char line[255];
//	FILE* f = fopen(".\\Databas\\birds.txt", "r");
//	if (f == NULL)
//	{
//		printf("Kunde inte öppna filen\n");
//		return;
//	}
//	while (fgets(line, sizeof(line), f) != NULL)
//	{
//		printf("Fågeljävel:%s\n", line);
//	}
//	fclose(f);
//}
//
//
//int main()
//{
//	ReadFile();
//	FILE* f = fopen("c:\\kurser\\heja123.txt", "a");
//	//FILE* f = fopen("heja123.txt", "a");
//
//	int age = 8;
//
//	fprintf(f, "Hej åldern är %d mån %02d\n", age, 1);
//	fclose(f);
//	return 0;
//}
// Skriv en funktion som räknar nettolön för
//Timanställd
// Ska ta int arbetadeTimmar, int timLön, int
//SkatteSats
// Timlön är om inte annat anges alltid 120.
//Skattesats 30 % om inte annat anges
// Så den ska då returnera 70 % av 120 * timmar
// Anropa på olika sätt.Med en, två, tre värden

//
//int Netto(int arbetadeTimmar=0, int TimLon=120, float SkatteSats=0.70)
//{
//	return arbetadeTimmar * TimLon * SkatteSats;
//}

//int main()
//{
//	cout << Netto(100) << endl;
//	cout << Netto(10, 200) << endl;
//	cout << Netto(100, 150, 0.75) << endl;
//	return 0;
//}

//
//
//int LargestElementofVector(vector<int>test)
//{
//	int max = test[0];
//	for (int i = 1; i < test.size(); i++)
//	{
//		if (test[i] > max)
//			max = test[i];
//	}
//	return max;
//}
//
//int SmallestElementofVector(vector<int>test)
//{
//	int least = test[0];
//	for (int i = 1; i < test.size(); i++)
//	{
//		if (test[i] < least)
//			least = test[i];
//	}
//	return least;
//}
//

//int main()
//{
//	vector<int>test{ 10,20,30,40,50,60,70,80,90,100 };
//	int MAX = LargestElementofVector({ 10,20,30,40,50,60,70,80,90,100 });
//	cout << "Largest element of vector is: " << MAX << endl;
//	int Least = SmallestElementofVector(test);
//	cout << "Smallest element of vector is: " << Least << endl;
//	sort(test.rbegin(), test.rend());
//	cout << test[0] << endl << test[1] << endl << test[2] << endl;
//
//	return 0;
//}

//unsigned char DDRB;
//unsigned char PORTB;
//void _delay_ms(int ms)
//{
//	Sleep(ms);
//}
////#include<avr/io.h>
////#include<util/delay.h>
//
//int main()
//{
//	// set PINB0 to output in DDRB
//	DDRB |= 0b00000001;
//
//	while (1)
//	{
//		// set PINB0 high
//		PORTB |= 0b00000001;
//		_delay_ms(500);
//		// set PINB0 low
//		PORTB &= 0b11111110;
//		_delay_ms(500);
//	}
//}


//int main()
//{
//	srand(time(NULL));
//	int antalTipsRader = 10;
//	int antalTipsMatcher = 13;
//	int random;
//
//	for (int i = 0; i < antalTipsRader; i++)
//	{
//		cout << "Detta e tipsrad nummer " << i + 1 << endl;
//		cout << "-------------------------------" << endl;
//
//		for (int i = 0; i < antalTipsMatcher; i++)
//		{
//			random = rand() % 4;
//			if (random == 1)
//			{
//				cout << "Match " << i + 1 << " -  1" << endl;
//			}
//			else if (random == 2)
//			{
//				cout << "Match " << i + 1 << " -  X" << endl;
//			}
//			else
//			{
//				cout << "Match " << i + 1 << " -  2" << endl;
//			}
//
//			cout << endl;
//		}
//	}
//	return 0;
//}

//
//vector<string>repeatTimes(string s, int count)
//{
//	vector<string>repeat;
//	for (int i = 0; i < count; i++)
//	{
//		repeat.push_back(s);
//	}
//	return repeat;
//
//
//}
//
//int main()
//{
//	vector<string>repeated;
//	vector<string>repeated1;
//	repeated = repeatTimes("hello", 3);
//	repeated1 = repeatTimes("tomte", 5);
//	for (int i = 0; i < repeated.size(); i++)
//	{
//		cout << repeated[i] << endl;
//	}
//	for (int i = 0; i < repeated1.size(); i++)
//	{
//		cout << repeated1[i] << endl;
//	}
//	return 0;
//}
//


//int main()
//{
//	SetConsoleOutputCP(1252);
//	srand(time(NULL));
//	int random;
//	int val;
//	cout << "Vad väljer du? 1.Sten, 2.Sax, 3.Påse: " << endl;
//	cin >> val;
//	random = rand() % 3 + 1;
//	cout << "The computer chose: " << random << endl;
//	if (val == 1 && random == 1) {
//		cout << "Rock meets Rock its a tie!" << endl;
//	}
//	else if (val == 1 && random == 2) {
//		cout << "Rock is covered by Paper the computer wins!." << endl;
//	}
//	else if (val == 1 && random == 3) {
//		cout << "Rock crushes Scissors you win!" << endl;
//	}
//	else if (val == 2 && random == 1) {
//		cout << "Paper covers Rock you win!" << endl;
//	}
//	else if (val == 2 && random == 2) {
//		cout << "Paper meets Paper its a tie!" << endl;
//	}
//	else if (val == 2 && random == 3) {
//		cout << "Paper is cut by Scissors the computer wins!" << endl;
//	}
//	else if (val == 3 && random == 1) {
//		cout << "Scissors are crushed by Rock computer wins!" << endl;
//	}
//	else if (val == 3 && random == 2) {
//		cout << "Scissors cuts Paper you win!" << endl;
//	}
//	else if (val == 3 && random == 3) {
//		cout << "Scissors meet Scissors its a tie!" << endl;
//	}
//	else {
//		cout << "You didn't select 1, 2, or 3" << endl;
//	}
//	return 0;
//}


//Det finns en textfil med studerande.Den heter STUDERANDE.TXT och har följande innehåll(en rad per namn)
//Steve Rogers
//Tony Stark
//Peter Parker
//Stan Lee
//
//IT avdelningen behöver hjälp med att läsa denna fil och skapa en ny fil med deras epostadresser
//Så för varje rad gör du :
//Alla bokstäver till små
//mellanslag blir punkt
//och du lägger på  @nackademin.se
//
//
//Spara till ny fil : email.txt
//så denna fil ska bli
//steve.rogers@nackademin.se
//tony.stark@nackademin.se
//peter.parker@nackademin.se
//stan.lee@nackademin.se


//int main()
//{
//	ofstream out_file{ "email.txt" };
//	ifstream in_file{ "STUDERANDE.TXT" };
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
//	while (!in_file.eof())
//	{
//		in_file >> line;
//		for (size_t j = 0; j < line.length(); ++j)
//		{
//			line[j] = tolower(line[j]);
//		}
//		string space = " ";
//		string dot = ".";
//		int position = line.find(space);
//		while (position != string::npos)
//		{
//			line.replace(position, space.length(), dot);
//			position = line.find(space, position + 1);
//		}
//		return 0;
//	}
//}
////ifstream in_file{ "myfile.txt" };
//////	ofstream out_file{ "myfilecopy.txt" };
//
//
//#define NIKLAS_AGE 30
//
//void add(int &a)
//{
//	a = a + 12;
//}


//int main()
//{
//	int a = 5;
//	add(a);
//	cout << a << endl;
//	cout << " " << endl;
//	vector <int>v{ 1,5,3,7,5,7 };
//	sort(v.begin(), v.end());
//	for (auto i : v)
//		cout << i << endl;
//	reverse(v.begin(), v.end());
//	cout << " " << endl;
//	for (auto i : v)
//	{
//		cout << i << endl;
//	}
////	int sum;
////	sum = accumulate(v.begin(), v.end(),0);
////	max_element(v.begin(), v.end());
////	cout << " " << endl;
////	cout << sum << endl;
////
////	return 0;
////}
//
//
//int main()
//{
//	vector<char>alphabet(26);
//	iota(alphabet.begin(), alphabet.end(), 'a');
//	for (auto i : alphabet)
//	{
//		cout << i << ", ";
//
//	}
//	cout << " " << endl;
//	reverse(alphabet.begin(), alphabet.end());
//	for (auto i : alphabet)
//	{
//		cout << i << ", ";
//	}
//
//
//
//	return 0;
//}
//
//
//
//
//
//int main()
//{
	//vector<string>names;
	//ifstream in_file;
	//in_file.open("cars_of_the_world.txt");
	//string line;
	//if (!in_file)
	//{
	//	cerr << "Problem opening file.";
	//	return 1;
	//}
	//while (getline(in_file, line))
	//{
	//	names.push_back(line);
	//}
	//in_file.close();

	//sort(names.begin(), names.end(), [](auto& a, auto& b) {return a.size() < b.size();
	//	});

	//for (auto a : names)
	//{
	//	cout << a << endl;
	//}


	//vector<string>v;
	//ifstream in_file;
	//in_file.open(("kopiera.txt"));
	//string line;
	//if (!in_file)
	//{
	//	cerr << "Problem opening file.";
	//	return 1;
	//}
	//while (getline(in_file, line))
	//{
	//	v.push_back(line);
	//}
	//in_file.close();
	//int count = 0;
	//for (auto a : v) {
	//	if (a[0] == 'b')
	//	{
	//		count++;
	//	}
	//}
	//cout << count << endl;
	///*int count1 = 0;*/
	//int count1 = count_if(v.begin(), v.end(), [](auto b)
	//	{if (b[0] == 'b' || b[0] == 'B') { return true; }
	//	else return false; });
	//cout << "borjar pa b,B " << count1 << endl;

	//int count2 = 0;
	//int count2 = count_if(v.begin(), v.end(), [](auto b)
	//	{if (b[0] == 'D' || b[0] == 'd' || b.size() > 10) { return true; }
	//	else return false; });
	//cout << "borjar pa D,d " << count2 << endl;
	//string KAD;
	//bool findkad(find_if(v.begin(), v.end(), [](string KAD) { return KAD.find("kad") != string::npos; }) != v.end());
	//{
	//	if (findkad == true)
	//	{
	//		cout << "substringen finns" << endl;
	//	}
	//	else cout << "substringen finns inte!" << endl;
	//}
	//bool KADY = any_of(v.begin(), v.end(), [](auto b)
	//	{if (b.find("kad") != string::npos) { return true; }
	//	else return false; });

	//cout << (KADY ? "Ja" : "Nej") << ", det finns " << (KADY ? "" : "inga") << " Birds som innehåller kad" << endl;

	//for (auto b : v)
	//{
	//	transform(b.begin(), b.end(), b.begin(), ::toupper);
	//	{
	//		cout << b << ", " << endl;
	//	}
	//}
//	vector<string>mellanslag;
//	copy_if(v.begin(), v.end(), back_inserter(mellanslag),
//		[](string birdname) {return (birdname.find(' ') != string::npos);
//		});
//	for (string s : mellanslag)
//		cout << s << endl;
//	return 0;
//}
//	vector<char>v;
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), [](char ch) {
//		cout << ch << ",";
//		});
//
//
//	transform(v.begin(), v.end(), v.begin(), [] (string& str) {
//		transform(str.begin(), str.end(), str.begin(), ::toupper);
//		return str;
//	});
//	for (string s : v)
//	{
//		cout << s << endl;
//	}
//	return 0;
//}
//
//
//int main()
//{
//
//	vector<string>split;
//	ifstream in_file;
//	in_file.open("myfilecopy.txt");
//
//	string line;
//	if (!in_file)
//	{
//		cerr << "Cant open file!" << endl;
//		return 1;
//	}
//	while (in_file>>line)
//	{
//		split.push_back(line);
//	}
//	for (auto a : split)
//	{
//		cout << a << endl;
//	}
//	cout << endl;
//	sort(begin(split), end(split), [](string message1, string message2) {
//		if (message1 < message2)
//			return true;
//		return false;
//		});
//
//	for (auto b : split)
//	{
//		cout << b << endl;
//	}
//
//	cout << endl;
//	split.erase(unique(split.begin(), split.end()), split.end());
//	for (auto b : split)
//	{
//		cout << b << endl;
//	}
//
//	sort(begin(split), end(split), [](string message1, string message2) {
//		if (message1.length()==message2.length())
//			return (message1 < message2);
//		return message1.length() < message2.length();
//		});
//	for (auto b : split)
//	{
//		cout << b << endl;
//	}
//
//	return 0;
//
//}
//Count the number of words which are longer than a certain length, e.g five letters.The
//portion of words which exceeds this word length is printed, e.g as a percentage of the total
//number of words in the text read(this can be measure of the complexity of a text.)

