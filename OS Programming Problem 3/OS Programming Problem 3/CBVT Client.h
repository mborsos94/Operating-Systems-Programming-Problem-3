#pragma once
#include "CBVT Classes.h"

namespace CBVTClientNS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CBVTClient
	/// </summary>

	public ref class CBVTClient : public System::Windows::Forms::Form
	{
	public:
		CBVTClient(void)
		{
			InitializeComponent();
			time_t theTime = time(NULL);
			struct tm *aTime = localtime(&theTime);
			int currYear = aTime->tm_year + 1900;
			for (int i = 1900; i <= currYear + 1; i++)
			{
				this->carYear->Items->Add(i);
			}

			this->carYear->SelectedIndex = currYear - 1900;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CBVTClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  firstName;
	protected:


	private: System::Windows::Forms::PictureBox^  clientPhoto;
	private: System::Windows::Forms::Label^  licenseNrLbl;


	private: System::Windows::Forms::TextBox^  licenseNr;
	private: System::Windows::Forms::Label^  passportNrLbl;


	private: System::Windows::Forms::TextBox^  passportNr;
	private: System::Windows::Forms::Label^  addressLbl;


	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::Label^  lastNameLbl;



	private: System::Windows::Forms::TextBox^  lastName;
	private: System::Windows::Forms::Label^  firstNameLbl;



	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  carModel;
	private: System::Windows::Forms::Label^  carModelLbl;


	private: System::Windows::Forms::TextBox^  carMake;
	private: System::Windows::Forms::Label^  carMakeLbl;


	private: System::Windows::Forms::TextBox^  carColor;
	private: System::Windows::Forms::Label^  carColorLbl;



	private: System::Windows::Forms::Label^  registrationNrLbl;
	private: System::Windows::Forms::Label^  carYearLbl;



	private: System::Windows::Forms::TextBox^  registrationNr;
	private: System::Windows::Forms::TextBox^  vinNr;
	private: System::Windows::Forms::Label^  vinNrLbl;



	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  loanNrLbl;

	private: System::Windows::Forms::TextBox^  loanNr;
	private: System::Windows::Forms::Label^  bankNameLbl;


	private: System::Windows::Forms::TextBox^  bankName;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  policyNrLbl;

	private: System::Windows::Forms::TextBox^  policyNr;
	private: System::Windows::Forms::Label^  insurNameLbl;


	private: System::Windows::Forms::TextBox^  insurName;
	private: System::Windows::Forms::Button^  submitInfoButton;
	private: System::Windows::Forms::Label^  zipLbl;




	private: System::Windows::Forms::Label^  stateProvinceLbl;


	private: System::Windows::Forms::TextBox^  stateProvince;
	private: System::Windows::Forms::Label^  cityLbl;


	private: System::Windows::Forms::TextBox^  city;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::DateTimePicker^  travelEnd;

	private: System::Windows::Forms::DateTimePicker^  travelStart;
private: System::Windows::Forms::ComboBox^  carYear;
private: System::Windows::Forms::MaskedTextBox^  zip;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->zipLbl = (gcnew System::Windows::Forms::Label());
			this->stateProvinceLbl = (gcnew System::Windows::Forms::Label());
			this->stateProvince = (gcnew System::Windows::Forms::TextBox());
			this->cityLbl = (gcnew System::Windows::Forms::Label());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->licenseNrLbl = (gcnew System::Windows::Forms::Label());
			this->licenseNr = (gcnew System::Windows::Forms::TextBox());
			this->passportNrLbl = (gcnew System::Windows::Forms::Label());
			this->passportNr = (gcnew System::Windows::Forms::TextBox());
			this->addressLbl = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->lastNameLbl = (gcnew System::Windows::Forms::Label());
			this->lastName = (gcnew System::Windows::Forms::TextBox());
			this->firstNameLbl = (gcnew System::Windows::Forms::Label());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->clientPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->travelEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->travelStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->carYear = (gcnew System::Windows::Forms::ComboBox());
			this->carModel = (gcnew System::Windows::Forms::TextBox());
			this->carModelLbl = (gcnew System::Windows::Forms::Label());
			this->carMake = (gcnew System::Windows::Forms::TextBox());
			this->carMakeLbl = (gcnew System::Windows::Forms::Label());
			this->carColor = (gcnew System::Windows::Forms::TextBox());
			this->carColorLbl = (gcnew System::Windows::Forms::Label());
			this->registrationNrLbl = (gcnew System::Windows::Forms::Label());
			this->carYearLbl = (gcnew System::Windows::Forms::Label());
			this->registrationNr = (gcnew System::Windows::Forms::TextBox());
			this->vinNr = (gcnew System::Windows::Forms::TextBox());
			this->vinNrLbl = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->loanNrLbl = (gcnew System::Windows::Forms::Label());
			this->loanNr = (gcnew System::Windows::Forms::TextBox());
			this->bankNameLbl = (gcnew System::Windows::Forms::Label());
			this->bankName = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->policyNrLbl = (gcnew System::Windows::Forms::Label());
			this->policyNr = (gcnew System::Windows::Forms::TextBox());
			this->insurNameLbl = (gcnew System::Windows::Forms::Label());
			this->insurName = (gcnew System::Windows::Forms::TextBox());
			this->submitInfoButton = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->zip = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientPhoto))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->zip);
			this->groupBox1->Controls->Add(this->zipLbl);
			this->groupBox1->Controls->Add(this->stateProvinceLbl);
			this->groupBox1->Controls->Add(this->stateProvince);
			this->groupBox1->Controls->Add(this->cityLbl);
			this->groupBox1->Controls->Add(this->city);
			this->groupBox1->Controls->Add(this->licenseNrLbl);
			this->groupBox1->Controls->Add(this->licenseNr);
			this->groupBox1->Controls->Add(this->passportNrLbl);
			this->groupBox1->Controls->Add(this->passportNr);
			this->groupBox1->Controls->Add(this->addressLbl);
			this->groupBox1->Controls->Add(this->address);
			this->groupBox1->Controls->Add(this->lastNameLbl);
			this->groupBox1->Controls->Add(this->lastName);
			this->groupBox1->Controls->Add(this->firstNameLbl);
			this->groupBox1->Controls->Add(this->firstName);
			this->groupBox1->Controls->Add(this->clientPhoto);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1384, 180);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Client Information";
			// 
			// zipLbl
			// 
			this->zipLbl->AutoSize = true;
			this->zipLbl->Location = System::Drawing::Point(1181, 125);
			this->zipLbl->Name = L"zipLbl";
			this->zipLbl->Size = System::Drawing::Size(22, 13);
			this->zipLbl->TabIndex = 16;
			this->zipLbl->Text = L"Zip";
			// 
			// stateProvinceLbl
			// 
			this->stateProvinceLbl->AutoSize = true;
			this->stateProvinceLbl->Location = System::Drawing::Point(856, 125);
			this->stateProvinceLbl->Name = L"stateProvinceLbl";
			this->stateProvinceLbl->Size = System::Drawing::Size(85, 13);
			this->stateProvinceLbl->TabIndex = 14;
			this->stateProvinceLbl->Text = L"State / Province";
			// 
			// stateProvince
			// 
			this->stateProvince->Location = System::Drawing::Point(963, 122);
			this->stateProvince->Name = L"stateProvince";
			this->stateProvince->Size = System::Drawing::Size(192, 20);
			this->stateProvince->TabIndex = 13;
			// 
			// cityLbl
			// 
			this->cityLbl->AutoSize = true;
			this->cityLbl->Location = System::Drawing::Point(564, 125);
			this->cityLbl->Name = L"cityLbl";
			this->cityLbl->Size = System::Drawing::Size(24, 13);
			this->cityLbl->TabIndex = 12;
			this->cityLbl->Text = L"City";
			// 
			// city
			// 
			this->city->Location = System::Drawing::Point(609, 122);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(192, 20);
			this->city->TabIndex = 11;
			// 
			// licenseNrLbl
			// 
			this->licenseNrLbl->AutoSize = true;
			this->licenseNrLbl->Location = System::Drawing::Point(238, 90);
			this->licenseNrLbl->Name = L"licenseNrLbl";
			this->licenseNrLbl->Size = System::Drawing::Size(122, 13);
			this->licenseNrLbl->TabIndex = 10;
			this->licenseNrLbl->Text = L"Driver\'s License Number";
			// 
			// licenseNr
			// 
			this->licenseNr->Location = System::Drawing::Point(385, 87);
			this->licenseNr->Name = L"licenseNr";
			this->licenseNr->Size = System::Drawing::Size(194, 20);
			this->licenseNr->TabIndex = 9;
			// 
			// passportNrLbl
			// 
			this->passportNrLbl->AutoSize = true;
			this->passportNrLbl->Location = System::Drawing::Point(617, 90);
			this->passportNrLbl->Name = L"passportNrLbl";
			this->passportNrLbl->Size = System::Drawing::Size(88, 13);
			this->passportNrLbl->TabIndex = 8;
			this->passportNrLbl->Text = L"Passport Number";
			// 
			// passportNr
			// 
			this->passportNr->Location = System::Drawing::Point(725, 87);
			this->passportNr->Name = L"passportNr";
			this->passportNr->Size = System::Drawing::Size(199, 20);
			this->passportNr->TabIndex = 7;
			// 
			// addressLbl
			// 
			this->addressLbl->AutoSize = true;
			this->addressLbl->Location = System::Drawing::Point(238, 125);
			this->addressLbl->Name = L"addressLbl";
			this->addressLbl->Size = System::Drawing::Size(45, 13);
			this->addressLbl->TabIndex = 6;
			this->addressLbl->Text = L"Address";
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(314, 122);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(192, 20);
			this->address->TabIndex = 5;
			// 
			// lastNameLbl
			// 
			this->lastNameLbl->AutoSize = true;
			this->lastNameLbl->Location = System::Drawing::Point(521, 20);
			this->lastNameLbl->Name = L"lastNameLbl";
			this->lastNameLbl->Size = System::Drawing::Size(58, 13);
			this->lastNameLbl->TabIndex = 4;
			this->lastNameLbl->Text = L"Last Name";
			// 
			// lastName
			// 
			this->lastName->Location = System::Drawing::Point(598, 20);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(192, 20);
			this->lastName->TabIndex = 3;
			// 
			// firstNameLbl
			// 
			this->firstNameLbl->AutoSize = true;
			this->firstNameLbl->Location = System::Drawing::Point(238, 20);
			this->firstNameLbl->Name = L"firstNameLbl";
			this->firstNameLbl->Size = System::Drawing::Size(57, 13);
			this->firstNameLbl->TabIndex = 2;
			this->firstNameLbl->Text = L"First Name";
			// 
			// firstName
			// 
			this->firstName->Location = System::Drawing::Point(315, 20);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(170, 20);
			this->firstName->TabIndex = 1;
			// 
			// clientPhoto
			// 
			this->clientPhoto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->clientPhoto->Location = System::Drawing::Point(7, 20);
			this->clientPhoto->Name = L"clientPhoto";
			this->clientPhoto->Size = System::Drawing::Size(130, 138);
			this->clientPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->clientPhoto->TabIndex = 0;
			this->clientPhoto->TabStop = false;
			this->clientPhoto->Click += gcnew System::EventHandler(this, &CBVTClient::pictureBox1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->travelEnd);
			this->groupBox2->Controls->Add(this->travelStart);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(13, 200);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(450, 100);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dates of Travel";
			// 
			// travelEnd
			// 
			this->travelEnd->Location = System::Drawing::Point(78, 49);
			this->travelEnd->Name = L"travelEnd";
			this->travelEnd->Size = System::Drawing::Size(200, 20);
			this->travelEnd->TabIndex = 17;
			// 
			// travelStart
			// 
			this->travelStart->Location = System::Drawing::Point(78, 22);
			this->travelStart->Name = L"travelStart";
			this->travelStart->Size = System::Drawing::Size(200, 20);
			this->travelStart->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"End Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Start Date";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->carYear);
			this->groupBox3->Controls->Add(this->carModel);
			this->groupBox3->Controls->Add(this->carModelLbl);
			this->groupBox3->Controls->Add(this->carMake);
			this->groupBox3->Controls->Add(this->carMakeLbl);
			this->groupBox3->Controls->Add(this->carColor);
			this->groupBox3->Controls->Add(this->carColorLbl);
			this->groupBox3->Controls->Add(this->registrationNrLbl);
			this->groupBox3->Controls->Add(this->carYearLbl);
			this->groupBox3->Controls->Add(this->registrationNr);
			this->groupBox3->Controls->Add(this->vinNr);
			this->groupBox3->Controls->Add(this->vinNrLbl);
			this->groupBox3->Location = System::Drawing::Point(469, 200);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(928, 100);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vehicle Information";
			// 
			// carYear
			// 
			this->carYear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->carYear->FormattingEnabled = true;
			this->carYear->Location = System::Drawing::Point(531, 55);
			this->carYear->Name = L"carYear";
			this->carYear->Size = System::Drawing::Size(121, 21);
			this->carYear->TabIndex = 24;
			// 
			// carModel
			// 
			this->carModel->Location = System::Drawing::Point(328, 59);
			this->carModel->Name = L"carModel";
			this->carModel->Size = System::Drawing::Size(126, 20);
			this->carModel->TabIndex = 22;
			// 
			// carModelLbl
			// 
			this->carModelLbl->AutoSize = true;
			this->carModelLbl->Location = System::Drawing::Point(244, 62);
			this->carModelLbl->Name = L"carModelLbl";
			this->carModelLbl->Size = System::Drawing::Size(36, 13);
			this->carModelLbl->TabIndex = 23;
			this->carModelLbl->Text = L"Model";
			// 
			// carMake
			// 
			this->carMake->Location = System::Drawing::Point(90, 59);
			this->carMake->Name = L"carMake";
			this->carMake->Size = System::Drawing::Size(126, 20);
			this->carMake->TabIndex = 20;
			// 
			// carMakeLbl
			// 
			this->carMakeLbl->AutoSize = true;
			this->carMakeLbl->Location = System::Drawing::Point(6, 62);
			this->carMakeLbl->Name = L"carMakeLbl";
			this->carMakeLbl->Size = System::Drawing::Size(34, 13);
			this->carMakeLbl->TabIndex = 21;
			this->carMakeLbl->Text = L"Make";
			// 
			// carColor
			// 
			this->carColor->Location = System::Drawing::Point(743, 59);
			this->carColor->Name = L"carColor";
			this->carColor->Size = System::Drawing::Size(93, 20);
			this->carColor->TabIndex = 19;
			// 
			// carColorLbl
			// 
			this->carColorLbl->AutoSize = true;
			this->carColorLbl->Location = System::Drawing::Point(691, 62);
			this->carColorLbl->Name = L"carColorLbl";
			this->carColorLbl->Size = System::Drawing::Size(31, 13);
			this->carColorLbl->TabIndex = 18;
			this->carColorLbl->Text = L"Color";
			// 
			// registrationNrLbl
			// 
			this->registrationNrLbl->AutoSize = true;
			this->registrationNrLbl->Location = System::Drawing::Point(6, 26);
			this->registrationNrLbl->Name = L"registrationNrLbl";
			this->registrationNrLbl->Size = System::Drawing::Size(141, 13);
			this->registrationNrLbl->TabIndex = 14;
			this->registrationNrLbl->Text = L"Vehicle Registration Number";
			// 
			// carYearLbl
			// 
			this->carYearLbl->AutoSize = true;
			this->carYearLbl->Location = System::Drawing::Point(485, 62);
			this->carYearLbl->Name = L"carYearLbl";
			this->carYearLbl->Size = System::Drawing::Size(29, 13);
			this->carYearLbl->TabIndex = 16;
			this->carYearLbl->Text = L"Year";
			// 
			// registrationNr
			// 
			this->registrationNr->Location = System::Drawing::Point(153, 23);
			this->registrationNr->Name = L"registrationNr";
			this->registrationNr->Size = System::Drawing::Size(194, 20);
			this->registrationNr->TabIndex = 13;
			// 
			// vinNr
			// 
			this->vinNr->Location = System::Drawing::Point(531, 22);
			this->vinNr->Name = L"vinNr";
			this->vinNr->Size = System::Drawing::Size(199, 20);
			this->vinNr->TabIndex = 11;
			// 
			// vinNrLbl
			// 
			this->vinNrLbl->AutoSize = true;
			this->vinNrLbl->Location = System::Drawing::Point(447, 25);
			this->vinNrLbl->Name = L"vinNrLbl";
			this->vinNrLbl->Size = System::Drawing::Size(65, 13);
			this->vinNrLbl->TabIndex = 12;
			this->vinNrLbl->Text = L"VIN Number";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->loanNrLbl);
			this->groupBox4->Controls->Add(this->loanNr);
			this->groupBox4->Controls->Add(this->bankNameLbl);
			this->groupBox4->Controls->Add(this->bankName);
			this->groupBox4->Location = System::Drawing::Point(13, 306);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(614, 70);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Bank Information";
			// 
			// loanNrLbl
			// 
			this->loanNrLbl->AutoSize = true;
			this->loanNrLbl->Location = System::Drawing::Point(312, 27);
			this->loanNrLbl->Name = L"loanNrLbl";
			this->loanNrLbl->Size = System::Drawing::Size(71, 13);
			this->loanNrLbl->TabIndex = 14;
			this->loanNrLbl->Text = L"Loan Number";
			// 
			// loanNr
			// 
			this->loanNr->Location = System::Drawing::Point(389, 27);
			this->loanNr->Name = L"loanNr";
			this->loanNr->Size = System::Drawing::Size(170, 20);
			this->loanNr->TabIndex = 13;
			// 
			// bankNameLbl
			// 
			this->bankNameLbl->AutoSize = true;
			this->bankNameLbl->Location = System::Drawing::Point(17, 27);
			this->bankNameLbl->Name = L"bankNameLbl";
			this->bankNameLbl->Size = System::Drawing::Size(63, 13);
			this->bankNameLbl->TabIndex = 12;
			this->bankNameLbl->Text = L"Bank Name";
			// 
			// bankName
			// 
			this->bankName->Location = System::Drawing::Point(94, 27);
			this->bankName->Name = L"bankName";
			this->bankName->Size = System::Drawing::Size(170, 20);
			this->bankName->TabIndex = 11;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->policyNrLbl);
			this->groupBox5->Controls->Add(this->policyNr);
			this->groupBox5->Controls->Add(this->insurNameLbl);
			this->groupBox5->Controls->Add(this->insurName);
			this->groupBox5->Location = System::Drawing::Point(633, 306);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(764, 70);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Insurance Information";
			// 
			// policyNrLbl
			// 
			this->policyNrLbl->AutoSize = true;
			this->policyNrLbl->Location = System::Drawing::Point(321, 27);
			this->policyNrLbl->Name = L"policyNrLbl";
			this->policyNrLbl->Size = System::Drawing::Size(75, 13);
			this->policyNrLbl->TabIndex = 14;
			this->policyNrLbl->Text = L"Policy Number";
			// 
			// policyNr
			// 
			this->policyNr->Location = System::Drawing::Point(415, 27);
			this->policyNr->Name = L"policyNr";
			this->policyNr->Size = System::Drawing::Size(170, 20);
			this->policyNr->TabIndex = 13;
			// 
			// insurNameLbl
			// 
			this->insurNameLbl->AutoSize = true;
			this->insurNameLbl->Location = System::Drawing::Point(17, 27);
			this->insurNameLbl->Name = L"insurNameLbl";
			this->insurNameLbl->Size = System::Drawing::Size(82, 13);
			this->insurNameLbl->TabIndex = 12;
			this->insurNameLbl->Text = L"Company Name";
			// 
			// insurName
			// 
			this->insurName->Location = System::Drawing::Point(120, 27);
			this->insurName->Name = L"insurName";
			this->insurName->Size = System::Drawing::Size(170, 20);
			this->insurName->TabIndex = 11;
			// 
			// submitInfoButton
			// 
			this->submitInfoButton->Location = System::Drawing::Point(1273, 403);
			this->submitInfoButton->Name = L"submitInfoButton";
			this->submitInfoButton->Size = System::Drawing::Size(124, 23);
			this->submitInfoButton->TabIndex = 16;
			this->submitInfoButton->Text = L"Submit Information";
			this->submitInfoButton->UseVisualStyleBackColor = true;
			this->submitInfoButton->Click += gcnew System::EventHandler(this, &CBVTClient::button1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 428);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1409, 22);
			this->statusStrip1->TabIndex = 82;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// zip
			// 
			this->zip->Location = System::Drawing::Point(1219, 122);
			this->zip->Mask = L"00000-9999";
			this->zip->Name = L"zip";
			this->zip->Size = System::Drawing::Size(100, 20);
			this->zip->TabIndex = 87;
			// 
			// CBVTClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1409, 450);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->submitInfoButton);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CBVTClient";
			this->Text = L"CBVT Client System";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientPhoto))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ loadImage = gcnew OpenFileDialog();
				 if (loadImage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 clientPhoto->Image = Image::FromFile(loadImage->FileName);
				 }
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ missingInfo = "Please fill the following fields:";

				 //Check if fields are filled with information
				 if (!clientPhoto->Image)
					 missingInfo = missingInfo + " Photograph,";

				 if (firstName->Text->Length == 0)
					 missingInfo = missingInfo + " " + firstNameLbl->Text + ",";

				 if (lastName->Text->Length == 0)
					 missingInfo = missingInfo +" " + lastNameLbl->Text + ",";

				 if (licenseNr->Text->Length == 0)
					 missingInfo = missingInfo +" " + licenseNrLbl->Text + ",";

				 if (passportNr->Text->Length == 0)
					 missingInfo = missingInfo + " " + passportNrLbl->Text + ",";

				 if (address->Text->Length == 0)
					 missingInfo = missingInfo + " " + addressLbl->Text + ",";

				 if (city->Text->Length == 0)
					 missingInfo = missingInfo + " " + cityLbl->Text + ",";

				 if (stateProvince->Text->Length == 0)
					 missingInfo = missingInfo + " " + stateProvinceLbl->Text + ",";

				 if (zip->Text->Contains(" "))
					 missingInfo = missingInfo + " " + zipLbl->Text + ",";

				 if (registrationNr->Text->Length == 0)
					 missingInfo = missingInfo + " " + registrationNrLbl->Text + ",";

				 if (vinNr->Text->Length == 0)
					 missingInfo = missingInfo + " " + vinNrLbl->Text + ",";

				 if (carMake->Text->Length == 0)
					 missingInfo = missingInfo + " " + carMakeLbl->Text + ",";

				 if (carModel->Text->Length == 0)
					 missingInfo = missingInfo + " " + carModelLbl->Text + ",";

				 if (carColor->Text->Length == 0)
					 missingInfo = missingInfo + " " + carColorLbl->Text + ",";

				 if (bankName->Text->Length == 0)
					 missingInfo = missingInfo + " " + bankNameLbl->Text + ",";

				 if (loanNr->Text->Length == 0)
					 missingInfo = missingInfo + " " + loanNrLbl->Text + ",";

				 if (insurName->Text->Length == 0)
					 missingInfo = missingInfo + " " + insurNameLbl->Text + ",";

				 if (policyNr->Text->Length == 0)
					 missingInfo = missingInfo + " " + policyNrLbl->Text + ",";

				 if (missingInfo->Length > 33)
				 {
					 MessageBox::Show(missingInfo);
					 return;
				 }

			//Check if certain fields are valid according to constraints
				 if (travelEnd->Value < travelStart->Value)
				 {
					 MessageBox::Show("Please ensure the end date of travel is on or after the start date of travel!");
					 return;
				 }



			 Client aClient;
			 MessageBox::Show("Request submitted");
			 aClient.Stop();
			 this->Close();
}
};
}
#pragma endregion