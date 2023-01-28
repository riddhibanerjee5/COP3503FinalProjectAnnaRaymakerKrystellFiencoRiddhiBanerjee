
#include <iostream>
#include <iomanip> 
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <array>
#include<map>
#include <stdexcept>
#include <algorithm>
#include <queue>
#include "msclr\marshal_cppstd.h"
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;
using namespace System::IO;
using namespace System::Collections::Generic;

using namespace std;


//MAP IMPLEMENTATION FUNCTIONS

void loadData_Map(string file);
void numberOfPeopleByType_Map(string type); //return number of people and names given category of restaurant
void numberOfPeopleByName_Map(string name); //return number of people given name of restaurant
void maxAndMinByType_Map(string type); //max and min by people given category
void maxAndMinOverall_Map(); //find restaurants with the max and min numbers of people overall
void sortAtoZbyType_Map(string type); //sort A-Z by category
void sortLowtoHighbyType_Map(string type); //sort low to high by category


//MAX/MIN HEAP IMPLEMENTATION FUCNTIONS

void loadData_Heap(string file);
void numberOfPeopleByType_Heap(string type); //return number of people and names given category of restaurant
void numberOfPeopleByName_Heap(string name); //return number of people given name of restaurant
void maxAndMinByType_Heap(string type); //max and min by people given category
void maxAndMinOverall_Heap(); //find restaurants with the max and min numbers of people overall
void sortAtoZbyType_Heap(string type); //sort A-Z by category
void sortLowtoHighbyType_Heap(string type); //sort low to high by category



//MAP IMPLEMENTATION

public class Restaurant {
public:
	string typeOfRestaurant;
	int numberOfPeople;

	Restaurant() {
		typeOfRestaurant = "";
		numberOfPeople = 0;
	}

	Restaurant(string typeOfRestaurant, int numberOfPeople) {
		this->typeOfRestaurant = typeOfRestaurant;
		this->numberOfPeople = numberOfPeople;
	}

};

map<string, Restaurant> myMap;
map<string, Restaurant>::iterator it;

void loadData_Map(string file) {
	string row;
	string key;
	string value1;
	string value2;
	ifstream files(file);
	if (files.is_open()) {
		while (getline(files, row, '\n')) {
			istringstream ss(row);
			Restaurant restaurant;
			getline(ss, value1, ',');
			if (value1 == "") {
				break;
			}
			getline(ss, key, ',');
			getline(ss, value2, ',');
			restaurant.typeOfRestaurant = value1;
			restaurant.numberOfPeople = stoi(value2);
			myMap[key] = restaurant;
		}

	}

	files.close();
}

void numberOfPeopleByType_Map(string type) {

	string largeString = "";

	for (it = myMap.begin(); it != myMap.end(); ++it) {
		if (it->second.typeOfRestaurant == type) {

			string input = "Restaurant name: " + it->first + ", Number of people: " + to_string(it->second.numberOfPeople) + "\n \n";
			largeString += input;
		}
	}

	String^ strInput = msclr::interop::marshal_as<String^>(largeString);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}

void numberOfPeopleByName_Map(string name) {

	string input = name + " has " + to_string(myMap[name].numberOfPeople) + " patrons right now. \n";
	String^ strInput = msclr::interop::marshal_as<String^>(input);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}

void maxAndMinByType_Map(string type) {

	string maxName = "";
	int maxNumber = 0;

	string minName = "";
	int minNumber = 100;

	for (it = myMap.begin(); it != myMap.end(); ++it) {
		if (it->second.typeOfRestaurant == type && it->second.numberOfPeople > maxNumber) {
			maxNumber = it->second.numberOfPeople;
			maxName = it->first;
		}
		if (it->second.typeOfRestaurant == type && it->second.numberOfPeople < minNumber) {
			minNumber = it->second.numberOfPeople;
			minName = it->first;
		}
	}

	string input1 = "The " + type + " restaurant with the max number of people is: " + maxName + " and has " + to_string(maxNumber) + " of patrons. \n";
	string input2 = "The " + type + " restaurant with the min number of people is: " + minName + " and has " + to_string(minNumber) + " of patrons. \n";
	
	String^ strInput = msclr::interop::marshal_as<String^>(input1 + input2);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}

void maxAndMinOverall_Map() {

	string maxName = "";
	string maxNum = "";
	int maxNumber = 0;

	string minName = "";
	int minNumber = 100;

	for (it = myMap.begin(); it != myMap.end(); ++it) {
		if (it->second.numberOfPeople > maxNumber) {
			maxNumber = it->second.numberOfPeople;
			maxName = it->first;
		}
		if (it->second.numberOfPeople < minNumber) {
			minNumber = it->second.numberOfPeople;
			minName = it->first;
		}
	}

	maxNum = to_string(maxNumber);

	string input1 = "The restaurant with the max number of people is: " + maxName + " and has " + maxNum + " of patrons. \n";

	string input2 = "The restaurant with the min number of people is: " + minName + " and has " + to_string(minNumber) + " of patrons. \n";
	String^ strInput = msclr::interop::marshal_as<String^>(input1 + input2);
	
	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}

