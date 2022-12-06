#pragma once
#include"Header.h"
#include<msclr\marshal_cppstd.h>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Booking
	/// </summary>
	public ref class Booking : public System::Windows::Forms::Form
	{
	public:
		Booking(void)
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
		~Booking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ paymentMethod;
	private: System::Windows::Forms::RadioButton^ netButton;
	protected:

	protected:

	private: System::Windows::Forms::RadioButton^ debitButton;

	private: System::Windows::Forms::RadioButton^ creditButton;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ age;





	private: System::Windows::Forms::TextBox^ fullName;
	private: System::Windows::Forms::TextBox^ contactNum;
	private: System::Windows::Forms::TextBox^ email;

	private: System::Windows::Forms::TextBox^ cnic;





	private: System::Windows::Forms::TextBox^ debitCardnum;
	private: System::Windows::Forms::TextBox^ debitCvv;


	private: System::Windows::Forms::TextBox^ creditCvv;
	private: System::Windows::Forms::TextBox^ creditPin;
	private: System::Windows::Forms::TextBox^ netPassword;





	private: System::Windows::Forms::TextBox^ netUsername;
	private: System::Windows::Forms::ComboBox^ gender;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ emailLabel;

	private: System::Windows::Forms::Label^ contactLabel;

	private: System::Windows::Forms::Label^ ageLabel;

	private: System::Windows::Forms::Label^ nameLabel;

	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Label^ genderLabel;
	private: System::Windows::Forms::Label^ cnicLabel;
	private: System::Windows::Forms::Label^ debitcvvLabel;

	private: System::Windows::Forms::Label^ debitexpLabel;

	private: System::Windows::Forms::Label^ debitcardnumLabel;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ netpasswordLabel;
	private: System::Windows::Forms::Label^ netusernameLabel;
	private: System::Windows::Forms::Label^ creditpinLabel;
	private: System::Windows::Forms::Label^ creditcvvLabel;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Booking::typeid));
			this->paymentMethod = (gcnew System::Windows::Forms::GroupBox());
			this->creditButton = (gcnew System::Windows::Forms::RadioButton());
			this->debitButton = (gcnew System::Windows::Forms::RadioButton());
			this->netButton = (gcnew System::Windows::Forms::RadioButton());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->fullName = (gcnew System::Windows::Forms::TextBox());
			this->contactNum = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->cnic = (gcnew System::Windows::Forms::TextBox());
			this->debitCardnum = (gcnew System::Windows::Forms::TextBox());
			this->debitCvv = (gcnew System::Windows::Forms::TextBox());
			this->creditCvv = (gcnew System::Windows::Forms::TextBox());
			this->creditPin = (gcnew System::Windows::Forms::TextBox());
			this->netPassword = (gcnew System::Windows::Forms::TextBox());
			this->netUsername = (gcnew System::Windows::Forms::TextBox());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->contactLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->cnicLabel = (gcnew System::Windows::Forms::Label());
			this->debitcvvLabel = (gcnew System::Windows::Forms::Label());
			this->debitexpLabel = (gcnew System::Windows::Forms::Label());
			this->debitcardnumLabel = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->netpasswordLabel = (gcnew System::Windows::Forms::Label());
			this->netusernameLabel = (gcnew System::Windows::Forms::Label());
			this->creditpinLabel = (gcnew System::Windows::Forms::Label());
			this->creditcvvLabel = (gcnew System::Windows::Forms::Label());
			this->paymentMethod->SuspendLayout();
			this->SuspendLayout();
			// 
			// paymentMethod
			// 
			this->paymentMethod->BackColor = System::Drawing::Color::Transparent;
			this->paymentMethod->Controls->Add(this->netButton);
			this->paymentMethod->Controls->Add(this->debitButton);
			this->paymentMethod->Controls->Add(this->creditButton);
			this->paymentMethod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentMethod->ForeColor = System::Drawing::Color::Black;
			this->paymentMethod->Location = System::Drawing::Point(77, 382);
			this->paymentMethod->Name = L"paymentMethod";
			this->paymentMethod->Size = System::Drawing::Size(200, 116);
			this->paymentMethod->TabIndex = 0;
			this->paymentMethod->TabStop = false;
			this->paymentMethod->Text = L"Payment Method";
			// 
			// creditButton
			// 
			this->creditButton->AutoSize = true;
			this->creditButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditButton->Location = System::Drawing::Point(3, 19);
			this->creditButton->Name = L"creditButton";
			this->creditButton->Size = System::Drawing::Size(107, 25);
			this->creditButton->TabIndex = 0;
			this->creditButton->TabStop = true;
			this->creditButton->Text = L"Credit Card";
			this->creditButton->UseVisualStyleBackColor = true;
			// 
			// debitButton
			// 
			this->debitButton->AutoSize = true;
			this->debitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitButton->Location = System::Drawing::Point(3, 50);
			this->debitButton->Name = L"debitButton";
			this->debitButton->Size = System::Drawing::Size(102, 25);
			this->debitButton->TabIndex = 1;
			this->debitButton->TabStop = true;
			this->debitButton->Text = L"Debit Card";
			this->debitButton->UseVisualStyleBackColor = true;
			// 
			// netButton
			// 
			this->netButton->AutoSize = true;
			this->netButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netButton->Location = System::Drawing::Point(3, 81);
			this->netButton->Name = L"netButton";
			this->netButton->Size = System::Drawing::Size(113, 25);
			this->netButton->TabIndex = 2;
			this->netButton->TabStop = true;
			this->netButton->Text = L"Net Banking";
			this->netButton->UseVisualStyleBackColor = true;
			// 
			// username
			// 
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(77, 52);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(100, 25);
			this->username->TabIndex = 1;
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(320, 52);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 25);
			this->password->TabIndex = 2;
			// 
			// age
			// 
			this->age->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->Location = System::Drawing::Point(77, 127);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(100, 25);
			this->age->TabIndex = 3;
			// 
			// fullName
			// 
			this->fullName->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fullName->Location = System::Drawing::Point(542, 52);
			this->fullName->Name = L"fullName";
			this->fullName->Size = System::Drawing::Size(100, 25);
			this->fullName->TabIndex = 4;
			// 
			// contactNum
			// 
			this->contactNum->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactNum->Location = System::Drawing::Point(320, 127);
			this->contactNum->Name = L"contactNum";
			this->contactNum->Size = System::Drawing::Size(100, 25);
			this->contactNum->TabIndex = 6;
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(542, 127);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(100, 25);
			this->email->TabIndex = 7;
			// 
			// cnic
			// 
			this->cnic->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(542, 205);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(100, 25);
			this->cnic->TabIndex = 9;
			// 
			// debitCardnum
			// 
			this->debitCardnum->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitCardnum->Location = System::Drawing::Point(418, 382);
			this->debitCardnum->Name = L"debitCardnum";
			this->debitCardnum->Size = System::Drawing::Size(100, 25);
			this->debitCardnum->TabIndex = 10;
			// 
			// debitCvv
			// 
			this->debitCvv->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitCvv->Location = System::Drawing::Point(418, 468);
			this->debitCvv->Name = L"debitCvv";
			this->debitCvv->Size = System::Drawing::Size(100, 25);
			this->debitCvv->TabIndex = 11;
			// 
			// creditCvv
			// 
			this->creditCvv->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditCvv->Location = System::Drawing::Point(474, 292);
			this->creditCvv->Name = L"creditCvv";
			this->creditCvv->Size = System::Drawing::Size(100, 25);
			this->creditCvv->TabIndex = 13;
			// 
			// creditPin
			// 
			this->creditPin->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditPin->Location = System::Drawing::Point(613, 292);
			this->creditPin->Name = L"creditPin";
			this->creditPin->Size = System::Drawing::Size(100, 25);
			this->creditPin->TabIndex = 14;
			// 
			// netPassword
			// 
			this->netPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netPassword->Location = System::Drawing::Point(613, 329);
			this->netPassword->Name = L"netPassword";
			this->netPassword->Size = System::Drawing::Size(100, 25);
			this->netPassword->TabIndex = 15;
			// 
			// netUsername
			// 
			this->netUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netUsername->Location = System::Drawing::Point(474, 329);
			this->netUsername->Name = L"netUsername";
			this->netUsername->Size = System::Drawing::Size(100, 25);
			this->netUsername->TabIndex = 16;
			// 
			// gender
			// 
			this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gender->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->FormattingEnabled = true;
			this->gender->Location = System::Drawing::Point(77, 202);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(100, 25);
			this->gender->TabIndex = 17;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->Location = System::Drawing::Point(74, 34);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(60, 15);
			this->usernameLabel->TabIndex = 18;
			this->usernameLabel->Text = L"Username";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->BackColor = System::Drawing::Color::Transparent;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(539, 109);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(36, 15);
			this->emailLabel->TabIndex = 19;
			this->emailLabel->Text = L"Email";
			// 
			// contactLabel
			// 
			this->contactLabel->AutoSize = true;
			this->contactLabel->BackColor = System::Drawing::Color::Transparent;
			this->contactLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactLabel->Location = System::Drawing::Point(317, 109);
			this->contactLabel->Name = L"contactLabel";
			this->contactLabel->Size = System::Drawing::Size(96, 15);
			this->contactLabel->TabIndex = 20;
			this->contactLabel->Text = L"Contact Number";
			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->BackColor = System::Drawing::Color::Transparent;
			this->ageLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageLabel->Location = System::Drawing::Point(74, 109);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(28, 15);
			this->ageLabel->TabIndex = 21;
			this->ageLabel->Text = L"Age";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::Color::Transparent;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(539, 34);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(39, 15);
			this->nameLabel->TabIndex = 22;
			this->nameLabel->Text = L"Name";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(317, 34);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(57, 15);
			this->passwordLabel->TabIndex = 23;
			this->passwordLabel->Text = L"Password";
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->BackColor = System::Drawing::Color::Transparent;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderLabel->Location = System::Drawing::Point(74, 184);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(45, 15);
			this->genderLabel->TabIndex = 24;
			this->genderLabel->Text = L"Gender";
			// 
			// cnicLabel
			// 
			this->cnicLabel->AutoSize = true;
			this->cnicLabel->BackColor = System::Drawing::Color::Transparent;
			this->cnicLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnicLabel->Location = System::Drawing::Point(539, 187);
			this->cnicLabel->Name = L"cnicLabel";
			this->cnicLabel->Size = System::Drawing::Size(35, 15);
			this->cnicLabel->TabIndex = 25;
			this->cnicLabel->Text = L"CNIC";
			// 
			// debitcvvLabel
			// 
			this->debitcvvLabel->AutoSize = true;
			this->debitcvvLabel->BackColor = System::Drawing::Color::Transparent;
			this->debitcvvLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitcvvLabel->Location = System::Drawing::Point(415, 450);
			this->debitcvvLabel->Name = L"debitcvvLabel";
			this->debitcvvLabel->Size = System::Drawing::Size(76, 15);
			this->debitcvvLabel->TabIndex = 26;
			this->debitcvvLabel->Text = L"CVV Number";
			// 
			// debitexpLabel
			// 
			this->debitexpLabel->AutoSize = true;
			this->debitexpLabel->BackColor = System::Drawing::Color::Transparent;
			this->debitexpLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitexpLabel->Location = System::Drawing::Point(570, 364);
			this->debitexpLabel->Name = L"debitexpLabel";
			this->debitexpLabel->Size = System::Drawing::Size(65, 15);
			this->debitexpLabel->TabIndex = 27;
			this->debitexpLabel->Text = L"Expiry Date";
			// 
			// debitcardnumLabel
			// 
			this->debitcardnumLabel->AutoSize = true;
			this->debitcardnumLabel->BackColor = System::Drawing::Color::Transparent;
			this->debitcardnumLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitcardnumLabel->Location = System::Drawing::Point(415, 364);
			this->debitcardnumLabel->Name = L"debitcardnumLabel";
			this->debitcardnumLabel->Size = System::Drawing::Size(79, 15);
			this->debitcardnumLabel->TabIndex = 28;
			this->debitcardnumLabel->Text = L"Card Number";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(573, 382);
			this->dateTimePicker1->MinDate = System::DateTime(2020, 4, 26, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 25);
			this->dateTimePicker1->TabIndex = 29;
			// 
			// netpasswordLabel
			// 
			this->netpasswordLabel->AutoSize = true;
			this->netpasswordLabel->BackColor = System::Drawing::Color::Transparent;
			this->netpasswordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netpasswordLabel->Location = System::Drawing::Point(334, 411);
			this->netpasswordLabel->Name = L"netpasswordLabel";
			this->netpasswordLabel->Size = System::Drawing::Size(86, 15);
			this->netpasswordLabel->TabIndex = 30;
			this->netpasswordLabel->Text = L"Bank Password";
			// 
			// netusernameLabel
			// 
			this->netusernameLabel->AutoSize = true;
			this->netusernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->netusernameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netusernameLabel->Location = System::Drawing::Point(317, 382);
			this->netusernameLabel->Name = L"netusernameLabel";
			this->netusernameLabel->Size = System::Drawing::Size(89, 15);
			this->netusernameLabel->TabIndex = 31;
			this->netusernameLabel->Text = L"Bank Username";
			// 
			// creditpinLabel
			// 
			this->creditpinLabel->AutoSize = true;
			this->creditpinLabel->BackColor = System::Drawing::Color::Transparent;
			this->creditpinLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditpinLabel->Location = System::Drawing::Point(610, 257);
			this->creditpinLabel->Name = L"creditpinLabel";
			this->creditpinLabel->Size = System::Drawing::Size(26, 15);
			this->creditpinLabel->TabIndex = 32;
			this->creditpinLabel->Text = L"PIN";
			// 
			// creditcvvLabel
			// 
			this->creditcvvLabel->AutoSize = true;
			this->creditcvvLabel->BackColor = System::Drawing::Color::Transparent;
			this->creditcvvLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditcvvLabel->Location = System::Drawing::Point(514, 257);
			this->creditcvvLabel->Name = L"creditcvvLabel";
			this->creditcvvLabel->Size = System::Drawing::Size(76, 15);
			this->creditcvvLabel->TabIndex = 33;
			this->creditcvvLabel->Text = L"CVV Number";
			// 
			// Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(766, 577);
			this->Controls->Add(this->creditcvvLabel);
			this->Controls->Add(this->creditpinLabel);
			this->Controls->Add(this->netusernameLabel);
			this->Controls->Add(this->netpasswordLabel);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->debitcardnumLabel);
			this->Controls->Add(this->debitexpLabel);
			this->Controls->Add(this->debitcvvLabel);
			this->Controls->Add(this->cnicLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->contactLabel);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->netUsername);
			this->Controls->Add(this->netPassword);
			this->Controls->Add(this->creditPin);
			this->Controls->Add(this->creditCvv);
			this->Controls->Add(this->debitCvv);
			this->Controls->Add(this->debitCardnum);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->email);
			this->Controls->Add(this->contactNum);
			this->Controls->Add(this->fullName);
			this->Controls->Add(this->age);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->paymentMethod);
			this->Name = L"Booking";
			this->Load += gcnew System::EventHandler(this, &Booking::Booking_Load);
			this->paymentMethod->ResumeLayout(false);
			this->paymentMethod->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Booking_Load(System::Object^ sender, System::EventArgs^ e) {
	}





};
}
