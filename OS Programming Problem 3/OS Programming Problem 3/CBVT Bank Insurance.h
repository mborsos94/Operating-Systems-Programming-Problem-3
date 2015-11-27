#pragma once
#include "CBVT Classes.h"

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
	private: System::Windows::Forms::RichTextBox^  selectedRequest;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Button^  searchButton;


	private: System::Windows::Forms::TextBox^  carModel;

	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  registrationNr;
	private: System::Windows::Forms::TextBox^  vinNr;
	private: System::Windows::Forms::TextBox^  carMake;
	private: System::Windows::Forms::Label^  carYearLbl;







	private: System::Windows::Forms::Label^  carColorLbl;

	private: System::Windows::Forms::Label^  registrationNrLbl;
	private: System::Windows::Forms::Label^  vinNrLbl;
	private: System::Windows::Forms::Label^  carMakeLbl;



	private: System::Windows::Forms::Label^  stateProvinceLbl;
	private: System::Windows::Forms::Label^  zipLbl;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  travelStartLbl;
	private: System::Windows::Forms::Label^  travelEndLbl;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  carModelLbl;

	private: System::Windows::Forms::Label^  lastNameLbl;
	private: System::Windows::Forms::Label^  licenseNrLbl;
	private: System::Windows::Forms::Label^  passportNrLbl;
	private: System::Windows::Forms::Label^  addressLbl;
	private: System::Windows::Forms::Label^  cityLbl;





	private: System::Windows::Forms::Label^  firstNameLbl;

	private: System::Windows::Forms::TextBox^  stateProvince;

	private: System::Windows::Forms::TextBox^  city;

	private: System::Windows::Forms::TextBox^  address;

	private: System::Windows::Forms::TextBox^  passportNr;

	private: System::Windows::Forms::TextBox^  licenseNr;

	private: System::Windows::Forms::TextBox^  lastName;

	private: System::Windows::Forms::TextBox^  firstName;
	private: System::Windows::Forms::Button^  rejectButton;


	private: System::Windows::Forms::Button^  approveButton;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  foundRequests;

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
			this->selectedRequest = (gcnew System::Windows::Forms::RichTextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->carModel = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->registrationNr = (gcnew System::Windows::Forms::TextBox());
			this->vinNr = (gcnew System::Windows::Forms::TextBox());
			this->carMake = (gcnew System::Windows::Forms::TextBox());
			this->carYearLbl = (gcnew System::Windows::Forms::Label());
			this->carColorLbl = (gcnew System::Windows::Forms::Label());
			this->registrationNrLbl = (gcnew System::Windows::Forms::Label());
			this->vinNrLbl = (gcnew System::Windows::Forms::Label());
			this->carMakeLbl = (gcnew System::Windows::Forms::Label());
			this->stateProvinceLbl = (gcnew System::Windows::Forms::Label());
			this->zipLbl = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->travelStartLbl = (gcnew System::Windows::Forms::Label());
			this->travelEndLbl = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->carModelLbl = (gcnew System::Windows::Forms::Label());
			this->lastNameLbl = (gcnew System::Windows::Forms::Label());
			this->licenseNrLbl = (gcnew System::Windows::Forms::Label());
			this->passportNrLbl = (gcnew System::Windows::Forms::Label());
			this->addressLbl = (gcnew System::Windows::Forms::Label());
			this->cityLbl = (gcnew System::Windows::Forms::Label());
			this->firstNameLbl = (gcnew System::Windows::Forms::Label());
			this->stateProvince = (gcnew System::Windows::Forms::TextBox());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->passportNr = (gcnew System::Windows::Forms::TextBox());
			this->licenseNr = (gcnew System::Windows::Forms::TextBox());
			this->lastName = (gcnew System::Windows::Forms::TextBox());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->rejectButton = (gcnew System::Windows::Forms::Button());
			this->approveButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->foundRequests = (gcnew System::Windows::Forms::ListBox());
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
			this->SuspendLayout();
			// 
			// selectedRequest
			// 
			this->selectedRequest->Location = System::Drawing::Point(684, 45);
			this->selectedRequest->Name = L"selectedRequest";
			this->selectedRequest->Size = System::Drawing::Size(323, 392);
			this->selectedRequest->TabIndex = 83;
			this->selectedRequest->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
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
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(684, 16);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(141, 23);
			this->searchButton->TabIndex = 79;
			this->searchButton->Text = L"Search for Matching VIN";
			this->searchButton->UseVisualStyleBackColor = true;
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
			// carYearLbl
			// 
			this->carYearLbl->AutoSize = true;
			this->carYearLbl->Location = System::Drawing::Point(430, 410);
			this->carYearLbl->Name = L"carYearLbl";
			this->carYearLbl->Size = System::Drawing::Size(29, 13);
			this->carYearLbl->TabIndex = 70;
			this->carYearLbl->Text = L"Year";
			// 
			// carColorLbl
			// 
			this->carColorLbl->AutoSize = true;
			this->carColorLbl->Location = System::Drawing::Point(430, 389);
			this->carColorLbl->Name = L"carColorLbl";
			this->carColorLbl->Size = System::Drawing::Size(31, 13);
			this->carColorLbl->TabIndex = 69;
			this->carColorLbl->Text = L"Color";
			// 
			// registrationNrLbl
			// 
			this->registrationNrLbl->AutoSize = true;
			this->registrationNrLbl->Location = System::Drawing::Point(247, 345);
			this->registrationNrLbl->Name = L"registrationNrLbl";
			this->registrationNrLbl->Size = System::Drawing::Size(141, 13);
			this->registrationNrLbl->TabIndex = 68;
			this->registrationNrLbl->Text = L"Vehicle Registration Number";
			// 
			// vinNrLbl
			// 
			this->vinNrLbl->AutoSize = true;
			this->vinNrLbl->Location = System::Drawing::Point(247, 367);
			this->vinNrLbl->Name = L"vinNrLbl";
			this->vinNrLbl->Size = System::Drawing::Size(25, 13);
			this->vinNrLbl->TabIndex = 67;
			this->vinNrLbl->Text = L"VIN";
			// 
			// carMakeLbl
			// 
			this->carMakeLbl->AutoSize = true;
			this->carMakeLbl->Location = System::Drawing::Point(248, 389);
			this->carMakeLbl->Name = L"carMakeLbl";
			this->carMakeLbl->Size = System::Drawing::Size(34, 13);
			this->carMakeLbl->TabIndex = 66;
			this->carMakeLbl->Text = L"Make";
			// 
			// stateProvinceLbl
			// 
			this->stateProvinceLbl->AutoSize = true;
			this->stateProvinceLbl->Location = System::Drawing::Point(247, 182);
			this->stateProvinceLbl->Name = L"stateProvinceLbl";
			this->stateProvinceLbl->Size = System::Drawing::Size(85, 13);
			this->stateProvinceLbl->TabIndex = 65;
			this->stateProvinceLbl->Text = L"State / Province";
			// 
			// zipLbl
			// 
			this->zipLbl->AutoSize = true;
			this->zipLbl->Location = System::Drawing::Point(247, 205);
			this->zipLbl->Name = L"zipLbl";
			this->zipLbl->Size = System::Drawing::Size(22, 13);
			this->zipLbl->TabIndex = 64;
			this->zipLbl->Text = L"Zip";
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
			// travelStartLbl
			// 
			this->travelStartLbl->AutoSize = true;
			this->travelStartLbl->Location = System::Drawing::Point(247, 265);
			this->travelStartLbl->Name = L"travelStartLbl";
			this->travelStartLbl->Size = System::Drawing::Size(55, 13);
			this->travelStartLbl->TabIndex = 62;
			this->travelStartLbl->Text = L"Start Date";
			// 
			// travelEndLbl
			// 
			this->travelEndLbl->AutoSize = true;
			this->travelEndLbl->Location = System::Drawing::Point(247, 298);
			this->travelEndLbl->Name = L"travelEndLbl";
			this->travelEndLbl->Size = System::Drawing::Size(52, 13);
			this->travelEndLbl->TabIndex = 61;
			this->travelEndLbl->Text = L"End Date";
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
			// carModelLbl
			// 
			this->carModelLbl->AutoSize = true;
			this->carModelLbl->Location = System::Drawing::Point(248, 410);
			this->carModelLbl->Name = L"carModelLbl";
			this->carModelLbl->Size = System::Drawing::Size(36, 13);
			this->carModelLbl->TabIndex = 59;
			this->carModelLbl->Text = L"Model";
			// 
			// lastNameLbl
			// 
			this->lastNameLbl->AutoSize = true;
			this->lastNameLbl->Location = System::Drawing::Point(247, 55);
			this->lastNameLbl->Name = L"lastNameLbl";
			this->lastNameLbl->Size = System::Drawing::Size(58, 13);
			this->lastNameLbl->TabIndex = 58;
			this->lastNameLbl->Text = L"Last Name";
			// 
			// licenseNrLbl
			// 
			this->licenseNrLbl->AutoSize = true;
			this->licenseNrLbl->Location = System::Drawing::Point(247, 81);
			this->licenseNrLbl->Name = L"licenseNrLbl";
			this->licenseNrLbl->Size = System::Drawing::Size(120, 13);
			this->licenseNrLbl->TabIndex = 57;
			this->licenseNrLbl->Text = L"Drivers License Number";
			// 
			// passportNrLbl
			// 
			this->passportNrLbl->AutoSize = true;
			this->passportNrLbl->Location = System::Drawing::Point(247, 107);
			this->passportNrLbl->Name = L"passportNrLbl";
			this->passportNrLbl->Size = System::Drawing::Size(88, 13);
			this->passportNrLbl->TabIndex = 56;
			this->passportNrLbl->Text = L"Passport Number";
			// 
			// addressLbl
			// 
			this->addressLbl->AutoSize = true;
			this->addressLbl->Location = System::Drawing::Point(247, 133);
			this->addressLbl->Name = L"addressLbl";
			this->addressLbl->Size = System::Drawing::Size(76, 13);
			this->addressLbl->TabIndex = 55;
			this->addressLbl->Text = L"Street Address";
			// 
			// cityLbl
			// 
			this->cityLbl->AutoSize = true;
			this->cityLbl->Location = System::Drawing::Point(247, 156);
			this->cityLbl->Name = L"cityLbl";
			this->cityLbl->Size = System::Drawing::Size(24, 13);
			this->cityLbl->TabIndex = 54;
			this->cityLbl->Text = L"City";
			// 
			// firstNameLbl
			// 
			this->firstNameLbl->AutoSize = true;
			this->firstNameLbl->Location = System::Drawing::Point(247, 29);
			this->firstNameLbl->Name = L"firstNameLbl";
			this->firstNameLbl->Size = System::Drawing::Size(57, 13);
			this->firstNameLbl->TabIndex = 53;
			this->firstNameLbl->Text = L"First Name";
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
			// rejectButton
			// 
			this->rejectButton->Location = System::Drawing::Point(951, 443);
			this->rejectButton->Name = L"rejectButton";
			this->rejectButton->Size = System::Drawing::Size(75, 23);
			this->rejectButton->TabIndex = 45;
			this->rejectButton->Text = L"Reject";
			this->rejectButton->UseVisualStyleBackColor = true;
			this->rejectButton->Click += gcnew System::EventHandler(this, &CBVTBankInsurance::rejectButton_Click);
			// 
			// approveButton
			// 
			this->approveButton->Location = System::Drawing::Point(870, 443);
			this->approveButton->Name = L"approveButton";
			this->approveButton->Size = System::Drawing::Size(75, 23);
			this->approveButton->TabIndex = 44;
			this->approveButton->Text = L"Approve";
			this->approveButton->UseVisualStyleBackColor = true;
			this->approveButton->Click += gcnew System::EventHandler(this, &CBVTBankInsurance::approveButton_Click);
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
			// foundRequests
			// 
			this->foundRequests->FormattingEnabled = true;
			this->foundRequests->Location = System::Drawing::Point(27, 20);
			this->foundRequests->Name = L"foundRequests";
			this->foundRequests->Size = System::Drawing::Size(185, 446);
			this->foundRequests->TabIndex = 42;
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
			// CBVTBankInsurance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 503);
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
			this->Controls->Add(this->selectedRequest);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->carModel);
			this->Controls->Add(this->textBox14);
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
			this->Controls->Add(this->travelStartLbl);
			this->Controls->Add(this->travelEndLbl);
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
			this->Name = L"CBVTBankInsurance";
			this->Text = L"CBVT Bank / Insurance System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void approveButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("The request has been approved!");
	}
private: System::Void rejectButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("The request has been rejected!");
}
};
}
