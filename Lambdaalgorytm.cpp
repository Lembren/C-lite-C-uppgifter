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
#include <set>
using namespace std;



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
//	return 0;
//}
//
//int main()
//{
//	vector<string>names;
//	ifstream in_file("cars_of_the_world.txt",ios::in);
//	string line;
//	if (!in_file)
//	{
//		cerr << "Problem opening file.";
//		return 1;
//	}
//	while (getline(in_file, line))
//	{
//		names.push_back(line);
//	}
//	in_file.close();
//
//	sort(names.begin(), names.end(), [](auto& a, auto& b) {return a.size() < b.size();
//		});
//
//	for (auto a : names)
//	{
//		cout << a << endl;
//	}
//
//
//	vector<string>v;
//	ifstream in_file(("kopiera.txt",ios::in);
//	string line;
//	if (!in_file)
//	{
//		cerr << "Problem opening file.";
//		return 1;
//	}
//	while (getline(in_file, line))
//	{
//		v.push_back(line);
//	}
//	in_file.close();
//	int count = 0;
//	for (auto a : v) {
//		if (a[0] == 'b')
//		{
//			count++;
//
//		}
//
//	}
//	cout << count << endl;
//	/*int count1 = 0;*/
//	int count1 = count_if(v.begin(), v.end(), [](auto b)
//		{if (b[0] == 'b' || b[0] == 'B') { return true; }
//		else return false; });
//	cout << "borjar pa b,B " << count1 << endl;
//
//	int count2 = 0;
//	int count2 = count_if(v.begin(), v.end(), [](auto b)
//		{if (b[0] == 'D' || b[0] == 'd' || b.size() > 10) { return true; }
//		else return false; });
//	cout << "borjar pa D,d " << count2 << endl;
//
//	string KAD;
//	bool findkad(find_if(v.begin(), v.end(), [](string KAD) { return KAD.find("kad") != string::npos; }) != v.end());
//	{
//		if (findkad == true)
//		{
//			cout << "substringen finns" << endl;
//		}
//		else cout << "substringen finns inte!" << endl;
//	}
//	bool KADY = any_of(v.begin(), v.end(), [](auto b)
//		{if (b.find("kad") != string::npos) { return true; }
//		else return false; });
//
//	cout << (KADY ? "Ja" : "Nej") << ", det finns " << (KADY ? "" : "inga") << " Birds som innehåller kad" << endl;
//
//	for (auto b : v)
//	{
//		transform(b.begin(), b.end(), b.begin(), ::toupper);
//		{
//			cout << b << ", " << endl;
//		}
//	}
//
//	vector<string>mellanslag;
//	copy_if(v.begin(), v.end(), back_inserter(mellanslag),
//		[](string birdname) {return (birdname.find(' ') != string::npos);
//		});
//	for (string s : mellanslag)
//		cout << s << endl;
//
//	vector<char>v;
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), [](char ch) {
//		cout << ch << ",";
//		});
//
//
//	transform(v.begin(), v.end(), v.begin(), [](string& str) {
//		transform(str.begin(), str.end(), str.begin(), ::toupper);
//		return str;
//		});
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
//	string line;
//	if (!in_file)
//	{
//		cerr << "Cant open file!" << endl;
//		return 1;
//	}
//	while (in_file >> line)
//	{
//		split.push_back(line);
//	}
//	//for (auto a : split)
//	//{
//	//	cout << a << endl;
//	//}
//	//cout << endl;
//	sort(begin(split), end(split), [](string message1, string message2) {
//		if (message1 < message2)
//			return true;
//		return false;
//		});
//
//	//for (auto b : split)
//	//{
//	//	cout << b << endl;
//	//}
//
//	cout << endl;
//	split.erase(unique(split.begin(), split.end()), split.end());
//	//for (auto b : split)
//	//{
//	//	cout << b << endl;
//	//}
//
//	sort(begin(split), end(split), [](string message1, string message2) {
//		if (message1.length() == message2.length())
//			return (message1 < message2);
//		return message1.length() < message2.length();
//		});
//	for (auto b : split)
//	{
//		cout << b << endl;
//	}
//	int antal = count_if(begin(split), end(split), [](string word) {
//		return word.length() > 5;
//		});
//	int antal1 = count_if(begin(split), end(split), [](string word1)
//		{
//			return word1.length() < 5 and word1.length() > 2;
//		});
//	cout << "ord langre and tva mindre an 5 : " << antal1 << endl;
//
//	
//	cout << "Ord langre an 5: " << antal << endl;
//	vector<string> badWords = {
//		"and", "but", "do", "if", "in", "is", "its", "not", "of", "or" , "that", "the", "to"
//	};
//
//	cout << split.size() << endl;
//	split.erase(remove_if(begin(split), end(split), [badWords](string word) {
//		bool ret = find(begin(badWords), end(badWords), word) != badWords.end();
//		return ret;
//		}), end(split));
//
//	auto iterator = remove_if(begin(split), end(split), [badWords](string word) {
//		bool ret = find(begin(badWords), end(badWords), word) != badWords.end();
//		return ret;
//		});
//	split.erase(iterator, end(split));
//
//
//	cout << split.size() << endl;
//
//		return 0;
//}



//template<class utbytbarType>   //template är en mall, blir en funktionskod utifrån mallen och stoppar in datatypen som passar.
//
//float CalculateTax(utbytbarType a1)
//{
//	if(a1>10000)
//		return a1 * 0.5f;
//	return a1 * 0.4f;
//}
//int main()
//{
//	float tax = CalculateTax(5000);
//	tax = CalculateTax(12000);
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//template <typename T, int N>
//class Array {
//    int size{ N };           // how do we get the N???
//    T values[N];        // the N needs to ne known at compile-time!
//
//    friend std::ostream& operator<<(std::ostream& os, const Array<T, N>& arr) {
//        os << "[ ";
//        for (const auto& val : arr.values)
//            os << val << " ";
//        os << "]" << std::endl;
//        return os;
//    }
//public:
//    Array() = default;
//    Array(T init_val) {
//        for (auto& item : values)
//            item = init_val;
//    }
//    void fill(T val) {
//        for (auto& item : values)
//            item = val;
//    }
//    int get_size() const {
//        return size;
//    }
//    // overloaded subscript operator for easy use
//    T& operator[](int index) {
//        return values[index];
//    }
//};
//
//
//int main() {
//
//    Array<int, 5> nums;
//    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
//    std::cout << nums << std::endl;
//
//    nums.fill(0);
//    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
//    std::cout << nums << std::endl;
//
//    nums.fill(10);
//    std::cout << nums << std::endl;
//
//    nums[0] = 1000;
//    nums[3] = 2000;
//    std::cout << nums << std::endl;
//
//    Array<int, 100> nums2{ 1 };
//    std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
//    std::cout << nums2 << std::endl;
//
//    Array<std::string, 10> strings(std::string{ "Frank" });
//    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
//    std::cout << strings << std::endl;
//
//    strings[0] = std::string{ "Larry" };
//    std::cout << strings << std::endl;
//
//    strings.fill(std::string{ "X" });
//    std::cout << strings << std::endl;
//
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <cctype> 
//
//class Person {
//    std::string name;
//    int age;
//public:
//    Person() = default;
//    Person(std::string name, int age)
//        : name{ name }, age{ age }  {}
//    bool operator<(const Person& rhs) const {
//        return this->age < rhs.age;
//    }
//    bool operator==(const Person& rhs) const {
//        return (this->name == rhs.name && this->age == rhs.age);
//    }
//};


//void find_test() {
//    std::cout << "\n========================" << std::endl;
//
//    std::vector<int> vec{ 1,2,3,4,5 };
//
//    auto loc = std::find(std::begin(vec), std::end(vec), 1);
//
//    if (loc != std::end(vec))
//        std::cout << "Found the number: " << *loc << std::endl;
//    else
//        std::cout << "Couldn't find the number" << std::endl;
//
//    std::list<Person> players{
//        {"Larry", 18},
//        {"Moe", 20},
//        {"Curly", 21}
//    };
//
//    auto loc1 = std::find(players.begin(), players.end(), Person{ "Moe", 20 });
//    if (loc1 != players.end())
//        std::cout << "Found  Moe" << std::endl;
//    else
//        std::cout << "Moe not found" << std::endl;
//}
//
//// Count the number of elements in a container
//void count_test() {
//    std::cout << "\n========================" << std::endl;
//
//    std::vector<int> vec{ 1,2,3,4,5,1,2,1 };
//
//    int num = std::count(vec.begin(), vec.end(), 1);
//    std::cout << num << " occurrences found" << std::endl;
//}

//void count_if_test() {
//    std::cout << "\n========================" << std::endl;
//
//    // count only if the element is even
//    std::vector<int> vec{ 1,2,3,4,5,1,2,1,100 };
//    int num = std::count_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
//    std::cout << num << " even numbers found" << std::endl;
//
//    num = std::count_if(vec.begin(), vec.end(), [](int x) { return x % 2 != 0; });
//    std::cout << num << " odd numbers found" << std::endl;
//
//    // how can we determine how many elements in vec are >= 5?
//    num = std::count_if(vec.begin(), vec.end(), [](int x) { return x >= 5;   });
//    std::cout << num << "  numbers are >= 5" << std::endl;
//
//}
//
//// Replace occurrences of elements in a container
//void replace_test() {
//    std::cout << "\n========================" << std::endl;
//
//    std::vector<int> vec{ 1,2,3,4,5,1,2,1 };
//    for (auto i : vec) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//
//    std::replace(vec.begin(), vec.end(), 1, 100);
//    for (auto i : vec) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
//
//void all_of_test() {
//    std::vector<int> vec1{ 1,3,5,7,9,1,3,13,19,5 };
//    if (std::all_of(vec1.begin(), vec1.end(), [](int x) { return x > 10; }))
//        std::cout << "All the elements are > 10" << std::endl;
//    else
//        std::cout << "Not all the elements are > 10" << std::endl;
//
//    if (std::all_of(vec1.begin(), vec1.end(), [](int x) { return x < 20; }))
//        std::cout << "All the elements are < 20" << std::endl;
//    else
//        std::cout << "Not all the elements are < 20" << std::endl;
//}
//
//void string_transform_test() {
//    std::cout << "\n========================" << std::endl;
//
//    std::string str1{ "This is a test" };
//    std::cout << "Before transform: " << str1 << std::endl;
//    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
//    std::cout << "After transform: " << str1 << std::endl;
//}
//
//int main() {
//    find_test();
//    //    count_test();
//    //    count_if_test();
//    //    replace_test();
//    //    all_of_test();
//    //    string_transform_test();
//
//    return 0;
//}
//

//int main()
//{
//	ifstream in_file("Kopiera.txt",ios::in);
//	vector<string>birds;
//	string line;
//	if (!in_file)
//	{
//		cerr << "File does not exist!";
//		return 1;
//	}
//	while (getline(in_file, line))
//	{
//		birds.push_back(line);
//	}
//	for (string& s : birds) {
//		std::transform(s.begin(), s.end(), s.begin(),
//			[](char c) { return std::toupper(c); });
//	}
//	for(auto s:birds)
//	{ 
//		cout << s << endl;
//	}
//	
//	return 0;
//
//}


//			
//int main()
//{
//	SetConsoleOutputCP(1252);
//	ifstream infile("kopiera.txt", ios::in);
//	vector<string>v;
//	string line;
//	if (!infile)
//	{
//		cerr << "File not found!";
//		return 1;
//	}
//	while (getline(infile, line))
//	{
//		v.push_back(line);
//	}
//	vector<string>mellanslag;
//	copy_if(v.begin(), v.end(), back_inserter(mellanslag),
//			[](string birdname) {return (birdname.find(' ') != string::npos);
//			});
//
//		//for (auto a : mellanslag)
//		//{
//		//	cout << a << endl;
//		//}
//		cout << endl;
//		sort(begin(mellanslag), end(mellanslag), [](string a1, string a2)
//			{
//				if (a1.length() < a2.length())
//				return true;
//		return false; 
//			});
//		//for (auto a : mellanslag)
//		//{
//		//	cout << a << endl;
//		//}
//		sort(mellanslag.begin(), mellanslag.end());
//		mellanslag.erase(unique(mellanslag.begin(), mellanslag.end()), mellanslag.end());
//		//for (auto a : mellanslag)
//		//{
//		//	cout << a << endl;
//		//}
//		sort(begin(mellanslag), end(mellanslag), [](string str1, string str2)
//			{
//				if (str1.length() == str1.length())
//					return (str1 < str2);
//				return str1.length() < str2.length();
//
//			});
//		cout << endl;
//		for (auto a : mellanslag)
//		{
//			cout << a << endl;
//		}
//
//	return 0;
//}
//
//
//int main()
//{
//	vector<string> badWords = {
//		"and", "but", "do", "if", "in", "is", "its", "not", "of", "or" , "that", "the", "to" };
//
//	vector<string>words = { "hej","do","in","helloooo","not","what","and" };
//
//	words.erase(remove_if(begin(words), end(words), [badWords](string word1) {
//		bool ret = find(begin(badWords), end(badWords), word1) != badWords.end();
//		return ret; }), end(words));
//
//	for (auto a : words)
//	{
//		cout << a << endl;
//	}
//
//	return 0;
//}