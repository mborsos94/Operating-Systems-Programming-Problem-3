#pragma once
#include "CBVT Classes.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"

namespace CBVTDMVNS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CBVTDMV
	/// </summary>
	public ref class CBVTDMV : public System::Windows::Forms::Form
	{
	public:

		CBVTDMV(void)
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
		~CBVTDMV()
		{
			if (components)
			{
				delete components;
			}
		}
<<<<<<< HEAD

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  approve;
	private: System::Windows::Forms::Button^  reject;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
=======
	private: System::Windows::Forms::ListBox^  foundRequests;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  approveButton;
	private: System::Windows::Forms::Button^  rejectButton;


	private: System::Windows::Forms::TextBox^  firstName;
	private: System::Windows::Forms::TextBox^  lastName;
	private: System::Windows::Forms::TextBox^  licenseNr;
	private: System::Windows::Forms::TextBox^  passportNr;
	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::TextBox^  city;
	private: System::Windows::Forms::TextBox^  stateProvince;
	private: System::Windows::Forms::Label^  firstNameLbl;
	private: System::Windows::Forms::Label^  cityLbl;









	private: System::Windows::Forms::Label^  addressLbl;

	private: System::Windows::Forms::Label^  passportNrLbl;

	private: System::Windows::Forms::Label^  licenseNrLbl;

	private: System::Windows::Forms::Label^  lastNameLbl;
	private: System::Windows::Forms::Label^  carModelLbl;


>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  zipLbl;

	private: System::Windows::Forms::Label^  stateProvinceLbl;
	private: System::Windows::Forms::Label^  carMakeLbl;


	private: System::Windows::Forms::Label^  vinNrLbl;

	private: System::Windows::Forms::Label^  registrationNrLbl;
	private: System::Windows::Forms::Label^  carColorLbl;
	private: System::Windows::Forms::Label^  carYearLbl;



	private: System::Windows::Forms::TextBox^  carMake;

	private: System::Windows::Forms::TextBox^  vinNr;

	private: System::Windows::Forms::TextBox^  registrationNr;
	private: System::Windows::Forms::TextBox^  carColor;





	private: System::Windows::Forms::TextBox^  carModel;
	private: System::Windows::Forms::Button^  searchButton;


<<<<<<< HEAD
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;


	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::RichTextBox^  authorizedAccounts;


	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::MaskedTextBox^  zip;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Button^  loadAuthroized;
	private: System::Windows::Forms::RichTextBox^  clientInput;

	private: System::Windows::Forms::Button^  loadRequests;
=======

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::RichTextBox^  selectedRequest;

	private: System::Windows::Forms::DateTimePicker^  travelEnd;
	private: System::Windows::Forms::DateTimePicker^  travelStart;
	private: System::Windows::Forms::Label^  travelStartLbl;
	private: System::Windows::Forms::Label^  travelEndLbl;




	private: System::Windows::Forms::MaskedTextBox^  zip;
	private: System::Windows::Forms::MaskedTextBox^  carYear;
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d


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
<<<<<<< HEAD
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->approve = (gcnew System::Windows::Forms::Button());
			this->reject = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->authorizedAccounts = (gcnew System::Windows::Forms::RichTextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->zip = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->loadAuthroized = (gcnew System::Windows::Forms::Button());
			this->clientInput = (gcnew System::Windows::Forms::RichTextBox());
			this->loadRequests = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
=======
			this->foundRequests = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->approveButton = (gcnew System::Windows::Forms::Button());
			this->rejectButton = (gcnew System::Windows::Forms::Button());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->lastName = (gcnew System::Windows::Forms::TextBox());
			this->licenseNr = (gcnew System::Windows::Forms::TextBox());
			this->passportNr = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->stateProvince = (gcnew System::Windows::Forms::TextBox());
			this->firstNameLbl = (gcnew System::Windows::Forms::Label());
			this->cityLbl = (gcnew System::Windows::Forms::Label());
			this->addressLbl = (gcnew System::Windows::Forms::Label());
			this->passportNrLbl = (gcnew System::Windows::Forms::Label());
			this->licenseNrLbl = (gcnew System::Windows::Forms::Label());
			this->lastNameLbl = (gcnew System::Windows::Forms::Label());
			this->carModelLbl = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->zipLbl = (gcnew System::Windows::Forms::Label());
			this->stateProvinceLbl = (gcnew System::Windows::Forms::Label());
			this->carMakeLbl = (gcnew System::Windows::Forms::Label());
			this->vinNrLbl = (gcnew System::Windows::Forms::Label());
			this->registrationNrLbl = (gcnew System::Windows::Forms::Label());
			this->carColorLbl = (gcnew System::Windows::Forms::Label());
			this->carYearLbl = (gcnew System::Windows::Forms::Label());
			this->carMake = (gcnew System::Windows::Forms::TextBox());
			this->vinNr = (gcnew System::Windows::Forms::TextBox());
			this->registrationNr = (gcnew System::Windows::Forms::TextBox());
			this->carColor = (gcnew System::Windows::Forms::TextBox());
			this->carModel = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->selectedRequest = (gcnew System::Windows::Forms::RichTextBox());
			this->travelEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->travelStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->travelStartLbl = (gcnew System::Windows::Forms::Label());
			this->travelEndLbl = (gcnew System::Windows::Forms::Label());
			this->zip = (gcnew System::Windows::Forms::MaskedTextBox());
			this->carYear = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// foundRequests
			// 
			this->foundRequests->FormattingEnabled = true;
			this->foundRequests->Location = System::Drawing::Point(27, 25);
			this->foundRequests->Name = L"foundRequests";
			this->foundRequests->Size = System::Drawing::Size(185, 446);
			this->foundRequests->TabIndex = 0;
			// 
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Travel Requests";
			// 
<<<<<<< HEAD
			// approve
			// 
			this->approve->Location = System::Drawing::Point(870, 448);
			this->approve->Name = L"approve";
			this->approve->Size = System::Drawing::Size(75, 23);
			this->approve->TabIndex = 2;
			this->approve->Text = L"Approve";
			this->approve->UseVisualStyleBackColor = true;
			this->approve->Click += gcnew System::EventHandler(this, &CBVTDMV::approve_Click);
			// 
			// reject
			// 
			this->reject->Location = System::Drawing::Point(951, 448);
			this->reject->Name = L"reject";
			this->reject->Size = System::Drawing::Size(75, 23);
			this->reject->TabIndex = 3;
			this->reject->Text = L"Reject";
			this->reject->UseVisualStyleBackColor = true;
			this->reject->Click += gcnew System::EventHandler(this, &CBVTDMV::reject_Click);
=======
			// approveButton
			// 
			this->approveButton->Location = System::Drawing::Point(870, 448);
			this->approveButton->Name = L"approveButton";
			this->approveButton->Size = System::Drawing::Size(75, 23);
			this->approveButton->TabIndex = 2;
			this->approveButton->Text = L"Approve";
			this->approveButton->UseVisualStyleBackColor = true;
			this->approveButton->Click += gcnew System::EventHandler(this, &CBVTDMV::approveButton_Click);
			// 
			// rejectButton
			// 
			this->rejectButton->Location = System::Drawing::Point(951, 448);
			this->rejectButton->Name = L"rejectButton";
			this->rejectButton->Size = System::Drawing::Size(75, 23);
			this->rejectButton->TabIndex = 3;
			this->rejectButton->Text = L"Reject";
			this->rejectButton->UseVisualStyleBackColor = true;
			this->rejectButton->Click += gcnew System::EventHandler(this, &CBVTDMV::rejectButton_Click);
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
			// 
			// firstName
			// 
			this->firstName->Location = System::Drawing::Point(313, 48);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(153, 20);
			this->firstName->TabIndex = 4;
			// 
			// lastName
			// 
			this->lastName->Location = System::Drawing::Point(313, 74);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(153, 20);
			this->lastName->TabIndex = 5;
			// 
			// licenseNr
			// 
			this->licenseNr->Location = System::Drawing::Point(373, 100);
			this->licenseNr->Name = L"licenseNr";
			this->licenseNr->Size = System::Drawing::Size(153, 20);
			this->licenseNr->TabIndex = 6;
			// 
			// passportNr
			// 
			this->passportNr->Location = System::Drawing::Point(341, 126);
			this->passportNr->Name = L"passportNr";
			this->passportNr->Size = System::Drawing::Size(100, 20);
			this->passportNr->TabIndex = 7;
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(329, 152);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(100, 20);
			this->address->TabIndex = 8;
			// 
			// city
			// 
			this->city->Location = System::Drawing::Point(277, 175);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(100, 20);
			this->city->TabIndex = 9;
			// 
			// stateProvince
			// 
			this->stateProvince->Location = System::Drawing::Point(338, 201);
			this->stateProvince->Name = L"stateProvince";
			this->stateProvince->Size = System::Drawing::Size(100, 20);
			this->stateProvince->TabIndex = 10;
			// 
			// firstNameLbl
			// 
			this->firstNameLbl->AutoSize = true;
			this->firstNameLbl->Location = System::Drawing::Point(247, 51);
			this->firstNameLbl->Name = L"firstNameLbl";
			this->firstNameLbl->Size = System::Drawing::Size(57, 13);
			this->firstNameLbl->TabIndex = 11;
			this->firstNameLbl->Text = L"First Name";
			// 
			// cityLbl
			// 
			this->cityLbl->AutoSize = true;
			this->cityLbl->Location = System::Drawing::Point(247, 178);
			this->cityLbl->Name = L"cityLbl";
			this->cityLbl->Size = System::Drawing::Size(24, 13);
			this->cityLbl->TabIndex = 12;
			this->cityLbl->Text = L"City";
			// 
			// addressLbl
			// 
			this->addressLbl->AutoSize = true;
			this->addressLbl->Location = System::Drawing::Point(247, 155);
			this->addressLbl->Name = L"addressLbl";
			this->addressLbl->Size = System::Drawing::Size(76, 13);
			this->addressLbl->TabIndex = 13;
			this->addressLbl->Text = L"Street Address";
			// 
			// passportNrLbl
			// 
			this->passportNrLbl->AutoSize = true;
			this->passportNrLbl->Location = System::Drawing::Point(247, 129);
			this->passportNrLbl->Name = L"passportNrLbl";
			this->passportNrLbl->Size = System::Drawing::Size(88, 13);
			this->passportNrLbl->TabIndex = 14;
			this->passportNrLbl->Text = L"Passport Number";
			// 
			// licenseNrLbl
			// 
			this->licenseNrLbl->AutoSize = true;
			this->licenseNrLbl->Location = System::Drawing::Point(247, 103);
			this->licenseNrLbl->Name = L"licenseNrLbl";
			this->licenseNrLbl->Size = System::Drawing::Size(120, 13);
			this->licenseNrLbl->TabIndex = 15;
			this->licenseNrLbl->Text = L"Drivers License Number";
			// 
			// lastNameLbl
			// 
<<<<<<< HEAD
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Last Name";
=======
			this->lastNameLbl->AutoSize = true;
			this->lastNameLbl->Location = System::Drawing::Point(247, 77);
			this->lastNameLbl->Name = L"lastNameLbl";
			this->lastNameLbl->Size = System::Drawing::Size(58, 13);
			this->lastNameLbl->TabIndex = 16;
			this->lastNameLbl->Text = L"Last Name";
			this->lastNameLbl->Click += gcnew System::EventHandler(this, &CBVTDMV::label7_Click);
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
			// 
			// carModelLbl
			// 
			this->carModelLbl->AutoSize = true;
			this->carModelLbl->Location = System::Drawing::Point(248, 432);
			this->carModelLbl->Name = L"carModelLbl";
			this->carModelLbl->Size = System::Drawing::Size(36, 13);
			this->carModelLbl->TabIndex = 17;
			this->carModelLbl->Text = L"Model";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(247, 341);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Vehicle Information";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(247, 261);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Dates of Travel";
			// 
			// zipLbl
			// 
			this->zipLbl->AutoSize = true;
			this->zipLbl->Location = System::Drawing::Point(247, 227);
			this->zipLbl->Name = L"zipLbl";
			this->zipLbl->Size = System::Drawing::Size(22, 13);
			this->zipLbl->TabIndex = 22;
			this->zipLbl->Text = L"Zip";
			// 
			// stateProvinceLbl
			// 
			this->stateProvinceLbl->AutoSize = true;
			this->stateProvinceLbl->Location = System::Drawing::Point(247, 204);
			this->stateProvinceLbl->Name = L"stateProvinceLbl";
			this->stateProvinceLbl->Size = System::Drawing::Size(85, 13);
			this->stateProvinceLbl->TabIndex = 23;
			this->stateProvinceLbl->Text = L"State / Province";
			// 
			// carMakeLbl
			// 
			this->carMakeLbl->AutoSize = true;
			this->carMakeLbl->Location = System::Drawing::Point(248, 411);
			this->carMakeLbl->Name = L"carMakeLbl";
			this->carMakeLbl->Size = System::Drawing::Size(34, 13);
			this->carMakeLbl->TabIndex = 24;
			this->carMakeLbl->Text = L"Make";
			// 
			// vinNrLbl
			// 
			this->vinNrLbl->AutoSize = true;
			this->vinNrLbl->Location = System::Drawing::Point(247, 389);
			this->vinNrLbl->Name = L"vinNrLbl";
			this->vinNrLbl->Size = System::Drawing::Size(25, 13);
			this->vinNrLbl->TabIndex = 25;
			this->vinNrLbl->Text = L"VIN";
			// 
			// registrationNrLbl
			// 
			this->registrationNrLbl->AutoSize = true;
			this->registrationNrLbl->Location = System::Drawing::Point(247, 367);
			this->registrationNrLbl->Name = L"registrationNrLbl";
			this->registrationNrLbl->Size = System::Drawing::Size(141, 13);
			this->registrationNrLbl->TabIndex = 26;
			this->registrationNrLbl->Text = L"Vehicle Registration Number";
			// 
			// carColorLbl
			// 
			this->carColorLbl->AutoSize = true;
			this->carColorLbl->Location = System::Drawing::Point(430, 411);
			this->carColorLbl->Name = L"carColorLbl";
			this->carColorLbl->Size = System::Drawing::Size(31, 13);
			this->carColorLbl->TabIndex = 27;
			this->carColorLbl->Text = L"Color";
			// 
			// carYearLbl
			// 
			this->carYearLbl->AutoSize = true;
			this->carYearLbl->Location = System::Drawing::Point(430, 432);
			this->carYearLbl->Name = L"carYearLbl";
			this->carYearLbl->Size = System::Drawing::Size(29, 13);
			this->carYearLbl->TabIndex = 28;
			this->carYearLbl->Text = L"Year";
			// 
			// carMake
			// 
			this->carMake->Location = System::Drawing::Point(288, 408);
			this->carMake->Name = L"carMake";
			this->carMake->Size = System::Drawing::Size(118, 20);
			this->carMake->TabIndex = 29;
			// 
			// vinNr
			// 
			this->vinNr->Location = System::Drawing::Point(278, 386);
			this->vinNr->Name = L"vinNr";
			this->vinNr->Size = System::Drawing::Size(153, 20);
			this->vinNr->TabIndex = 30;
			// 
			// registrationNr
			// 
			this->registrationNr->Location = System::Drawing::Point(394, 364);
			this->registrationNr->Name = L"registrationNr";
			this->registrationNr->Size = System::Drawing::Size(153, 20);
			this->registrationNr->TabIndex = 31;
			// 
			// carColor
			// 
			this->carColor->Location = System::Drawing::Point(467, 408);
			this->carColor->Name = L"carColor";
			this->carColor->Size = System::Drawing::Size(118, 20);
			this->carColor->TabIndex = 35;
			// 
			// carModel
			// 
			this->carModel->Location = System::Drawing::Point(288, 429);
			this->carModel->Name = L"carModel";
			this->carModel->Size = System::Drawing::Size(118, 20);
			this->carModel->TabIndex = 36;
			// 
<<<<<<< HEAD
=======
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(684, 21);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(141, 23);
			this->searchButton->TabIndex = 37;
			this->searchButton->Text = L"Search for Matching VIN";
			this->searchButton->UseVisualStyleBackColor = true;
			// 
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 477);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1040, 22);
			this->statusStrip1->TabIndex = 39;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(247, 26);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(103, 13);
			this->label20->TabIndex = 40;
			this->label20->Text = L"Personal Information";
			// 
