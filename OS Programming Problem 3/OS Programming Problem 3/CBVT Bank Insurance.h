#pragma once
#include <cstdio>
#include <fstream>
#include <msclr\marshal_cppstd.h>

#include "CBVT Classes.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"

namespace CBVTBankInsurNS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CBVTBankInsurance
	/// </summary>
	public ref class CBVTBankInsurance : public System::Windows::Forms::Form
	{
	public:
		CBVTBankInsurance(void)
		{
			BankInsur aBankInsur;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CBVTBankInsurance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  authorizedAccounts;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;


	private: System::Windows::Forms::TextBox^  carModel;

	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  registrationNr;
	private: System::Windows::Forms::TextBox^  vinNr;
	private: System::Windows::Forms::TextBox^  carMake;






	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  stateProvince;

	private: System::Windows::Forms::TextBox^  city;

	private: System::Windows::Forms::TextBox^  address;

	private: System::Windows::Forms::TextBox^  passportNr;

	private: System::Windows::Forms::TextBox^  licenseNr;

	private: System::Windows::Forms::TextBox^  lastName;

	private: System::Windows::Forms::TextBox^  firstName;
	private: System::Windows::Forms::Button^  reject;


	private: System::Windows::Forms::Button^  approve;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::DateTimePicker^  travelStart;
	private: System::Windows::Forms::DateTimePicker^  travelEnd;


	private: System::Windows::Forms::MaskedTextBox^  zip;
	private: System::Windows::Forms::MaskedTextBox^  carYear;
	private: System::Windows::Forms::Label^  loanNrLbl;
	private: System::Windows::Forms::TextBox^  loanNr;
	private: System::Windows::Forms::Label^  bankNameLbl;
	private: System::Windows::Forms::TextBox^  bankName;
	private: System::Windows::Forms::Label^  policyNrLbl;
	private: System::Windows::Forms::TextBox^  policyNr;
	private: System::Windows::Forms::Label^  insurNameLbl;
	private: System::Windows::Forms::TextBox^  insurName;
	private: System::Windows::Forms::Button^  loadAuthorized;
	private: System::Windows::Forms::Button^  loadRequests;
	private: System::Windows::Forms::RichTextBox^  clientInput;


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
			this->authorizedAccounts = (gcnew System::Windows::Forms::RichTextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->carModel = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->registrationNr = (gcnew System::Windows::Forms::TextBox());
			this->vinNr = (gcnew System::Windows::Forms::TextBox());
			this->carMake = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stateProvince = (gcnew System::Windows::Forms::TextBox());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->passportNr = (gcnew System::Windows::Forms::TextBox());
			this->licenseNr = (gcnew System::Windows::Forms::TextBox());
			this->lastName = (gcnew System::Windows::Forms::TextBox());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->reject = (gcnew System::Windows::Forms::Button());
			this->approve = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->travelStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->travelEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->zip = (gcnew System::Windows::Forms::MaskedTextBox());
			this->carYear = (gcnew System::Windows::Forms::MaskedTextBox());
			this->loanNrLbl = (gcnew System::Windows::Forms::Label());
			this->loanNr = (gcnew System::Windows::Forms::TextBox());
			this->bankNameLbl = (gcnew System::Windows::Forms::Label());
			this->bankName = (gcnew System::Windows::Forms::TextBox());
			this->policyNrLbl = (gcnew System::Windows::Forms::Label());
			this->policyNr = (gcnew System::Windows::Forms::TextBox());
			this->insurNameLbl = (gcnew System::Windows::Forms::Label());
			this->insurName = (gcnew System::Windows::Forms::TextBox());
			this->loadAuthorized = (gcnew System::Windows::Forms::Button());
			this->loadRequests = (gcnew System::Windows::Forms::Button());
			this->clientInput = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// authorizedAccounts
			// 
			this->authorizedAccounts->Location = System::Drawing::Point(684, 20);
			this->authorizedAccounts->Name = L"authorizedAccounts";
			this->authorizedAccounts->ReadOnly = true;
			this->authorizedAccounts->Size = System::Drawing::Size(323, 417);
			this->authorizedAccounts->TabIndex = 83;
			this->authorizedAccounts->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
				L" there is probably a better way to do this but I am lazy";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(247, 4);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(103, 13);
			this->label20->TabIndex = 82;
			this->label20->Text = L"Personal Information";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 481);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1048, 22);
			this->statusStrip1->TabIndex = 81;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// carModel
			// 
			this->carModel->Location = System::Drawing::Point(288, 407);
			this->carModel->Name = L"carModel";
			this->carModel->Size = System::Drawing::Size(118, 20);
			this->carModel->TabIndex = 78;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(467, 386);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(118, 20);
			this->textBox14->TabIndex = 77;
			// 
			// registrationNr
			// 
			this->registrationNr->Location = System::Drawing::Point(394, 342);
			this->registrationNr->Name = L"registrationNr";
			this->registrationNr->Size = System::Drawing::Size(153, 20);
			this->registrationNr->TabIndex = 73;
			// 
			// vinNr
			// 
			this->vinNr->Location = System::Drawing::Point(278, 364);
			this->vinNr->Name = L"vinNr";
			this->vinNr->Size = System::Drawing::Size(153, 20);
			this->vinNr->TabIndex = 72;
			// 
			// carMake
			// 
			this->carMake->Location = System::Drawing::Point(288, 386);
			this->carMake->Name = L"carMake";
			this->carMake->Size = System::Drawing::Size(118, 20);
			this->carMake->TabIndex = 71;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(430, 410);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 13);
			this->label19->TabIndex = 70;
			this->label19->Text = L"Year";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(430, 389);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 13);
			this->label18->TabIndex = 69;
			this->label18->Text = L"Color";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(247, 345);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(141, 13);
			this->label17->TabIndex = 68;
			this->label17->Text = L"Vehicle Registration Number";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(247, 367);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 67;
			this->label16->Text = L"VIN";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(248, 389);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 66;
			this->label15->Text = L"Make";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(247, 182);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 13);
			this->label14->TabIndex = 65;
			this->label14->Text = L"State / Province";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(247, 205);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 64;
			this->label13->Text = L"Zip";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(247, 239);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 13);
			this->label12->TabIndex = 63;
			this->label12->Text = L"Dates of Travel";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(247, 265);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Start Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(247, 298);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 61;
			this->label10->Text = L"End Date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(247, 319);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 60;
			this->label9->Text = L"Vehicle Information";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(248, 410);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Model";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 58;
			this->label7->Text = L"Last Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(247, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 13);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Drivers Lisence Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(247, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Passport Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Street Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(247, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 54;
			this->label3->Text = L"City";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 53;
			this->label2->Text = L"First Name";
			// 
			// stateProvince
			// 
			this->stateProvince->Location = System::Drawing::Point(338, 179);
			this->stateProvince->Name = L"stateProvince";
			this->stateProvince->Size = System::Drawing::Size(100, 20);
			this->stateProvince->TabIndex = 52;
			// 
			// city
			// 
			this->city->Location = System::Drawing::Point(277, 153);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(100, 20);
			this->city->TabIndex = 51;
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(329, 130);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(100, 20);
			this->address->TabIndex = 50;
			// 
			// passportNr
			// 
			this->passportNr->Location = System::Drawing::Point(341, 104);
			this->passportNr->Name = L"passportNr";
			this->passportNr->Size = System::Drawing::Size(100, 20);
			this->passportNr->TabIndex = 49;
			// 
			// licenseNr
			// 
			this->licenseNr->Location = System::Drawing::Point(373, 78);
			this->licenseNr->Name = L"licenseNr";
			this->licenseNr->Size = System::Drawing::Size(153, 20);
			this->licenseNr->TabIndex = 48;
			// 
			// lastName
			// 
			this->lastName->Location = System::Drawing::Point(313, 52);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(153, 20);
			this->lastName->TabIndex = 47;
			// 
			// firstName
			// 
			this->firstName->Location = System::Drawing::Point(313, 26);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(153, 20);
			this->firstName->TabIndex = 46;
			// 
			// reject
			// 
			this->reject->Location = System::Drawing::Point(951, 443);
			this->reject->Name = L"reject";
			this->reject->Size = System::Drawing::Size(75, 23);
			this->reject->TabIndex = 45;
			this->reject->Text = L"Reject";
			this->reject->UseVisualStyleBackColor = true;
			this->reject->Click += gcnew System::EventHandler(this, &CBVTBankInsurance::reject_Click);
			// 
			// approve
			// 
			this->approve->Location = System::Drawing::Point(870, 443);
			this->approve->Name = L"approve";
			this->approve->Size = System::Drawing::Size(75, 23);
			this->approve->TabIndex = 44;
			this->approve->Text = L"Approve";
			this->approve->UseVisualStyleBackColor = true;
			this->approve->Click += gcnew System::EventHandler(this, &CBVTBankInsurance::approve_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Travel Requests";
			// 
			// travelStart
			// 
			this->travelStart->Location = System::Drawing::Point(313, 265);
			this->travelStart->Name = L"travelStart";
			this->travelStart->Size = System::Drawing::Size(200, 20);
			this->travelStart->TabIndex = 84;
			// 
			// travelEnd
			// 
			this->travelEnd->Location = System::Drawing::Point(313, 291);
			this->travelEnd->Name = L"travelEnd";
			this->travelEnd->Size = System::Drawing::Size(200, 20);
			this->travelEnd->TabIndex = 85;
			// 
			// zip
			// 
			this->zip->Location = System::Drawing::Point(278, 202);
			this->zip->Mask = L"00000-9999";
			this->zip->Name = L"zip";
			this->zip->Size = System::Drawing::Size(100, 20);
			this->zip->TabIndex = 86;
			// 
			// carYear
			// 
			this->carYear->Location = System::Drawing::Point(467, 407);
			this->carYear->Mask = L"0000";
			this->carYear->Name = L"carYear";
			this->carYear->Size = System::Drawing::Size(100, 20);
			this->carYear->TabIndex = 92;
			// 
			// loanNrLbl
			// 
			this->loanNrLbl->AutoSize = true;
			this->loanNrLbl->Location = System::Drawing::Point(247, 453);
			this->loanNrLbl->Name = L"loanNrLbl";
			this->loanNrLbl->Size = System::Drawing::Size(71, 13);
			this->loanNrLbl->TabIndex = 96;
			this->loanNrLbl->Text = L"Loan Number";
			// 
			// loanNr
			// 
			this->loanNr->Location = System::Drawing::Point(325, 450);
			this->loanNr->Name = L"loanNr";
			this->loanNr->Size = System::Drawing::Size(92, 20);
			this->loanNr->TabIndex = 95;
			// 
			// bankNameLbl
			// 
			this->bankNameLbl->AutoSize = true;
			this->bankNameLbl->Location = System::Drawing::Point(248, 430);
			this->bankNameLbl->Name = L"bankNameLbl";
			this->bankNameLbl->Size = System::Drawing::Size(63, 13);
			this->bankNameLbl->TabIndex = 94;
			this->bankNameLbl->Text = L"Bank Name";
			// 
			// bankName
			// 
			this->bankName->Location = System::Drawing::Point(325, 430);
			this->bankName->Name = L"bankName";
			this->bankName->Size = System::Drawing::Size(91, 20);
			this->bankName->TabIndex = 93;
			// 
			// policyNrLbl
			// 
			this->policyNrLbl->AutoSize = true;
			this->policyNrLbl->Location = System::Drawing::Point(431, 453);
			this->policyNrLbl->Name = L"policyNrLbl";
			this->policyNrLbl->Size = System::Drawing::Size(75, 13);
			this->policyNrLbl->TabIndex = 100;
			this->policyNrLbl->Text = L"Policy Number";
			// 
			// policyNr
			// 
			this->policyNr->Location = System::Drawing::Point(519, 450);
			this->policyNr->Name = L"policyNr";
			this->policyNr->Size = System::Drawing::Size(125, 20);
			this->policyNr->TabIndex = 99;
			// 
			// insurNameLbl
			// 
			this->insurNameLbl->AutoSize = true;
			this->insurNameLbl->Location = System::Drawing::Point(431, 430);
			this->insurNameLbl->Name = L"insurNameLbl";
			this->insurNameLbl->Size = System::Drawing::Size(82, 13);
			this->insurNameLbl->TabIndex = 98;
			this->insurNameLbl->Text = L"Company Name";
			// 
			// insurName
			// 
			this->insurName->Location = System::Drawing::Point(519, 427);
			this->insurName->Name = L"insurName";
			this->insurName->Size = System::Drawing::Size(125, 20);
			this->insurName->TabIndex = 97;
			// 
			// loadAuthorized
			// 
			this->loadAuthorized->Location = System::Drawing::Point(684, 443);
			this->loadAuthorized->Name = L"loadAuthorized";
			this->loadAuthorized->Size = System::Drawing::Size(141, 23);
			this->loadAuthorized->TabIndex = 101;
			this->loadAuthorized->Text = L"Load Authorized Accounts";
			this->loadAuthorized->UseVisualStyleBackColor = true;
			this->loadAuthorized->Click += gcnew System::EventHandler(this, &CBVTBankInsurance::loadAuthorized_Click);
			// 
			// loadRequests
			// 
			this->loadRequests->Location = System::Drawing::Point(27, 443);
			this->loadRequests->Name = L"loadRequests";
			this->loadRequests->Size = System::Drawing::Size(102, 23);
			this->loadRequests->TabIndex = 102;
			this->loadRequests->Text = L"Load Requests";
			this->loadRequests->UseVisualStyleBackColor = true;
			this->loadRequests->Click += gcnew System::EventHandler(this, &CBVTBankInsurance::loadRequests_Click);
			// 
			// clientInput
			// 
			this->clientInput->Location = System::Drawing::Point(27, 20);
			this->clientInput->Name = L"clientInput";
			this->clientInput->Size = System::Drawing::Size(214, 417);
			this->clientInput->TabIndex = 103;
			this->clientInput->Text = L"";
			// 
			// CBVTBankInsurance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 503);
			this->Controls->Add(this->clientInput);
			this->Controls->Add(this->loadRequests);
			this->Controls->Add(this->loadAuthorized);
			this->Controls->Add(this->policyNrLbl);
			this->Controls->Add(this->policyNr);
			this->Controls->Add(this->insurNameLbl);
			this->Controls->Add(this->insurName);
			this->Controls->Add(this->loanNrLbl);
			this->Controls->Add(this->loanNr);
			this->Controls->Add(this->bankNameLbl);
			this->Controls->Add(this->bankName);
			this->Controls->Add(this->carYear);
			this->Controls->Add(this->zip);
			this->Controls->Add(this->travelEnd);
			this->Controls->Add(this->travelStart);
			this->Controls->Add(this->authorizedAccounts);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->carModel);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->registrationNr);
			this->Controls->Add(this->vinNr);
			this->Controls->Add(this->carMake);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->stateProvince);
			this->Controls->Add(this->city);
			this->Controls->Add(this->address);
			this->Controls->Add(this->passportNr);
			this->Controls->Add(this->licenseNr);
			this->Controls->Add(this->lastName);
			this->Controls->Add(this->firstName);
			this->Controls->Add(this->reject);
			this->Controls->Add(this->approve);
			this->Controls->Add(this->label1);
			this->Name = L"CBVTBankInsurance";
			this->Text = L"CBVT Bank / Insurance System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void loadAuthorized_Click(System::Object^  sender, System::EventArgs^  e) {
		FILE* fp = fopen(AUTHORIZED_BANK, "rb");
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
private: System::Void approve_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE* fp = fopen(CLIENT_INPUT_FILE, "r+");
			 rapidjson::Document readDoc;
			 char readBuffer[65536];
			 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
			 readDoc.ParseStream(instream);
			 rapidjson::Value verifiedBank;
			 verifiedBank.SetBool(true);
			 readDoc.RemoveMember("verified_bank");
			 readDoc.AddMember("verified_bank", verifiedBank, readDoc.GetAllocator());
			 rapidjson::GenericStringBuffer< rapidjson::UTF8<> > buffer;
			 rapidjson::Writer<rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > writer(buffer);
			 readDoc.Accept(writer);
			 const char* str = buffer.GetString();
			 fprintf(fp, "%s", str);
			 fclose(fp);
}
private: System::Void reject_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE* fp = fopen(CLIENT_INPUT_FILE, "r+");
			 rapidjson::Document readDoc;
			 char readBuffer[65536];
			 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
			 readDoc.ParseStream(instream);
			 rapidjson::Value verifiedBank;
			 verifiedBank.SetBool(false);
			 readDoc.RemoveMember("verified_bank");
			 readDoc.AddMember("verified_bank", verifiedBank, readDoc.GetAllocator());
			 rapidjson::GenericStringBuffer< rapidjson::UTF8<> > buffer;
			 rapidjson::Writer<rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > writer(buffer);
			 readDoc.Accept(writer);
			 const char* str = buffer.GetString();
			 fprintf(fp, "%s", str);
			 fclose(fp);
}
};
}
