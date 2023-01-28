#pragma once
#include <iostream>
#include <iomanip> 
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <array>
#include <ctime>
#include<map>
#include <stdexcept>
#include <algorithm>
#include <queue>
#include "msclr\marshal_cppstd.h"  //https://docs.microsoft.com/en-us/cpp/dotnet/overview-of-marshaling-in-cpp?redirectedfrom=MSDN&view=msvc-160
// https://stackoverflow.com/questions/946813/c-cli-converting-from-systemstring-to-stdstring

using namespace std;
extern void loadData_Map(string file);
extern void numberOfPeopleByType_Map(string type); //return number of people and names given category of restaurant
extern void numberOfPeopleByName_Map(string name); //return number of people given name of restaurant
extern void maxAndMinByType_Map(string type); //max and min by people given category
extern void maxAndMinOverall_Map(); //find restaurants with the max and min numbers of people overall
extern void sortAtoZbyType_Map(string type); //sort A-Z by category
extern void sortLowtoHighbyType_Map(string type); //sort low to high by category

extern void loadData_Heap(string file);
extern void numberOfPeopleByType_Heap(string type); //return number of people and names given category of restaurant
extern void numberOfPeopleByName_Heap(string name); //return number of people given name of restaurant
extern void maxAndMinByType_Heap(string type); //max and min by people given category
extern void maxAndMinOverall_Heap(); //find restaurants with the max and min numbers of people overall
extern void sortAtoZbyType_Heap(string type); //sort A-Z by category
extern void sortLowtoHighbyType_Heap(string type); //sort low to high by category