<<<<<<< HEAD
			// authorizedAccounts
			// 
			this->authorizedAccounts->Location = System::Drawing::Point(684, 24);
			this->authorizedAccounts->Name = L"authorizedAccounts";
			this->authorizedAccounts->Size = System::Drawing::Size(323, 416);
			this->authorizedAccounts->TabIndex = 41;
			this->authorizedAccounts->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
=======
			// selectedRequest
			// 
			this->selectedRequest->Location = System::Drawing::Point(684, 50);
			this->selectedRequest->Name = L"selectedRequest";
			this->selectedRequest->Size = System::Drawing::Size(323, 392);
			this->selectedRequest->TabIndex = 41;
			this->selectedRequest->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
				L" there is probably a better way to do this but I am lazy";
			// 
			// travelEnd
			// 
			this->travelEnd->Location = System::Drawing::Point(313, 313);
			this->travelEnd->Name = L"travelEnd";
			this->travelEnd->Size = System::Drawing::Size(200, 20);
			this->travelEnd->TabIndex = 89;
			// 
			// travelStart
			// 
			this->travelStart->Location = System::Drawing::Point(313, 287);
			this->travelStart->Name = L"travelStart";
			this->travelStart->Size = System::Drawing::Size(200, 20);
			this->travelStart->TabIndex = 88;
			// 
			// travelStartLbl
			// 
			this->travelStartLbl->AutoSize = true;
			this->travelStartLbl->Location = System::Drawing::Point(247, 287);
			this->travelStartLbl->Name = L"travelStartLbl";
			this->travelStartLbl->Size = System::Drawing::Size(55, 13);
			this->travelStartLbl->TabIndex = 87;
			this->travelStartLbl->Text = L"Start Date";
			// 
			// travelEndLbl
			// 
			this->travelEndLbl->AutoSize = true;
			this->travelEndLbl->Location = System::Drawing::Point(247, 320);
			this->travelEndLbl->Name = L"travelEndLbl";
			this->travelEndLbl->Size = System::Drawing::Size(52, 13);
			this->travelEndLbl->TabIndex = 86;
			this->travelEndLbl->Text = L"End Date";
			// 
			// zip
			// 
			this->zip->Location = System::Drawing::Point(288, 224);
			this->zip->Mask = L"00000-9999";
			this->zip->Name = L"zip";
			this->zip->Size = System::Drawing::Size(100, 20);
			this->zip->TabIndex = 90;
			// 
			// carYear
			// 
			this->carYear->Location = System::Drawing::Point(467, 429);
			this->carYear->Mask = L"0000";
			this->carYear->Name = L"carYear";
			this->carYear->Size = System::Drawing::Size(100, 20);
			this->carYear->TabIndex = 91;
			// 
			// loadAuthroized
			// 
			this->loadAuthroized->Location = System::Drawing::Point(684, 449);
			this->loadAuthroized->Name = L"loadAuthroized";
			this->loadAuthroized->Size = System::Drawing::Size(152, 23);
			this->loadAuthroized->TabIndex = 92;
			this->loadAuthroized->Text = L"Load Authroized";
			this->loadAuthroized->UseVisualStyleBackColor = true;
			this->loadAuthroized->Click += gcnew System::EventHandler(this, &CBVTDMV::loadAuthroized_Click);
			// 
			// clientInput
			// 
			this->clientInput->Location = System::Drawing::Point(27, 24);
			this->clientInput->Name = L"clientInput";
			this->clientInput->Size = System::Drawing::Size(214, 421);
			this->clientInput->TabIndex = 93;
			this->clientInput->Text = L"";
			// 
			// loadRequests
			// 
			this->loadRequests->Location = System::Drawing::Point(27, 449);
			this->loadRequests->Name = L"loadRequests";
			this->loadRequests->Size = System::Drawing::Size(129, 23);
			this->loadRequests->TabIndex = 94;
			this->loadRequests->Text = L"Load Requests";
			this->loadRequests->UseVisualStyleBackColor = true;
			this->loadRequests->Click += gcnew System::EventHandler(this, &CBVTDMV::loadRequests_Click);
			// 
			// CBVTDMV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 499);
