#pragma once
#include <iostream>
void h_and_y_swap(double coef[2][2]);
void convert(double coef[2][2], double allcoef[3][3], int n);

namespace hCoeffConvert {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  h11text;
	protected:

	protected:




	private: System::Windows::Forms::ComboBox^  h11box;
	private: System::Windows::Forms::ComboBox^  h12box;
	private: System::Windows::Forms::TextBox^  h12text;



	private: System::Windows::Forms::ComboBox^  h21box;
	private: System::Windows::Forms::TextBox^  h21text;


	private: System::Windows::Forms::ComboBox^  h22box;
	private: System::Windows::Forms::TextBox^  h22text;
	private: System::Windows::Forms::RadioButton^  OB_RB;
	private: System::Windows::Forms::RadioButton^  OE_RB;
	private: System::Windows::Forms::RadioButton^  OK_RB;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  h11b_text;
	private: System::Windows::Forms::TextBox^  h11e_text;
	private: System::Windows::Forms::TextBox^  h11k_text;
	private: System::Windows::Forms::TextBox^  h12k_text;
	private: System::Windows::Forms::TextBox^  h12e_text;
	private: System::Windows::Forms::TextBox^  h12b_text;
	private: System::Windows::Forms::TextBox^  h21k_text;
	private: System::Windows::Forms::TextBox^  h21e_text;
	private: System::Windows::Forms::TextBox^  h21b_text;
	private: System::Windows::Forms::TextBox^  h22k_text;
	private: System::Windows::Forms::TextBox^  h22e_text;

	private: System::Windows::Forms::TextBox^  h22b_text;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;










	protected:

	protected:

	protected:

	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		//List<KeyValuePair<String^, double>>^ mDensity;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->h11text = (gcnew System::Windows::Forms::TextBox());
			this->h11box = (gcnew System::Windows::Forms::ComboBox());
			this->h12box = (gcnew System::Windows::Forms::ComboBox());
			this->h12text = (gcnew System::Windows::Forms::TextBox());
			this->h21box = (gcnew System::Windows::Forms::ComboBox());
			this->h21text = (gcnew System::Windows::Forms::TextBox());
			this->h22box = (gcnew System::Windows::Forms::ComboBox());
			this->h22text = (gcnew System::Windows::Forms::TextBox());
			this->OB_RB = (gcnew System::Windows::Forms::RadioButton());
			this->OE_RB = (gcnew System::Windows::Forms::RadioButton());
			this->OK_RB = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->h11b_text = (gcnew System::Windows::Forms::TextBox());
			this->h11e_text = (gcnew System::Windows::Forms::TextBox());
			this->h11k_text = (gcnew System::Windows::Forms::TextBox());
			this->h12k_text = (gcnew System::Windows::Forms::TextBox());
			this->h12e_text = (gcnew System::Windows::Forms::TextBox());
			this->h12b_text = (gcnew System::Windows::Forms::TextBox());
			this->h21k_text = (gcnew System::Windows::Forms::TextBox());
			this->h21e_text = (gcnew System::Windows::Forms::TextBox());
			this->h21b_text = (gcnew System::Windows::Forms::TextBox());
			this->h22k_text = (gcnew System::Windows::Forms::TextBox());
			this->h22e_text = (gcnew System::Windows::Forms::TextBox());
			this->h22b_text = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// h11text
			// 
			this->h11text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h11text->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h11text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h11text->Location = System::Drawing::Point(189, 57);
			this->h11text->Name = L"h11text";
			this->h11text->Size = System::Drawing::Size(100, 48);
			this->h11text->TabIndex = 4;
			this->h11text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::h11text_KeyPress);
			// 
			// h11box
			// 
			this->h11box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h11box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h11box->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h11box->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h11box->FormattingEnabled = true;
			this->h11box->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"10⁻⁶", L"10⁻⁵", L"10⁻⁴", L"10⁻³", L"10⁻²", L"10⁻¹",
					L"1", L"10¹", L"10²", L"10³", L"10⁴", L"10⁵", L"10⁶"
			});
			this->h11box->Location = System::Drawing::Point(59, 57);
			this->h11box->Name = L"h11box";
			this->h11box->Size = System::Drawing::Size(95, 32);
			this->h11box->TabIndex = 5;
			// 
			// h12box
			// 
			this->h12box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h12box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h12box->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h12box->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h12box->FormattingEnabled = true;
			this->h12box->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"10⁻⁶", L"10⁻⁵", L"10⁻⁴", L"10⁻³", L"10⁻²", L"10⁻¹",
					L"1", L"10¹", L"10²", L"10³", L"10⁴", L"10⁵", L"10⁶"
			});
			this->h12box->Location = System::Drawing::Point(59, 137);
			this->h12box->Name = L"h12box";
			this->h12box->Size = System::Drawing::Size(95, 32);
			this->h12box->TabIndex = 7;
			// 
			// h12text
			// 
			this->h12text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h12text->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h12text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h12text->Location = System::Drawing::Point(189, 137);
			this->h12text->Name = L"h12text";
			this->h12text->Size = System::Drawing::Size(100, 48);
			this->h12text->TabIndex = 6;
			this->h12text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::h12text_KeyPress);
			// 
			// h21box
			// 
			this->h21box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h21box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h21box->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h21box->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h21box->FormattingEnabled = true;
			this->h21box->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"10⁻⁶", L"10⁻⁵", L"10⁻⁴", L"10⁻³", L"10⁻²", L"10⁻¹",
					L"1", L"10¹", L"10²", L"10³", L"10⁴", L"10⁵", L"10⁶"
			});
			this->h21box->Location = System::Drawing::Point(59, 217);
			this->h21box->Name = L"h21box";
			this->h21box->Size = System::Drawing::Size(95, 32);
			this->h21box->TabIndex = 9;
			// 
			// h21text
			// 
			this->h21text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h21text->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h21text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h21text->Location = System::Drawing::Point(189, 217);
			this->h21text->Name = L"h21text";
			this->h21text->Size = System::Drawing::Size(100, 48);
			this->h21text->TabIndex = 8;
			this->h21text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::h21text_KeyPress);
			// 
			// h22box
			// 
			this->h22box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h22box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h22box->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h22box->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h22box->FormattingEnabled = true;
			this->h22box->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"10⁻⁶", L"10⁻⁵", L"10⁻⁴", L"10⁻³", L"10⁻²", L"10⁻¹",
					L"1", L"10¹", L"10²", L"10³", L"10⁴", L"10⁵", L"10⁶"
			});
			this->h22box->Location = System::Drawing::Point(59, 297);
			this->h22box->Name = L"h22box";
			this->h22box->Size = System::Drawing::Size(95, 32);
			this->h22box->TabIndex = 11;
			// 
			// h22text
			// 
			this->h22text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h22text->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h22text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h22text->Location = System::Drawing::Point(189, 297);
			this->h22text->Name = L"h22text";
			this->h22text->Size = System::Drawing::Size(100, 48);
			this->h22text->TabIndex = 10;
			this->h22text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::h22text_KeyPress);
			// 
			// OB_RB
			// 
			this->OB_RB->AutoSize = true;
			this->OB_RB->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OB_RB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->OB_RB->Location = System::Drawing::Point(59, 378);
			this->OB_RB->Name = L"OB_RB";
			this->OB_RB->Size = System::Drawing::Size(55, 28);
			this->OB_RB->TabIndex = 12;
			this->OB_RB->TabStop = true;
			this->OB_RB->Text = L"ОБ";
			this->OB_RB->UseVisualStyleBackColor = true;
			// 
			// OE_RB
			// 
			this->OE_RB->AutoSize = true;
			this->OE_RB->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OE_RB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->OE_RB->Location = System::Drawing::Point(174, 378);
			this->OE_RB->Name = L"OE_RB";
			this->OE_RB->Size = System::Drawing::Size(55, 28);
			this->OE_RB->TabIndex = 13;
			this->OE_RB->TabStop = true;
			this->OE_RB->Text = L"ОЭ";
			this->OE_RB->UseVisualStyleBackColor = true;
			// 
			// OK_RB
			// 
			this->OK_RB->AutoSize = true;
			this->OK_RB->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OK_RB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->OK_RB->Location = System::Drawing::Point(289, 378);
			this->OK_RB->Name = L"OK_RB";
			this->OK_RB->Size = System::Drawing::Size(55, 28);
			this->OK_RB->TabIndex = 14;
			this->OK_RB->TabStop = true;
			this->OK_RB->Text = L"ОК";
			this->OK_RB->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(319, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 70);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(12, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"h11";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(12, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"h12";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(12, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 17);
			this->label3->TabIndex = 18;
			this->label3->Text = L"h21";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(12, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"h22";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(56, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Множитель";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Location = System::Drawing::Point(186, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 17);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Значение";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Location = System::Drawing::Point(474, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"h22";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(474, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"h21";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(474, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"h12";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Location = System::Drawing::Point(474, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 17);
			this->label10->TabIndex = 22;
			this->label10->Text = L"h11";
			// 
			// h11b_text
			// 
			this->h11b_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h11b_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h11b_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h11b_text->Location = System::Drawing::Point(512, 61);
			this->h11b_text->Name = L"h11b_text";
			this->h11b_text->Size = System::Drawing::Size(100, 28);
			this->h11b_text->TabIndex = 26;
			// 
			// h11e_text
			// 
			this->h11e_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h11e_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h11e_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h11e_text->Location = System::Drawing::Point(618, 61);
			this->h11e_text->Name = L"h11e_text";
			this->h11e_text->Size = System::Drawing::Size(100, 28);
			this->h11e_text->TabIndex = 27;
			// 
			// h11k_text
			// 
			this->h11k_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h11k_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h11k_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h11k_text->Location = System::Drawing::Point(724, 61);
			this->h11k_text->Name = L"h11k_text";
			this->h11k_text->Size = System::Drawing::Size(100, 28);
			this->h11k_text->TabIndex = 28;
			// 
			// h12k_text
			// 
			this->h12k_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h12k_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h12k_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h12k_text->Location = System::Drawing::Point(724, 140);
			this->h12k_text->Name = L"h12k_text";
			this->h12k_text->Size = System::Drawing::Size(100, 28);
			this->h12k_text->TabIndex = 31;
			// 
			// h12e_text
			// 
			this->h12e_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h12e_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h12e_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h12e_text->Location = System::Drawing::Point(618, 140);
			this->h12e_text->Name = L"h12e_text";
			this->h12e_text->Size = System::Drawing::Size(100, 28);
			this->h12e_text->TabIndex = 30;
			// 
			// h12b_text
			// 
			this->h12b_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h12b_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h12b_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h12b_text->Location = System::Drawing::Point(512, 140);
			this->h12b_text->Name = L"h12b_text";
			this->h12b_text->Size = System::Drawing::Size(100, 28);
			this->h12b_text->TabIndex = 29;
			// 
			// h21k_text
			// 
			this->h21k_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h21k_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h21k_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h21k_text->Location = System::Drawing::Point(724, 220);
			this->h21k_text->Name = L"h21k_text";
			this->h21k_text->Size = System::Drawing::Size(100, 28);
			this->h21k_text->TabIndex = 34;
			// 
			// h21e_text
			// 
			this->h21e_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h21e_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h21e_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h21e_text->Location = System::Drawing::Point(618, 220);
			this->h21e_text->Name = L"h21e_text";
			this->h21e_text->Size = System::Drawing::Size(100, 28);
			this->h21e_text->TabIndex = 33;
			// 
			// h21b_text
			// 
			this->h21b_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h21b_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h21b_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h21b_text->Location = System::Drawing::Point(512, 220);
			this->h21b_text->Name = L"h21b_text";
			this->h21b_text->Size = System::Drawing::Size(100, 28);
			this->h21b_text->TabIndex = 32;
			// 
			// h22k_text
			// 
			this->h22k_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h22k_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h22k_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h22k_text->Location = System::Drawing::Point(724, 300);
			this->h22k_text->Name = L"h22k_text";
			this->h22k_text->Size = System::Drawing::Size(100, 28);
			this->h22k_text->TabIndex = 37;
			// 
			// h22e_text
			// 
			this->h22e_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h22e_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h22e_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h22e_text->Location = System::Drawing::Point(618, 300);
			this->h22e_text->Name = L"h22e_text";
			this->h22e_text->Size = System::Drawing::Size(100, 28);
			this->h22e_text->TabIndex = 36;
			// 
			// h22b_text
			// 
			this->h22b_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->h22b_text->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h22b_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->h22b_text->Location = System::Drawing::Point(512, 300);
			this->h22b_text->Name = L"h22b_text";
			this->h22b_text->Size = System::Drawing::Size(100, 28);
			this->h22b_text->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(509, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 17);
			this->label11->TabIndex = 38;
			this->label11->Text = L"ОБ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Location = System::Drawing::Point(615, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 17);
			this->label12->TabIndex = 39;
			this->label12->Text = L"ОЭ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->Location = System::Drawing::Point(721, 29);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 17);
			this->label13->TabIndex = 40;
			this->label13->Text = L"ОК";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->ClientSize = System::Drawing::Size(843, 427);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->h22k_text);
			this->Controls->Add(this->h22e_text);
			this->Controls->Add(this->h22b_text);
			this->Controls->Add(this->h21k_text);
			this->Controls->Add(this->h21e_text);
			this->Controls->Add(this->h21b_text);
			this->Controls->Add(this->h12k_text);
			this->Controls->Add(this->h12e_text);
			this->Controls->Add(this->h12b_text);
			this->Controls->Add(this->h11k_text);
			this->Controls->Add(this->h11e_text);
			this->Controls->Add(this->h11b_text);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->OK_RB);
			this->Controls->Add(this->OE_RB);
			this->Controls->Add(this->OB_RB);
			this->Controls->Add(this->h22box);
			this->Controls->Add(this->h22text);
			this->Controls->Add(this->h21box);
			this->Controls->Add(this->h21text);
			this->Controls->Add(this->h12box);
			this->Controls->Add(this->h12text);
			this->Controls->Add(this->h11box);
			this->Controls->Add(this->h11text);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"H-Params Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		/*label7->Text = "";
		label8->Text = "";
		label9->Text = "";
		label10->Text = "";
		double ary[2][2] = {
	{ 1, 2},
	{ 3, 4}
		};
		h_and_y_swap(ary);
			label14->Text = ary[1][1].ToString();
			h11b_text->Text = ary[0][0].ToString();*/

	}
private: System::Void h11text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void h12text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void h21text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void h22text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if(h11text->Text == "" || h21text->Text == "" || h12text->Text == "" || h22text->Text == "" ||
		h11box->Text == "" || h12box->Text == "" || h21box->Text == "" || h22box->Text == "" ||
		OB_RB->Checked == false && OE_RB->Checked == false && OK_RB->Checked == false)
	{

		MessageBox::Show("Заполните все поля", "!!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		double multipliers[13] = { 1.0 / 1000000.0, 1.0 / 100000.0, 1.0 / 10000.0, 1.0 / 1000.0 , 1.0 / 100.0 , 1.0 / 10.0 , 1.0,
10.0, 100.0, 1000.0, 10000.0, 100000.0, 1000000.0 };
		double rounds[13] = {6,5,4,3,2,1,0,-1,-2,-2,-2,-2,-2};
		int n;

		double h11mult = multipliers[h11box->SelectedIndex];
		double h11round = rounds[h11box->SelectedIndex];
		double h11 = h11mult * Convert::ToDouble(h11text->Text);

		double h12mult = multipliers[h12box->SelectedIndex];
		double h12round = rounds[h12box->SelectedIndex];
		double h12 = h12mult * Convert::ToDouble(h12text->Text);

		double h21mult = multipliers[h21box->SelectedIndex];
		double h21round = rounds[h21box->SelectedIndex];
		double h21 = h21mult * Convert::ToDouble(h21text->Text);

		double h22mult = multipliers[h22box->SelectedIndex];
		double h22round = rounds[h22box->SelectedIndex];
		double h22 = h22mult * Convert::ToDouble(h22text->Text);

		double coef[2][2] = { {h11, h12}, {h21, h22} };
		//h_and_y_swap(coef);
		//label14->Text = "h11 " + coef[0][0] + "h12 " + coef[0][1] + "h21 " + coef[1][0] + "h22 " + coef[1][1];
		//h_and_y_swap(coef);
		double ycoef[3][3];
		if (OB_RB->Checked) {
			n = 1;
		}
		else if (OE_RB->Checked)
		{
			n = 2;
		}
		else if (OK_RB->Checked)
		{
			n = 3;
		}
		convert(coef, ycoef, n);
		double coefOB[2][2] = { {ycoef[1][1], ycoef[1][2]}, {ycoef[2][1], ycoef[2][2]} };
		double coefOE[2][2] = { {ycoef[0][0], ycoef[0][2]}, {ycoef[2][0], ycoef[2][2]} };
		double coefOK[2][2] = { {ycoef[0][0], ycoef[0][1]}, {ycoef[1][0], ycoef[1][1]} };
		
		h_and_y_swap(coefOB);
		h_and_y_swap(coefOE);
		h_and_y_swap(coefOK);
		h11b_text->Text = System::Math::Round(coefOB[0][0], h11round+2).ToString();
		h11e_text->Text = System::Math::Round(coefOE[0][0], h11round+2).ToString();
		h11k_text->Text = System::Math::Round(coefOK[0][0], h11round+2).ToString();

		h12b_text->Text = System::Math::Round(coefOB[0][1], h12round+2).ToString();
		h12e_text->Text = System::Math::Round(coefOE[0][1], h12round+2).ToString();
		h12k_text->Text = System::Math::Round(coefOK[0][1], h12round+2).ToString();

		h21b_text->Text = System::Math::Round(coefOB[1][0], h21round+2).ToString();
		h21e_text->Text = System::Math::Round(coefOE[1][0], h21round+2).ToString();
		h21k_text->Text = System::Math::Round(coefOK[1][0], h21round+2).ToString();

		h22b_text->Text = System::Math::Round(coefOB[1][1], h22round+2).ToString();
		h22e_text->Text = System::Math::Round(coefOE[1][1], h22round+2).ToString();
		h22k_text->Text = System::Math::Round(coefOK[1][1], h22round+2).ToString();
	}
	
}
};
}