void sortAtoZbyType_Map(string type) {

	vector<pair<string, int>> temp;

	string largeString = "";

	for (it = myMap.begin(); it != myMap.end(); ++it) {
		if (it->second.typeOfRestaurant == type) {
			temp.push_back(make_pair(it->first, it->second.numberOfPeople));
		}
	}

	int i, j, min_index;

	// Selection Sort
	for (i = 0; i < temp.size() - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < temp.size(); j++)
			if (temp[j].first < temp[min_index].first)
				min_index = j;

		swap(temp[min_index], temp[i]);
	}

	for (int i = 0; i < temp.size(); i++) {

		string input = "Restaurant name: " + temp[i].first + ", Number of people: " + to_string(temp[i].second) + "\n \n";
		largeString += input;
	}

	String^ strInput = msclr::interop::marshal_as<String^>(largeString);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}

void sortLowtoHighbyType_Map(string type) {

	vector<pair<string, int>> temp;

	string largeString = "";

	for (it = myMap.begin(); it != myMap.end(); ++it) {
		if (it->second.typeOfRestaurant == type) {
			temp.push_back(make_pair(it->first, it->second.numberOfPeople));
		}
	}

	int i, j, min_index;

	// Selection Sort
	for (i = 0; i < temp.size() - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < temp.size(); j++)
			if (temp[j].second < temp[min_index].second)
				min_index = j;

		swap(temp[min_index], temp[i]);
	}

	for (int i = 0; i < temp.size(); i++) {

		string input = "Restaurant name: " + temp[i].first +", Number of people: " + to_string(temp[i].second) + "\n \n";
		largeString += input;

	}

	String^ strInput = msclr::interop::marshal_as<String^>(largeString);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}


//MAX/MIN Heap Implementation

public class MaxHeap {
public:
	string typeOfRestaurant;
	int numberOfPeople;
	string name;

	MaxHeap() {
		typeOfRestaurant = "";
		numberOfPeople = 0;
		string name = "";
	}

	MaxHeap(string typeOfRestaurant, int numberOfPeople, string name) {
		this->typeOfRestaurant = typeOfRestaurant;
		this->numberOfPeople = numberOfPeople;
		this->name = name;
	}

};

public class MinHeap {
public:
	string typeOfRestaurant;
	unsigned int numberOfPeople;
	string name;

	MinHeap() {
		typeOfRestaurant = "";
		numberOfPeople = 0;
		string name = "";
	}

	MinHeap(string typeOfRestaurant, unsigned int numberOfPeople, string name) {
		this->typeOfRestaurant = typeOfRestaurant;
		this->numberOfPeople = numberOfPeople;
		this->name = name;
	}

};

public class MinLetterHeap {
public:
	string typeOfRestaurant;
	unsigned int numberOfPeople;
	string name;

	MinLetterHeap() {
		typeOfRestaurant = "";
		numberOfPeople = 0;
		string name = "";
	}

	MinLetterHeap(string typeOfRestaurant, unsigned int numberOfPeople, string name) {
		this->typeOfRestaurant = typeOfRestaurant;
		this->numberOfPeople = numberOfPeople;
		this->name = name;
	}

};

struct CompareHeightMax {
	bool operator()(MaxHeap const& lhs, MaxHeap const& rhs) {

		return lhs.numberOfPeople < rhs.numberOfPeople;
	}
};

struct CompareHeightMin {
	bool operator()(MinHeap const& lhs, MinHeap const& rhs) {

		return rhs.numberOfPeople < lhs.numberOfPeople;
	}
};

struct CompareLetterMin {
	bool operator()(MinLetterHeap const& lhs, MinLetterHeap const& rhs) {

		return rhs.name < lhs.name;
	}
};

priority_queue<MaxHeap, vector<MaxHeap>, CompareHeightMax> maxpq;

priority_queue<MinHeap, vector<MinHeap>, CompareHeightMin> minpq;

priority_queue<MinLetterHeap, vector<MinLetterHeap>, CompareLetterMin> minLetterpq;


void loadData_Heap(string file) { //WORKS
	string row;
	string value1;
	string value2;
	string value3;
	ifstream files(file);
	if (files.is_open()) {
		
		while (getline(files, row)) {
			istringstream ss(row);
			MaxHeap maxheap;
			MinHeap minheap;
			MinLetterHeap minLetterHeap;
			getline(ss, value1, ',');
			if (value1 == "") {
				break;
			}
			getline(ss, value2, ',');
			getline(ss, value3, ',');
			maxheap.typeOfRestaurant = value1;
			minheap.typeOfRestaurant = value1;
			minLetterHeap.typeOfRestaurant = value1;
			maxheap.numberOfPeople = stoi(value3);
			minheap.numberOfPeople = stoi(value3);
			minLetterHeap.numberOfPeople = stoi(value3);
			maxheap.name = value2;
			minheap.name = value2;
			minLetterHeap.name = value2;

			maxpq.push(maxheap);
			minpq.push(minheap);
			minLetterpq.push(minLetterHeap);
		}
	}

	files.close();
	
}