<<<<<<< HEAD
			this->Controls->Add(this->loadRequests);
			this->Controls->Add(this->clientInput);
			this->Controls->Add(this->loadAuthroized);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->zip);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->authorizedAccounts);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->reject);
			this->Controls->Add(this->approve);
			this->Controls->Add(this->label1);
=======
			this->Controls->Add(this->carYear);
			this->Controls->Add(this->zip);
			this->Controls->Add(this->travelEnd);
			this->Controls->Add(this->travelStart);
			this->Controls->Add(this->travelStartLbl);
			this->Controls->Add(this->travelEndLbl);
			this->Controls->Add(this->selectedRequest);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->carModel);
			this->Controls->Add(this->carColor);
			this->Controls->Add(this->registrationNr);
			this->Controls->Add(this->vinNr);
			this->Controls->Add(this->carMake);
			this->Controls->Add(this->carYearLbl);
			this->Controls->Add(this->carColorLbl);
			this->Controls->Add(this->registrationNrLbl);
			this->Controls->Add(this->vinNrLbl);
			this->Controls->Add(this->carMakeLbl);
			this->Controls->Add(this->stateProvinceLbl);
			this->Controls->Add(this->zipLbl);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->carModelLbl);
			this->Controls->Add(this->lastNameLbl);
			this->Controls->Add(this->licenseNrLbl);
			this->Controls->Add(this->passportNrLbl);
			this->Controls->Add(this->addressLbl);
			this->Controls->Add(this->cityLbl);
			this->Controls->Add(this->firstNameLbl);
			this->Controls->Add(this->stateProvince);
			this->Controls->Add(this->city);
			this->Controls->Add(this->address);
			this->Controls->Add(this->passportNr);
			this->Controls->Add(this->licenseNr);
			this->Controls->Add(this->lastName);
			this->Controls->Add(this->firstName);
			this->Controls->Add(this->rejectButton);
			this->Controls->Add(this->approveButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->foundRequests);
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
			this->Name = L"CBVTDMV";
			this->Text = L"CBVT DMV System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
