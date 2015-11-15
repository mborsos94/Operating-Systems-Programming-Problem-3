#include "Client.h"
#include "DMV.h"
#include "Bank Insurance.h"
#pragma once
#include "CBVT Client.h"
#include "CBVT Bank Insurance.h"
#include "CBVT DMV.h"

Client::Client()
{
	auto_ptr<Client> aClient(new Client(*this));
	client_ptr = aClient;
	client_ptr->Start();
}

Client::~Client()
{

}

DWORD Client::run()
{
	cout << "test";
	CBVTClient^ client = gcnew CBVTClient;
	client->Show();
	return 0;
}

namespace CBVTMainNS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for CBVTMain
	/// </summary>
	public ref class CBVTMain : public System::Windows::Forms::Form
	{
	public:
		CBVTMain(void)
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
		~CBVTMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Select_Server_Label;
	protected:

	private: System::Windows::Forms::Button^  Client_Button;
	private: System::Windows::Forms::Button^  DMV_Button;
	protected:


	private: System::Windows::Forms::Button^  Bank_Insurance_Button;


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
			this->Select_Server_Label = (gcnew System::Windows::Forms::Label());
			this->Client_Button = (gcnew System::Windows::Forms::Button());
			this->DMV_Button = (gcnew System::Windows::Forms::Button());
			this->Bank_Insurance_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Select_Server_Label
			// 
			this->Select_Server_Label->AutoSize = true;
			this->Select_Server_Label->Location = System::Drawing::Point(122, 9);
			this->Select_Server_Label->Name = L"Select_Server_Label";
			this->Select_Server_Label->Size = System::Drawing::Size(142, 13);
			this->Select_Server_Label->TabIndex = 0;
			this->Select_Server_Label->Text = L"Select which server to open:";
			// 
			// Client_Button
			// 
			this->Client_Button->Location = System::Drawing::Point(154, 72);
			this->Client_Button->Name = L"Client_Button";
			this->Client_Button->Size = System::Drawing::Size(75, 23);
			this->Client_Button->TabIndex = 1;
			this->Client_Button->Text = L"Client";
			this->Client_Button->UseVisualStyleBackColor = true;
			this->Client_Button->Click += gcnew System::EventHandler(this, &CBVTMain::Client_Button_Click);
			// 
			// DMV_Button
			// 
			this->DMV_Button->Location = System::Drawing::Point(154, 169);
			this->DMV_Button->Name = L"DMV_Button";
			this->DMV_Button->Size = System::Drawing::Size(75, 23);
			this->DMV_Button->TabIndex = 2;
			this->DMV_Button->Text = L"DMV Server";
			this->DMV_Button->UseVisualStyleBackColor = true;
			this->DMV_Button->Click += gcnew System::EventHandler(this, &CBVTMain::DMV_Button_Click);
			// 
			// Bank_Insurance_Button
			// 
			this->Bank_Insurance_Button->Location = System::Drawing::Point(118, 119);
			this->Bank_Insurance_Button->Name = L"Bank_Insurance_Button";
			this->Bank_Insurance_Button->Size = System::Drawing::Size(146, 23);
			this->Bank_Insurance_Button->TabIndex = 3;
			this->Bank_Insurance_Button->Text = L"Bank / Insurance Server";
			this->Bank_Insurance_Button->UseVisualStyleBackColor = true;
			this->Bank_Insurance_Button->Click += gcnew System::EventHandler(this, &CBVTMain::Bank_Insurance_Button_Click);
			// 
			// CBVTMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 242);
			this->Controls->Add(this->Bank_Insurance_Button);
			this->Controls->Add(this->DMV_Button);
			this->Controls->Add(this->Client_Button);
			this->Controls->Add(this->Select_Server_Label);
			this->Name = L"CBVTMain";
			this->Text = L"Cross Border Vehicle Transport System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Client_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{	
				 CBVTClient^ client = gcnew CBVTClient;
				 client->Show();
	}
	private: System::Void Bank_Insurance_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 CBVTBankInsurance^ bank_insur = gcnew CBVTBankInsurance;
				 bank_insur->Show();
	}
private: System::Void DMV_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
			 CBVTDMV^ dmv = gcnew CBVTDMV;
			 dmv->Show();
	}
};
}