void maxAndMinOverall_Heap() { //WORKS

	MaxHeap maxdata = maxpq.top();
	MinHeap mindata = minpq.top();

	string maxName = maxdata.name;
	int maxNumber = maxdata.numberOfPeople;

	string minName = mindata.name;
	int minNumber = mindata.numberOfPeople;

	string input1 = "The restaurant with the max number of people is: " + maxName + " and has " + to_string(maxNumber) + " of patrons. \n";
	
	string input2 = "The restaurant with the min number of people is: " + minName + " and has " + to_string(minNumber) + " of patrons. \n";
	String^ strInput = msclr::interop::marshal_as<String^>(input1 + input2);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();

}

void maxAndMinByType_Heap(string type) { //WORKS

	priority_queue<MaxHeap, vector<MaxHeap>, CompareHeightMax> maxtemp;
	priority_queue<MinHeap, vector<MinHeap>, CompareHeightMin> mintemp;

	maxtemp = maxpq;
	mintemp = minpq;

	int sizeMax = maxtemp.size();
	int sizeMin = mintemp.size();

	String^ strInput1 = "";
	String^ strInput2 = "";

	for (int i = 0; i < sizeMax; i++) {
		if (maxtemp.top().typeOfRestaurant == type) {
			
			string input = "The " + type + " restaurant with the max number of people is: " + maxtemp.top().name + " and has " + to_string(maxtemp.top().numberOfPeople) + " patrons. \n";
			strInput1 = msclr::interop::marshal_as<String^>(input);

			break;
		}
		maxtemp.pop();
	}

	for (int i = 0; i < sizeMin; i++) {
		if (mintemp.top().typeOfRestaurant == type) {
			
			string input = "The " + type + " restaurant with the min number of people is: " + mintemp.top().name + " and has " + to_string(mintemp.top().numberOfPeople) + " patrons. \n";
			strInput2 = msclr::interop::marshal_as<String^>(input);

			break;
		}
		mintemp.pop();
	}

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput1 + strInput2);
	outfile->Close();
}

void sortLowtoHighbyType_Heap(string type) { //WORKS

	string largeString = "";
	priority_queue<MinHeap, vector<MinHeap>, CompareHeightMin> mintemp;
	mintemp = minpq;

	int size = mintemp.size();

	for (int i = 0; i < size; i++) {
		MinHeap mindata = mintemp.top();
		if (mindata.typeOfRestaurant == type) {
			
			string input = "Restaurant name: " + mindata.name + ", Number of people: " + to_string(mindata.numberOfPeople) + "\n \n";
			largeString += input;

		}
		mintemp.pop();
	}

	String^ strInput = msclr::interop::marshal_as<String^>(largeString);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();
}

void numberOfPeopleByType_Heap(string type) { //WORKS

	string largeString = "";
	priority_queue<MinHeap, vector<MinHeap>, CompareHeightMin> mintemp;

	mintemp = minpq;

	int size = mintemp.size();

	for (int i = 0; i < size; i++) {
		if (mintemp.top().typeOfRestaurant == type) {
			
			string input = "Restaurant name: " + mintemp.top().name + ", Number of people: " + to_string(mintemp.top().numberOfPeople) + "\n \n";
			largeString += input;
			
		}
		mintemp.pop();
	}

	String^ strInput = msclr::interop::marshal_as<String^>(largeString);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();
}

void numberOfPeopleByName_Heap(string name) { //WORKS
	priority_queue<MaxHeap, vector<MaxHeap>, CompareHeightMax> maxtemp;
	maxtemp = maxpq;
	String^ strInput = "";
	int size = maxtemp.size();
	for (int i = 0; i < size; i++) {
		if (maxtemp.top().name == name) {
			
			string input = name + " has " + to_string(maxtemp.top().numberOfPeople) + " patrons right now. \n";
			strInput = msclr::interop::marshal_as<String^>(input);

			break;
		}
		maxtemp.pop();
	}

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();
}

void sortAtoZbyType_Heap(string type) { //WORKS

	string largeString = "";
	priority_queue<MinLetterHeap, vector<MinLetterHeap>, CompareLetterMin> minLetterTemp;

	minLetterTemp = minLetterpq;

	int size = minLetterTemp.size();

	for (int i = 0; i < size; i++) {

		if (minLetterTemp.top().typeOfRestaurant == type) {
			
			string input = "Restaurant name: " + minLetterTemp.top().name + ", Number of people: " + to_string(minLetterTemp.top().numberOfPeople) + "\n \n";
			largeString += input;

		}
		minLetterTemp.pop();
	}

	String^ strInput = msclr::interop::marshal_as<String^>(largeString);

	StreamWriter^ outfile = gcnew StreamWriter("output.txt");
	outfile->Write(strInput);
	outfile->Close();
}
