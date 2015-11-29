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
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;



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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Travel Requests";
			// 
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
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(313, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(373, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(341, 126);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(329, 152);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(277, 175);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(338, 201);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(247, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"City";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Street Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(247, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Passport Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(247, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Drivers Lisence Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Last Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(248, 432);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Model";
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
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(247, 227);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Zip";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(247, 204);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"State / Province";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(248, 411);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Make";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(247, 389);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"VIN";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(247, 367);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(141, 13);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Vehicle Registration Number";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(430, 411);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 13);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Color";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(430, 432);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 13);
			this->label19->TabIndex = 28;
			this->label19->Text = L"Year";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(288, 408);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(118, 20);
			this->textBox8->TabIndex = 29;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(278, 386);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(153, 20);
			this->textBox9->TabIndex = 30;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(394, 364);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(153, 20);
			this->textBox10->TabIndex = 31;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(467, 408);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(118, 20);
			this->textBox14->TabIndex = 35;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(288, 429);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(118, 20);
			this->textBox15->TabIndex = 36;
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
			// authorizedAccounts
			// 
			this->authorizedAccounts->Location = System::Drawing::Point(684, 24);
			this->authorizedAccounts->Name = L"authorizedAccounts";
			this->authorizedAccounts->Size = System::Drawing::Size(323, 416);
			this->authorizedAccounts->TabIndex = 41;
			this->authorizedAccounts->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
				L" there is probably a better way to do this but I am lazy";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(313, 313);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 89;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(313, 287);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 88;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(247, 287);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 87;
			this->label11->Text = L"Start Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(247, 320);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 86;
			this->label10->Text = L"End Date";
			// 
			// zip
			// 
			this->zip->Location = System::Drawing::Point(288, 224);
			this->zip->Mask = L"00000-9999";
			this->zip->Name = L"zip";
			this->zip->Size = System::Drawing::Size(100, 20);
			this->zip->TabIndex = 90;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(467, 429);
			this->maskedTextBox1->Mask = L"0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox1->TabIndex = 91;
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
			this->Name = L"CBVTDMV";
			this->Text = L"CBVT DMV System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void reject_Click(System::Object^  sender, System::EventArgs^  e) {
				 FILE* fp = fopen(CLIENT_INPUT_FILE, "r+");
				 rapidjson::Document readDoc;
				 char readBuffer[65536];
				 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
				 readDoc.ParseStream(instream);
				 rapidjson::Value verifiedDMV;
				 verifiedDMV.SetBool(false);
				 readDoc.RemoveMember("verified_dmv");
				 readDoc.AddMember("verified_dmv", verifiedDMV, readDoc.GetAllocator());
				 rapidjson::GenericStringBuffer< rapidjson::UTF8<> > buffer;
				 rapidjson::Writer<rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > writer(buffer);
				 readDoc.Accept(writer);
				 const char* str = buffer.GetString();
				 fprintf(fp, "%s", str);
				 fclose(fp);
	}
	private: System::Void approve_Click(System::Object^  sender, System::EventArgs^  e) {
				 FILE* fp = fopen(CLIENT_INPUT_FILE, "r+");
				 rapidjson::Document readDoc;
				 char readBuffer[65536];
				 rapidjson::FileReadStream instream(fp, readBuffer, sizeof(readBuffer));
				 readDoc.ParseStream(instream);
				 rapidjson::Value verifiedDMV;
				 verifiedDMV.SetBool(true);
				 readDoc.RemoveMember("verified_dmv");
				 readDoc.AddMember("verified_dmv", verifiedDMV, readDoc.GetAllocator());
				 rapidjson::GenericStringBuffer< rapidjson::UTF8<> > buffer;
				 rapidjson::Writer<rapidjson::GenericStringBuffer< rapidjson::UTF8<> > > writer(buffer);
				 readDoc.Accept(writer);
				 const char* str = buffer.GetString();
				 fprintf(fp, "%s", str);
				 fclose(fp);
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