namespace COPFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ SearchPeopleByCategoryMapInputBox;
	private: System::Windows::Forms::Button^ SearchPeopleByCategoryMapButton;
	protected:




	private: System::Windows::Forms::Label^ InputLabel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ loadDataButtonMap;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ MaxMinMap;
	private: System::Windows::Forms::Button^ loadDataButtonHeap;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ MapHeader;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ MaxMinHeap;
	private: System::Windows::Forms::Label^ InputLabel2;
	private: System::Windows::Forms::TextBox^ SearchPeopleByNameMapInputBox;

	private: System::Windows::Forms::Button^ SearchPeopleByNameMapButton;
	private: System::Windows::Forms::Label^ MaxMinByCategoryMapLabel;


	private: System::Windows::Forms::TextBox^ MaxMinByCategoryMapInputBox;
	private: System::Windows::Forms::Button^ MaxMinByCategoryMapButton;


	private: System::Windows::Forms::Label^ SortAToZMapLabel;
	private: System::Windows::Forms::TextBox^ SortAToZMapInputBox;
	private: System::Windows::Forms::Button^ SortAToZMapButton;
	private: System::Windows::Forms::Label^ SortLowToHighMapLabel;
	private: System::Windows::Forms::TextBox^ SortLowtoHighMapInputBox;
	private: System::Windows::Forms::Button^ SortLowToHighMapButton;
	private: System::Windows::Forms::Label^ SearchByCategoryHeapLabel;
	private: System::Windows::Forms::Label^ SearchPeopleByNameHeapLabel;
	private: System::Windows::Forms::Label^ MaxMinByCategoryHeapLabel;
	private: System::Windows::Forms::Label^ SortAToZHeapLabel;
	private: System::Windows::Forms::Label^ SortLowToHighHeapLabel;
	private: System::Windows::Forms::TextBox^ SearchPeopleByCategoryHeapInputBox;
	private: System::Windows::Forms::TextBox^ SearchPeopleByNameHeapInputBox;
	private: System::Windows::Forms::TextBox^ MaxMinByCategoryHeapInputBox;
	private: System::Windows::Forms::TextBox^ SortAToZHeapInputBox;
	private: System::Windows::Forms::TextBox^ SortLowToHighHeapInputBox;
	private: System::Windows::Forms::Button^ SearchPeopleByCategoryHeapButton;
	private: System::Windows::Forms::Button^ SearchPeopleByNameHeapButton;
	private: System::Windows::Forms::Button^ MaxMinByCategoryHeapButton;
	private: System::Windows::Forms::Button^ SortAToZHeapButton;
	private: System::Windows::Forms::Button^ SortLowToHighHeapButton;
	private: System::Windows::Forms::Label^ MapTimeLabel;
	private: System::Windows::Forms::Label^ MapTimeSecondsLabel;
	private: System::Windows::Forms::Button^ ResetTimerButton;
	private: System::Windows::Forms::Label^ HeapTimeLabel;
	private: System::Windows::Forms::Label^ HeapTimeSecondsLabel;
	private: System::Windows::Forms::Button^ HeapResetTimerButton;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->SearchPeopleByCategoryMapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchPeopleByCategoryMapButton = (gcnew System::Windows::Forms::Button());
			this->InputLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loadDataButtonMap = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->MaxMinMap = (gcnew System::Windows::Forms::Button());
			this->loadDataButtonHeap = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MapHeader = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MaxMinHeap = (gcnew System::Windows::Forms::Button());
			this->InputLabel2 = (gcnew System::Windows::Forms::Label());
			this->SearchPeopleByNameMapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchPeopleByNameMapButton = (gcnew System::Windows::Forms::Button());
			this->MaxMinByCategoryMapLabel = (gcnew System::Windows::Forms::Label());
			this->MaxMinByCategoryMapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxMinByCategoryMapButton = (gcnew System::Windows::Forms::Button());
			this->SortAToZMapLabel = (gcnew System::Windows::Forms::Label());
			this->SortAToZMapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SortAToZMapButton = (gcnew System::Windows::Forms::Button());
			this->SortLowToHighMapLabel = (gcnew System::Windows::Forms::Label());
			this->SortLowtoHighMapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SortLowToHighMapButton = (gcnew System::Windows::Forms::Button());
			this->SearchByCategoryHeapLabel = (gcnew System::Windows::Forms::Label());
			this->SearchPeopleByNameHeapLabel = (gcnew System::Windows::Forms::Label());
			this->MaxMinByCategoryHeapLabel = (gcnew System::Windows::Forms::Label());
			this->SortAToZHeapLabel = (gcnew System::Windows::Forms::Label());
			this->SortLowToHighHeapLabel = (gcnew System::Windows::Forms::Label());
			this->SearchPeopleByCategoryHeapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchPeopleByNameHeapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxMinByCategoryHeapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SortAToZHeapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SortLowToHighHeapInputBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchPeopleByCategoryHeapButton = (gcnew System::Windows::Forms::Button());
			this->SearchPeopleByNameHeapButton = (gcnew System::Windows::Forms::Button());
			this->MaxMinByCategoryHeapButton = (gcnew System::Windows::Forms::Button());
			this->SortAToZHeapButton = (gcnew System::Windows::Forms::Button());
			this->SortLowToHighHeapButton = (gcnew System::Windows::Forms::Button());
			this->MapTimeLabel = (gcnew System::Windows::Forms::Label());
			this->MapTimeSecondsLabel = (gcnew System::Windows::Forms::Label());
			this->ResetTimerButton = (gcnew System::Windows::Forms::Button());
			this->HeapTimeLabel = (gcnew System::Windows::Forms::Label());
			this->HeapTimeSecondsLabel = (gcnew System::Windows::Forms::Label());
			this->HeapResetTimerButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// SearchPeopleByCategoryMapInputBox
			// 
			this->SearchPeopleByCategoryMapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchPeopleByCategoryMapInputBox->Location = System::Drawing::Point(333, 334);
			this->SearchPeopleByCategoryMapInputBox->Name = L"SearchPeopleByCategoryMapInputBox";
			this->SearchPeopleByCategoryMapInputBox->Size = System::Drawing::Size(254, 34);
			this->SearchPeopleByCategoryMapInputBox->TabIndex = 2;
			// 
			// SearchPeopleByCategoryMapButton
			// 
			this->SearchPeopleByCategoryMapButton->Location = System::Drawing::Point(606, 338);
			this->SearchPeopleByCategoryMapButton->Name = L"SearchPeopleByCategoryMapButton";
			this->SearchPeopleByCategoryMapButton->Size = System::Drawing::Size(80, 30);
			this->SearchPeopleByCategoryMapButton->TabIndex = 3;
			this->SearchPeopleByCategoryMapButton->Text = L"Search";
			this->SearchPeopleByCategoryMapButton->UseVisualStyleBackColor = true;
			this->SearchPeopleByCategoryMapButton->Click += gcnew System::EventHandler(this, &MyForm::SearchPeopleByCategoryMapButton_Click);
			// 
			// InputLabel
			// 
			this->InputLabel->AutoSize = true;
			this->InputLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputLabel->Location = System::Drawing::Point(12, 343);
			this->InputLabel->Name = L"InputLabel";
			this->InputLabel->Size = System::Drawing::Size(271, 20);
			this->InputLabel->TabIndex = 4;
			this->InputLabel->Text = L"Search By Restaurant Category:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-8, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1938, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// loadDataButtonMap
			// 
			this->loadDataButtonMap->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loadDataButtonMap->Location = System::Drawing::Point(16, 227);
			this->loadDataButtonMap->Name = L"loadDataButtonMap";
			this->loadDataButtonMap->Size = System::Drawing::Size(287, 64);
			this->loadDataButtonMap->TabIndex = 8;
			this->loadDataButtonMap->Text = L"Load Data with Map";
			this->loadDataButtonMap->UseVisualStyleBackColor = true;
			this->loadDataButtonMap->Click += gcnew System::EventHandler(this, &MyForm::loadDataButtonMap_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(264, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(866, 44);
			this->label4->TabIndex = 9;
			this->label4->Text = L"COVID-19 People Tracker: Restaurant Edition";
			// 
			// MaxMinMap
			// 
			this->MaxMinMap->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaxMinMap->Location = System::Drawing::Point(206, 661);
			this->MaxMinMap->Name = L"MaxMinMap";
			this->MaxMinMap->Size = System::Drawing::Size(192, 64);
			this->MaxMinMap->TabIndex = 10;
			this->MaxMinMap->Text = L"Find Max and Min Patrons Using a Map";
			this->MaxMinMap->UseVisualStyleBackColor = true;
			this->MaxMinMap->Click += gcnew System::EventHandler(this, &MyForm::MaxMinMap_Click);
			// 
			// loadDataButtonHeap
			// 
			this->loadDataButtonHeap->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->loadDataButtonHeap->Location = System::Drawing::Point(787, 227);
			this->loadDataButtonHeap->Name = L"loadDataButtonHeap";
			this->loadDataButtonHeap->Size = System::Drawing::Size(287, 64);
			this->loadDataButtonHeap->TabIndex = 11;
			this->loadDataButtonHeap->Text = L"Load Data with Heap";
			this->loadDataButtonHeap->UseMnemonic = false;
			this->loadDataButtonHeap->UseVisualStyleBackColor = true;
			this->loadDataButtonHeap->Click += gcnew System::EventHandler(this, &MyForm::loadDataButtonHeap_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(703, 146);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(34, 674);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// MapHeader
			// 
			this->MapHeader->AutoSize = true;
			this->MapHeader->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MapHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->MapHeader->Location = System::Drawing::Point(266, 178);
			this->MapHeader->Name = L"MapHeader";
			this->MapHeader->Size = System::Drawing::Size(73, 32);
			this->MapHeader->TabIndex = 13;
			this->MapHeader->Text = L"Map";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1042, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 32);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Heap";
			// 
			// MaxMinHeap
			// 
			this->MaxMinHeap->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaxMinHeap->Location = System::Drawing::Point(1048, 661);
			this->MaxMinHeap->Name = L"MaxMinHeap";
			this->MaxMinHeap->Size = System::Drawing::Size(192, 64);
			this->MaxMinHeap->TabIndex = 15;
			this->MaxMinHeap->Text = L"Find Max and Min Patrons Using a Heap";
			this->MaxMinHeap->UseVisualStyleBackColor = true;
			this->MaxMinHeap->Click += gcnew System::EventHandler(this, &MyForm::MaxMinHeap_Click);
			// 
			// InputLabel2
			// 
			this->InputLabel2->AutoSize = true;
			this->InputLabel2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputLabel2->Location = System::Drawing::Point(12, 402);
			this->InputLabel2->Name = L"InputLabel2";
			this->InputLabel2->Size = System::Drawing::Size(243, 20);
			this->InputLabel2->TabIndex = 16;
			this->InputLabel2->Text = L"Search By Restaurant Name:";
			// 
			// SearchPeopleByNameMapInputBox
			// 
			this->SearchPeopleByNameMapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchPeopleByNameMapInputBox->Location = System::Drawing::Point(333, 392);
			this->SearchPeopleByNameMapInputBox->Name = L"SearchPeopleByNameMapInputBox";
			this->SearchPeopleByNameMapInputBox->Size = System::Drawing::Size(254, 34);
			this->SearchPeopleByNameMapInputBox->TabIndex = 17;
			// 
			// SearchPeopleByNameMapButton
			// 
			this->SearchPeopleByNameMapButton->Location = System::Drawing::Point(606, 396);
			this->SearchPeopleByNameMapButton->Name = L"SearchPeopleByNameMapButton";
			this->SearchPeopleByNameMapButton->Size = System::Drawing::Size(80, 30);
			this->SearchPeopleByNameMapButton->TabIndex = 18;
			this->SearchPeopleByNameMapButton->Text = L"Search";
			this->SearchPeopleByNameMapButton->UseVisualStyleBackColor = true;
			this->SearchPeopleByNameMapButton->Click += gcnew System::EventHandler(this, &MyForm::SearchPeopleByNameMapButton_Click);
			// 
			// MaxMinByCategoryMapLabel
			// 
			this->MaxMinByCategoryMapLabel->AutoSize = true;
			this->MaxMinByCategoryMapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MaxMinByCategoryMapLabel->Location = System::Drawing::Point(12, 462);
			this->MaxMinByCategoryMapLabel->Name = L"MaxMinByCategoryMapLabel";
			this->MaxMinByCategoryMapLabel->Size = System::Drawing::Size(248, 20);
			this->MaxMinByCategoryMapLabel->TabIndex = 19;
			this->MaxMinByCategoryMapLabel->Text = L"Search Max/Min By Category:";
			// 
			// MaxMinByCategoryMapInputBox
			// 
			this->MaxMinByCategoryMapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MaxMinByCategoryMapInputBox->Location = System::Drawing::Point(333, 453);
			this->MaxMinByCategoryMapInputBox->Name = L"MaxMinByCategoryMapInputBox";
			this->MaxMinByCategoryMapInputBox->Size = System::Drawing::Size(254, 34);
			this->MaxMinByCategoryMapInputBox->TabIndex = 20;
			// 
			// MaxMinByCategoryMapButton
			// 
			this->MaxMinByCategoryMapButton->Location = System::Drawing::Point(606, 457);
			this->MaxMinByCategoryMapButton->Name = L"MaxMinByCategoryMapButton";
			this->MaxMinByCategoryMapButton->Size = System::Drawing::Size(80, 30);
			this->MaxMinByCategoryMapButton->TabIndex = 21;
			this->MaxMinByCategoryMapButton->Text = L"Search";
			this->MaxMinByCategoryMapButton->UseVisualStyleBackColor = true;
			this->MaxMinByCategoryMapButton->Click += gcnew System::EventHandler(this, &MyForm::MaxMinByCategoryMapButton_Click);
			// 
			// SortAToZMapLabel
			// 
			this->SortAToZMapLabel->AutoSize = true;
			this->SortAToZMapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortAToZMapLabel->Location = System::Drawing::Point(12, 518);
			this->SortAToZMapLabel->Name = L"SortAToZMapLabel";
			this->SortAToZMapLabel->Size = System::Drawing::Size(99, 20);
			this->SortAToZMapLabel->TabIndex = 22;
			this->SortAToZMapLabel->Text = L"Sort A to Z:";
			// 
			// SortAToZMapInputBox
			// 
			this->SortAToZMapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortAToZMapInputBox->Location = System::Drawing::Point(333, 509);
			this->SortAToZMapInputBox->Name = L"SortAToZMapInputBox";
			this->SortAToZMapInputBox->Size = System::Drawing::Size(254, 34);
			this->SortAToZMapInputBox->TabIndex = 23;
			// 
			// SortAToZMapButton
			// 
			this->SortAToZMapButton->Location = System::Drawing::Point(606, 513);
			this->SortAToZMapButton->Name = L"SortAToZMapButton";
			this->SortAToZMapButton->Size = System::Drawing::Size(80, 30);
			this->SortAToZMapButton->TabIndex = 24;
			this->SortAToZMapButton->Text = L"Search";
			this->SortAToZMapButton->UseVisualStyleBackColor = true;
			this->SortAToZMapButton->Click += gcnew System::EventHandler(this, &MyForm::SortAToZMapButton_Click);
			// 
			// SortLowToHighMapLabel
			// 
			this->SortLowToHighMapLabel->AutoSize = true;
			this->SortLowToHighMapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortLowToHighMapLabel->Location = System::Drawing::Point(12, 579);
			this->SortLowToHighMapLabel->Name = L"SortLowToHighMapLabel";
			this->SortLowToHighMapLabel->Size = System::Drawing::Size(149, 20);
			this->SortLowToHighMapLabel->TabIndex = 25;
			this->SortLowToHighMapLabel->Text = L"Sort Low to High:";
			// 
			// SortLowtoHighMapInputBox
			// 
			this->SortLowtoHighMapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortLowtoHighMapInputBox->Location = System::Drawing::Point(333, 570);
			this->SortLowtoHighMapInputBox->Name = L"SortLowtoHighMapInputBox";
			this->SortLowtoHighMapInputBox->Size = System::Drawing::Size(254, 34);
			this->SortLowtoHighMapInputBox->TabIndex = 26;
			// 
			// SortLowToHighMapButton
			// 
			this->SortLowToHighMapButton->Location = System::Drawing::Point(606, 574);
			this->SortLowToHighMapButton->Name = L"SortLowToHighMapButton";
			this->SortLowToHighMapButton->Size = System::Drawing::Size(80, 30);
			this->SortLowToHighMapButton->TabIndex = 27;
			this->SortLowToHighMapButton->Text = L"Search";
			this->SortLowToHighMapButton->UseVisualStyleBackColor = true;
			this->SortLowToHighMapButton->Click += gcnew System::EventHandler(this, &MyForm::SortLowToHighMapButton_Click);
			// 
			// SearchByCategoryHeapLabel
			// 
			this->SearchByCategoryHeapLabel->AutoSize = true;
			this->SearchByCategoryHeapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchByCategoryHeapLabel->Location = System::Drawing::Point(747, 343);
			this->SearchByCategoryHeapLabel->Name = L"SearchByCategoryHeapLabel";
			this->SearchByCategoryHeapLabel->Size = System::Drawing::Size(271, 20);
			this->SearchByCategoryHeapLabel->TabIndex = 28;
			this->SearchByCategoryHeapLabel->Text = L"Search By Restaurant Category:";
			// 
			// SearchPeopleByNameHeapLabel
			// 
			this->SearchPeopleByNameHeapLabel->AutoSize = true;
			this->SearchPeopleByNameHeapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchPeopleByNameHeapLabel->Location = System::Drawing::Point(747, 400);
			this->SearchPeopleByNameHeapLabel->Name = L"SearchPeopleByNameHeapLabel";
			this->SearchPeopleByNameHeapLabel->Size = System::Drawing::Size(243, 20);
			this->SearchPeopleByNameHeapLabel->TabIndex = 29;
			this->SearchPeopleByNameHeapLabel->Text = L"Search By Restaurant Name:";
			// 
			// MaxMinByCategoryHeapLabel
			// 
			this->MaxMinByCategoryHeapLabel->AutoSize = true;
			this->MaxMinByCategoryHeapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MaxMinByCategoryHeapLabel->Location = System::Drawing::Point(747, 462);
			this->MaxMinByCategoryHeapLabel->Name = L"MaxMinByCategoryHeapLabel";
			this->MaxMinByCategoryHeapLabel->Size = System::Drawing::Size(248, 20);
			this->MaxMinByCategoryHeapLabel->TabIndex = 30;
			this->MaxMinByCategoryHeapLabel->Text = L"Search Max/Min By Category:";
			// 
			// SortAToZHeapLabel
			// 
			this->SortAToZHeapLabel->AutoSize = true;
			this->SortAToZHeapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortAToZHeapLabel->Location = System::Drawing::Point(747, 518);
			this->SortAToZHeapLabel->Name = L"SortAToZHeapLabel";
			this->SortAToZHeapLabel->Size = System::Drawing::Size(99, 20);
			this->SortAToZHeapLabel->TabIndex = 31;
			this->SortAToZHeapLabel->Text = L"Sort A to Z:";
			// 
			// SortLowToHighHeapLabel
			// 
			this->SortLowToHighHeapLabel->AutoSize = true;
			this->SortLowToHighHeapLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortLowToHighHeapLabel->Location = System::Drawing::Point(747, 578);
			this->SortLowToHighHeapLabel->Name = L"SortLowToHighHeapLabel";
			this->SortLowToHighHeapLabel->Size = System::Drawing::Size(149, 20);
			this->SortLowToHighHeapLabel->TabIndex = 32;
			this->SortLowToHighHeapLabel->Text = L"Sort Low to High:";
			// 
			// SearchPeopleByCategoryHeapInputBox
			// 
			this->SearchPeopleByCategoryHeapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchPeopleByCategoryHeapInputBox->Location = System::Drawing::Point(1094, 333);
			this->SearchPeopleByCategoryHeapInputBox->Name = L"SearchPeopleByCategoryHeapInputBox";
			this->SearchPeopleByCategoryHeapInputBox->Size = System::Drawing::Size(254, 34);
			this->SearchPeopleByCategoryHeapInputBox->TabIndex = 33;
			// 
			// SearchPeopleByNameHeapInputBox
			// 
			this->SearchPeopleByNameHeapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchPeopleByNameHeapInputBox->Location = System::Drawing::Point(1094, 392);
			this->SearchPeopleByNameHeapInputBox->Name = L"SearchPeopleByNameHeapInputBox";
			this->SearchPeopleByNameHeapInputBox->Size = System::Drawing::Size(254, 34);
			this->SearchPeopleByNameHeapInputBox->TabIndex = 34;
			// 
			// MaxMinByCategoryHeapInputBox
			// 
			this->MaxMinByCategoryHeapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MaxMinByCategoryHeapInputBox->Location = System::Drawing::Point(1094, 453);
			this->MaxMinByCategoryHeapInputBox->Name = L"MaxMinByCategoryHeapInputBox";
			this->MaxMinByCategoryHeapInputBox->Size = System::Drawing::Size(254, 34);
			this->MaxMinByCategoryHeapInputBox->TabIndex = 35;
			// 
			// SortAToZHeapInputBox
			// 
			this->SortAToZHeapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortAToZHeapInputBox->Location = System::Drawing::Point(1094, 509);
			this->SortAToZHeapInputBox->Name = L"SortAToZHeapInputBox";
			this->SortAToZHeapInputBox->Size = System::Drawing::Size(254, 34);
			this->SortAToZHeapInputBox->TabIndex = 36;
			// 
			// SortLowToHighHeapInputBox
			// 
			this->SortLowToHighHeapInputBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SortLowToHighHeapInputBox->Location = System::Drawing::Point(1094, 574);
			this->SortLowToHighHeapInputBox->Name = L"SortLowToHighHeapInputBox";
			this->SortLowToHighHeapInputBox->Size = System::Drawing::Size(254, 34);
			this->SortLowToHighHeapInputBox->TabIndex = 37;
			// 
			// SearchPeopleByCategoryHeapButton
			// 
			this->SearchPeopleByCategoryHeapButton->Location = System::Drawing::Point(1375, 338);
			this->SearchPeopleByCategoryHeapButton->Name = L"SearchPeopleByCategoryHeapButton";
			this->SearchPeopleByCategoryHeapButton->Size = System::Drawing::Size(80, 30);
			this->SearchPeopleByCategoryHeapButton->TabIndex = 38;
			this->SearchPeopleByCategoryHeapButton->Text = L"Search";
			this->SearchPeopleByCategoryHeapButton->UseVisualStyleBackColor = true;
			this->SearchPeopleByCategoryHeapButton->Click += gcnew System::EventHandler(this, &MyForm::SearchPeopleByCategoryHeapButton_Click);
			// 
			// SearchPeopleByNameHeapButton
			// 
			this->SearchPeopleByNameHeapButton->Location = System::Drawing::Point(1375, 396);
			this->SearchPeopleByNameHeapButton->Name = L"SearchPeopleByNameHeapButton";
			this->SearchPeopleByNameHeapButton->Size = System::Drawing::Size(80, 30);
			this->SearchPeopleByNameHeapButton->TabIndex = 39;
			this->SearchPeopleByNameHeapButton->Text = L"Search";
			this->SearchPeopleByNameHeapButton->UseVisualStyleBackColor = true;
			this->SearchPeopleByNameHeapButton->Click += gcnew System::EventHandler(this, &MyForm::SearchPeopleByNameHeapButton_Click);
			// 
			// MaxMinByCategoryHeapButton
			// 
			this->MaxMinByCategoryHeapButton->Location = System::Drawing::Point(1375, 457);
			this->MaxMinByCategoryHeapButton->Name = L"MaxMinByCategoryHeapButton";
			this->MaxMinByCategoryHeapButton->Size = System::Drawing::Size(80, 30);
			this->MaxMinByCategoryHeapButton->TabIndex = 40;
			this->MaxMinByCategoryHeapButton->Text = L"Search";
			this->MaxMinByCategoryHeapButton->UseVisualStyleBackColor = true;
			this->MaxMinByCategoryHeapButton->Click += gcnew System::EventHandler(this, &MyForm::MaxMinByCategoryHeapButton_Click);
			// 
			// SortAToZHeapButton
			// 
			this->SortAToZHeapButton->Location = System::Drawing::Point(1375, 513);
			this->SortAToZHeapButton->Name = L"SortAToZHeapButton";
			this->SortAToZHeapButton->Size = System::Drawing::Size(80, 30);
			this->SortAToZHeapButton->TabIndex = 41;
			this->SortAToZHeapButton->Text = L"Search";
			this->SortAToZHeapButton->UseVisualStyleBackColor = true;
			this->SortAToZHeapButton->Click += gcnew System::EventHandler(this, &MyForm::SortAToZHeapButton_Click);
			// 
			// SortLowToHighHeapButton
			// 
			this->SortLowToHighHeapButton->Location = System::Drawing::Point(1375, 574);
			this->SortLowToHighHeapButton->Name = L"SortLowToHighHeapButton";
			this->SortLowToHighHeapButton->Size = System::Drawing::Size(80, 30);
			this->SortLowToHighHeapButton->TabIndex = 42;
			this->SortLowToHighHeapButton->Text = L"Search";
			this->SortLowToHighHeapButton->UseVisualStyleBackColor = true;
			this->SortLowToHighHeapButton->Click += gcnew System::EventHandler(this, &MyForm::SortLowToHighHeapButton_Click);
			// 
			// MapTimeLabel
			// 
			this->MapTimeLabel->AutoSize = true;
			this->MapTimeLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MapTimeLabel->Location = System::Drawing::Point(329, 248);
			this->MapTimeLabel->Name = L"MapTimeLabel";
			this->MapTimeLabel->Size = System::Drawing::Size(94, 20);
			this->MapTimeLabel->TabIndex = 43;
			this->MapTimeLabel->Text = L"Map Time:";
			// 
			// MapTimeSecondsLabel
			// 
			this->MapTimeSecondsLabel->AutoSize = true;
			this->MapTimeSecondsLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MapTimeSecondsLabel->Location = System::Drawing::Point(444, 251);
			this->MapTimeSecondsLabel->Name = L"MapTimeSecondsLabel";
			this->MapTimeSecondsLabel->Size = System::Drawing::Size(0, 20);
			this->MapTimeSecondsLabel->TabIndex = 44;
			// 
			// ResetTimerButton
			// 
			this->ResetTimerButton->Location = System::Drawing::Point(626, 251);
			this->ResetTimerButton->Name = L"ResetTimerButton";
			this->ResetTimerButton->Size = System::Drawing::Size(60, 25);
			this->ResetTimerButton->TabIndex = 45;
			this->ResetTimerButton->Text = L"Reset";
			this->ResetTimerButton->UseVisualStyleBackColor = true;
			this->ResetTimerButton->Click += gcnew System::EventHandler(this, &MyForm::ResetTimerButton_Click);
			// 
			// HeapTimeLabel
			// 
			this->HeapTimeLabel->AutoSize = true;
			this->HeapTimeLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HeapTimeLabel->Location = System::Drawing::Point(1090, 248);
			this->HeapTimeLabel->Name = L"HeapTimeLabel";
			this->HeapTimeLabel->Size = System::Drawing::Size(103, 20);
			this->HeapTimeLabel->TabIndex = 46;
			this->HeapTimeLabel->Text = L"Heap Time:";
			// 
			// HeapTimeSecondsLabel
			// 
			this->HeapTimeSecondsLabel->AutoSize = true;
			this->HeapTimeSecondsLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HeapTimeSecondsLabel->Location = System::Drawing::Point(1210, 251);
			this->HeapTimeSecondsLabel->Name = L"HeapTimeSecondsLabel";
			this->HeapTimeSecondsLabel->Size = System::Drawing::Size(0, 20);
			this->HeapTimeSecondsLabel->TabIndex = 47;
			// 
			// HeapResetTimerButton
			// 
			this->HeapResetTimerButton->Location = System::Drawing::Point(1395, 251);
			this->HeapResetTimerButton->Name = L"HeapResetTimerButton";
			this->HeapResetTimerButton->Size = System::Drawing::Size(60, 25);
			this->HeapResetTimerButton->TabIndex = 48;
			this->HeapResetTimerButton->Text = L"Reset";
			this->HeapResetTimerButton->UseVisualStyleBackColor = true;
			this->HeapResetTimerButton->Click += gcnew System::EventHandler(this, &MyForm::HeapResetTimerButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1502, 801);
			this->Controls->Add(this->HeapResetTimerButton);
			this->Controls->Add(this->HeapTimeSecondsLabel);
			this->Controls->Add(this->HeapTimeLabel);
			this->Controls->Add(this->ResetTimerButton);
			this->Controls->Add(this->MapTimeSecondsLabel);
			this->Controls->Add(this->MapTimeLabel);
			this->Controls->Add(this->SortLowToHighHeapButton);
			this->Controls->Add(this->SortAToZHeapButton);
			this->Controls->Add(this->MaxMinByCategoryHeapButton);
			this->Controls->Add(this->SearchPeopleByNameHeapButton);
			this->Controls->Add(this->SearchPeopleByCategoryHeapButton);
			this->Controls->Add(this->SortLowToHighHeapInputBox);
			this->Controls->Add(this->SortAToZHeapInputBox);
			this->Controls->Add(this->MaxMinByCategoryHeapInputBox);
			this->Controls->Add(this->SearchPeopleByNameHeapInputBox);
			this->Controls->Add(this->SearchPeopleByCategoryHeapInputBox);
			this->Controls->Add(this->SortLowToHighHeapLabel);
			this->Controls->Add(this->SortAToZHeapLabel);
			this->Controls->Add(this->MaxMinByCategoryHeapLabel);
			this->Controls->Add(this->SearchPeopleByNameHeapLabel);
			this->Controls->Add(this->SearchByCategoryHeapLabel);
			this->Controls->Add(this->SortLowToHighMapButton);
			this->Controls->Add(this->SortLowtoHighMapInputBox);
			this->Controls->Add(this->SortLowToHighMapLabel);
			this->Controls->Add(this->SortAToZMapButton);
			this->Controls->Add(this->SortAToZMapInputBox);
			this->Controls->Add(this->SortAToZMapLabel);
			this->Controls->Add(this->MaxMinByCategoryMapButton);
			this->Controls->Add(this->MaxMinByCategoryMapInputBox);
			this->Controls->Add(this->MaxMinByCategoryMapLabel);
			this->Controls->Add(this->SearchPeopleByNameMapButton);
			this->Controls->Add(this->SearchPeopleByNameMapInputBox);
			this->Controls->Add(this->InputLabel2);
			this->Controls->Add(this->MaxMinHeap);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MapHeader);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->loadDataButtonHeap);
			this->Controls->Add(this->MaxMinMap);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->loadDataButtonMap);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->InputLabel);
			this->Controls->Add(this->SearchPeopleByCategoryMapButton);
			this->Controls->Add(this->SearchPeopleByCategoryMapInputBox);
			this->Name = L"MyForm";
			this->Text = L"k";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	    // Map
	private: System::Void SearchPeopleByCategoryMapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		
		String^ input = SearchPeopleByCategoryMapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		numberOfPeopleByType_Map(strInput);

		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		MapTimeSecondsLabel->Text = strTimeInput;

	}

		// Map
	private: System::Void SearchPeopleByNameMapButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double timeStart = clock() / 1000.0;

		String^ input = SearchPeopleByNameMapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		numberOfPeopleByName_Map(strInput);

		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		MapTimeSecondsLabel->Text = strTimeInput;
	}

		// Map
	private: System::Void MaxMinByCategoryMapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;

		String^ input = MaxMinByCategoryMapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		maxAndMinByType_Map(strInput);

		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		MapTimeSecondsLabel->Text = strTimeInput;
	}

		// Map
	private: System::Void SortAToZMapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;

		String^ input = SortAToZMapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		sortAtoZbyType_Map(strInput);

		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		MapTimeSecondsLabel->Text = strTimeInput;
		
	}

		// Map
	private: System::Void SortLowToHighMapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;

		String^ input = SortLowtoHighMapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		sortLowtoHighbyType_Map(strInput);

		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		MapTimeSecondsLabel->Text = strTimeInput;
	}

		// Map
	private: System::Void loadDataButtonMap_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		loadData_Map("FinalData.csv");
		double timeEnd = clock() / 1000.0;
		
		string input = to_string(timeEnd - timeStart) + " seconds";
		String^ strInput = msclr::interop::marshal_as<String^>(input);

		MapTimeSecondsLabel->Text = strInput;
	}

		// Map
	private: System::Void MaxMinMap_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		maxAndMinOverall_Map();
		double timeEnd = clock() / 1000.0;

		string input = to_string(timeEnd - timeStart) + " seconds";
		String^ strInput = msclr::interop::marshal_as<String^>(input);

		MapTimeSecondsLabel->Text = strInput;

	}

	private: System::Void ResetTimerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		 MapTimeSecondsLabel->Text = "";
	}

	// ------------------------------------------- End of Map Buttons -----------------------------------------------------------
	
		// Heap
	private: System::Void loadDataButtonHeap_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		loadData_Heap("FinalData.csv");
		double timeEnd = clock() / 1000.0;
	
		string input = to_string(timeEnd - timeStart) + " seconds";
		String^ strInput = msclr::interop::marshal_as<String^>(input);

		HeapTimeSecondsLabel->Text = strInput;
	}

		// Heap
	private: System::Void MaxMinHeap_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		maxAndMinOverall_Heap();
		double timeEnd = clock() / 1000.0;

		string input = to_string(timeEnd - timeStart) + " seconds";
		String^ strInput = msclr::interop::marshal_as<String^>(input);

		HeapTimeSecondsLabel->Text = strInput;
	}


		// Heap
	private: System::Void SearchPeopleByCategoryHeapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;

		String^ input = SearchPeopleByCategoryHeapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		numberOfPeopleByType_Heap(strInput);

		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		HeapTimeSecondsLabel->Text = strTimeInput;
	}
	
		// Heap
	private: System::Void SearchPeopleByNameHeapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		String^ input = SearchPeopleByNameHeapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		numberOfPeopleByName_Heap(strInput);
		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		HeapTimeSecondsLabel->Text = strTimeInput;
	}


		// Heap
	private: System::Void MaxMinByCategoryHeapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		String^ input = MaxMinByCategoryHeapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		maxAndMinByType_Heap(strInput);
		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		HeapTimeSecondsLabel->Text = strTimeInput;
	}

		// Heap
	private: System::Void SortAToZHeapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		String^ input = SortAToZHeapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		sortAtoZbyType_Heap(strInput);
		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		HeapTimeSecondsLabel->Text = strTimeInput;
	}

		// Heap
	private: System::Void SortLowToHighHeapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		double timeStart = clock() / 1000.0;
		String^ input = SortLowToHighHeapInputBox->Text;
		string strInput = msclr::interop::marshal_as<string>(input);
		sortLowtoHighbyType_Heap(strInput);
		double timeEnd = clock() / 1000.0;

		string timeInput = to_string(timeEnd - timeStart) + " seconds";
		String^ strTimeInput = msclr::interop::marshal_as<String^>(timeInput);

		HeapTimeSecondsLabel->Text = strTimeInput;
	}

	private: System::Void HeapResetTimerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		HeapTimeSecondsLabel->Text = "";
	}
};
	}
