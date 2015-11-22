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
	protected:

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->textBox19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->textBox20);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1384, 180);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Client Information";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1181, 125);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(22, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Zip";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(1227, 122);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(133, 20);
			this->textBox19->TabIndex = 15;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(856, 125);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(85, 13);
			this->label20->TabIndex = 14;
			this->label20->Text = L"State / Province";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(963, 122);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(192, 20);
			this->textBox20->TabIndex = 13;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(564, 125);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 13);
			this->label18->TabIndex = 12;
			this->label18->Text = L"City";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(609, 122);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(192, 20);
			this->textBox18->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(238, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Driver\'s License Number";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(385, 87);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(194, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(617, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Passport Number";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(725, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(238, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Address";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(314, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(521, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Last Name";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(598, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(238, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"First Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(315, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(7, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &CBVTClient::pictureBox1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dateTimePicker2);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(13, 200);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(450, 100);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dates of Travel";
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
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(469, 200);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(928, 100);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vehicle Information";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(328, 59);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(126, 20);
			this->textBox13->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(244, 62);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Model";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(90, 59);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(126, 20);
			this->textBox12->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 62);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Make";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(743, 59);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(93, 20);
			this->textBox11->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(691, 62);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Color";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(543, 59);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(93, 20);
			this->textBox10->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Vehicle Registration Number";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(485, 62);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Year";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(153, 23);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(194, 20);
			this->textBox7->TabIndex = 13;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(531, 22);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(199, 20);
			this->textBox9->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(447, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"VIN Number";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Location = System::Drawing::Point(13, 306);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(614, 70);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Bank Information";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(312, 27);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(71, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Loan Number";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(389, 27);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(170, 20);
			this->textBox15->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 27);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Bank Name";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(94, 27);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(170, 20);
			this->textBox14->TabIndex = 11;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->textBox16);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->textBox17);
			this->groupBox5->Location = System::Drawing::Point(633, 306);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(764, 70);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Insurance Information";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(321, 27);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Policy Number";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(415, 27);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(170, 20);
			this->textBox16->TabIndex = 13;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(17, 27);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 12;
			this->label17->Text = L"Company Name";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(120, 27);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(170, 20);
			this->textBox17->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1273, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Submit Information";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CBVTClient::button1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 428);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1409, 22);
			this->statusStrip1->TabIndex = 82;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(78, 22);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 16;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(78, 49);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 17;
			// 
			// CBVTClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1409, 450);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CBVTClient";
			this->Text = L"CBVT Client System";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
					 pictureBox1->Image = Image::FromFile(loadImage->FileName);
				 }
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Client aClient;
			 MessageBox::Show("Request submitted");
			 aClient.Stop();
			 this->Close();
}
};
}
#pragma endregion