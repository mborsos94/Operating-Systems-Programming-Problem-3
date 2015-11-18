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
			InitializeComponent();
			BankInsur aBankInsur;
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
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
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
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(684, 45);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(323, 392);
			this->richTextBox1->TabIndex = 83;
			this->richTextBox1->Text = L"This is a placeholder for potentially displaying the information found in the DB,"
				L" there is probably a better way to do this but I am lazy";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(247, 21);
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
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(275, 219);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 80;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(684, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 23);
			this->button3->TabIndex = 79;
			this->button3->Text = L"Search for Matching VIN";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(288, 424);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(118, 20);
			this->textBox15->TabIndex = 78;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(467, 403);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(118, 20);
			this->textBox14->TabIndex = 77;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(467, 429);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(118, 20);
			this->textBox13->TabIndex = 76;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(306, 279);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(153, 20);
			this->textBox12->TabIndex = 75;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(306, 301);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(153, 20);
			this->textBox11->TabIndex = 74;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(394, 359);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(153, 20);
			this->textBox10->TabIndex = 73;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(278, 381);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(153, 20);
			this->textBox9->TabIndex = 72;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(288, 403);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(118, 20);
			this->textBox8->TabIndex = 71;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(430, 427);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 13);
			this->label19->TabIndex = 70;
			this->label19->Text = L"Year";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(430, 406);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 13);
			this->label18->TabIndex = 69;
			this->label18->Text = L"Color";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(247, 362);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(141, 13);
			this->label17->TabIndex = 68;
			this->label17->Text = L"Vehicle Registration Number";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(247, 384);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 67;
			this->label16->Text = L"VIN";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(248, 406);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 66;
			this->label15->Text = L"Make";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(247, 199);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 13);
			this->label14->TabIndex = 65;
			this->label14->Text = L"State / Province";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(247, 222);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 64;
			this->label13->Text = L"Zip";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(247, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 13);
			this->label12->TabIndex = 63;
			this->label12->Text = L"Dates of Travel";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(247, 282);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Start Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(247, 304);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 61;
			this->label10->Text = L"End Date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(247, 336);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 60;
			this->label9->Text = L"Vehicle Information";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(248, 427);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Model";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 58;
			this->label7->Text = L"Last Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(247, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 13);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Drivers Lisence Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(247, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Passport Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Street Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(247, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 54;
			this->label3->Text = L"City";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 53;
			this->label2->Text = L"First Name";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(338, 196);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 52;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(277, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 51;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(329, 147);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 50;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(341, 121);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 49;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(373, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 48;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 20);
			this->textBox2->TabIndex = 47;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(313, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 46;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(951, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Reject";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(870, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Approve";
			this->button1->UseVisualStyleBackColor = true;
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
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(27, 20);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(185, 446);
			this->listBox1->TabIndex = 42;
			// 
			// CBVTBankInsurance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 503);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
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
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"CBVTBankInsurance";
			this->Text = L"CBVT Bank / Insurance System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