<<<<<<< HEAD
	private: System::Void reject_Click(System::Object^  sender, System::EventArgs^  e) {
				 FILE* fp = fopen(CLIENT_INPUT_FILE, "rb");
				 rapidjson::Document readDoc;
				 char readBuffer[65536];
				 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
				 readDoc.ParseStream(instream);
				 fclose(fp);
				 readDoc["verified_dmv"] = false;
				 FILE* writeFile = fopen(CLIENT_INPUT_FILE, "wb");
				 rapidjson::GenericStringBuffer< rapidjson::UTF8<> > buffer;
				 rapidjson::Writer<rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > writer(buffer);
				 readDoc.Accept(writer);
				 const char* str = buffer.GetString();
				 fprintf(writeFile, "%s", str);
				 fclose(writeFile);
	}
	private: System::Void approve_Click(System::Object^  sender, System::EventArgs^  e) {
				 FILE* fp = fopen(CLIENT_INPUT_FILE, "rb");
				 rapidjson::Document readDoc;
				 char readBuffer[65536];
				 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
				 readDoc.ParseStream(instream);
				 fclose(fp);
				 readDoc["verified_dmv"] = true;
				 FILE* writeFile = fopen(CLIENT_INPUT_FILE, "wb");
				 rapidjson::GenericStringBuffer< rapidjson::UTF8<> > buffer;
				 rapidjson::Writer<rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > writer(buffer);
				 readDoc.Accept(writer);
				 const char* str = buffer.GetString();
				 fprintf(writeFile, "%s", str);
				 fclose(writeFile);
	}
private: System::Void loadAuthroized_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE* fp = fopen(AUTHORIZED_DMV, "rb");
			 rapidjson::Document readDoc;
			 char readBuffer[65536];
			 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
			 readDoc.ParseStream(instream);
			 fclose(fp);
			 rapidjson::StringBuffer buffer;
			 rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
			 readDoc.Accept(writer);
			 String^ myStr = gcnew String(buffer.GetString());
			 authorizedAccounts->Text = myStr;
=======
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void approveButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("The request has been approved!");
	}
private: System::Void rejectButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("The request has been rejected!");
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
>>>>>>> f2cf37e1a8ae2dac384bbb81dd20961d1582063d
}
private: System::Void loadRequests_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE* fp = fopen(CLIENT_INPUT_FILE, "rb");
			 rapidjson::Document readDoc;
			 char readBuffer[65536];
			 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
			 readDoc.ParseStream(instream);
			 fclose(fp);
			 rapidjson::StringBuffer buffer;
			 rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
			 readDoc.Accept(writer);
			 String^ myStr = gcnew String(buffer.GetString());
			 clientInput->Text = myStr;
}
};
}
