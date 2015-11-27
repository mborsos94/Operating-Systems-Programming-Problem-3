#pragma once
#include "CBVT Classes.h"

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



	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::RichTextBox^  selectedRequest;

	private: System::Windows::Forms::DateTimePicker^  travelEnd;
	private: System::Windows::Forms::DateTimePicker^  travelStart;
	private: System::Windows::Forms::Label^  travelStartLbl;
	private: System::Windows::Forms::Label^  travelEndLbl;




	private: System::Windows::Forms::MaskedTextBox^  zip;
	private: System::Windows::Forms::MaskedTextBox^  carYear;


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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Travel Requests";
			// 
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
			this->lastNameLbl->AutoSize = true;
			this->lastNameLbl->Location = System::Drawing::Point(247, 77);
			this->lastNameLbl->Name = L"lastNameLbl";
			this->lastNameLbl->Size = System::Drawing::Size(58, 13);
			this->lastNameLbl->TabIndex = 16;
			this->lastNameLbl->Text = L"Last Name";
			this->lastNameLbl->Click += gcnew System::EventHandler(this, &CBVTDMV::label7_Click);
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
			this->label9->Click += gcnew System::EventHandler(this, &CBVTDMV::label9_Click);
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
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(684, 21);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(141, 23);
			this->searchButton->TabIndex = 37;
			this->searchButton->Text = L"Search for Matching VIN";
			this->searchButton->UseVisualStyleBackColor = true;
			// 
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
			// selectedRequest
			// 
			this->selectedRequest->Location = System::Drawing::Point(684, 50);
			this->selectedRequest->Name = L"selectedRequest";
			this->selectedRequest->Size = System::Drawing::Size(323, 392);
			this->selectedRequest->TabIndex = 41;
			this->selectedRequest->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
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
			// CBVTDMV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 499);
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
			this->Name = L"CBVTDMV";
			this->Text = L"CBVT DMV System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void approveButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("The request has been approved!");
	}
private: System::Void rejectButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("The request has been rejected!");
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
