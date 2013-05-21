#pragma once
#include"main_table.h"
#include<cstdlib>
#include<ctime>

namespace sudoku {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sudokuframe
	/// </summary>
	public ref class Sudokuframe : public System::Windows::Forms::Form
	{
		main_table* C;

		String^ TorZ;
	public:

		Sudokuframe(void)
		{
			InitializeComponent();
			main_table *newc= new main_table();
			C=newc;
			srand(time(NULL));
			int n=rand()%129;
			n=1;
			C->input(n);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sudokuframe()
		{
			C->~main_table();
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::TextBox^  textBox67;
	private: System::Windows::Forms::TextBox^  textBox68;
	private: System::Windows::Forms::TextBox^  textBox69;
	private: System::Windows::Forms::TextBox^  textBox70;
	private: System::Windows::Forms::TextBox^  textBox71;
	private: System::Windows::Forms::TextBox^  textBox72;
	private: System::Windows::Forms::TextBox^  textBox73;
	private: System::Windows::Forms::TextBox^  textBox74;
	private: System::Windows::Forms::TextBox^  textBox75;
	private: System::Windows::Forms::TextBox^  textBox76;
	private: System::Windows::Forms::TextBox^  textBox77;
	private: System::Windows::Forms::TextBox^  textBox78;
	private: System::Windows::Forms::TextBox^  textBox79;
	private: System::Windows::Forms::TextBox^  textBox80;
	private: System::Windows::Forms::TextBox^  textBox81;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->MaxLength = 1;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 43);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseWaitCursor = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(62, 12);
			this->textBox2->MaxLength = 1;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 43);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(112, 12);
			this->textBox3->MaxLength = 1;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 43);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(171, 12);
			this->textBox4->MaxLength = 1;
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 43);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(221, 12);
			this->textBox5->MaxLength = 1;
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 43);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(271, 12);
			this->textBox6->MaxLength = 1;
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 43);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(330, 12);
			this->textBox7->MaxLength = 1;
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 43);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox7_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(380, 12);
			this->textBox8->MaxLength = 1;
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 43);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox8_TextChanged);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(430, 12);
			this->textBox9->MaxLength = 1;
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(44, 43);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox9_TextChanged);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(12, 61);
			this->textBox10->MaxLength = 1;
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(44, 43);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox10_TextChanged);
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox10_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(62, 61);
			this->textBox11->MaxLength = 1;
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(44, 43);
			this->textBox11->TabIndex = 16;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox11_TextChanged);
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox11_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(112, 61);
			this->textBox12->MaxLength = 1;
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(44, 43);
			this->textBox12->TabIndex = 15;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox12_TextChanged);
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox12_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(171, 61);
			this->textBox13->MaxLength = 1;
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(44, 43);
			this->textBox13->TabIndex = 14;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox13_TextChanged);
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox13_KeyPress);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(221, 61);
			this->textBox14->MaxLength = 1;
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(44, 43);
			this->textBox14->TabIndex = 13;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox14_TextChanged);
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox14_KeyPress);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(271, 61);
			this->textBox15->MaxLength = 1;
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(44, 43);
			this->textBox15->TabIndex = 12;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox15_TextChanged);
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox15_KeyPress);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(330, 61);
			this->textBox16->MaxLength = 1;
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(44, 43);
			this->textBox16->TabIndex = 11;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox16_TextChanged);
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox16_KeyPress);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(380, 61);
			this->textBox17->MaxLength = 1;
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(44, 43);
			this->textBox17->TabIndex = 10;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox17_TextChanged);
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox17_KeyPress);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(430, 61);
			this->textBox18->MaxLength = 1;
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(44, 43);
			this->textBox18->TabIndex = 9;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox18_TextChanged);
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox18_KeyPress);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox19->Location = System::Drawing::Point(12, 110);
			this->textBox19->MaxLength = 1;
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(44, 43);
			this->textBox19->TabIndex = 26;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox19_TextChanged);
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox19_KeyPress);
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox20->Location = System::Drawing::Point(62, 110);
			this->textBox20->MaxLength = 1;
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(44, 43);
			this->textBox20->TabIndex = 25;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox20_TextChanged);
			this->textBox20->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox20_KeyPress);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox21->Location = System::Drawing::Point(112, 110);
			this->textBox21->MaxLength = 1;
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(44, 43);
			this->textBox21->TabIndex = 24;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox21_TextChanged);
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox21_KeyPress);
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox22->Location = System::Drawing::Point(171, 110);
			this->textBox22->MaxLength = 1;
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(44, 43);
			this->textBox22->TabIndex = 23;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox22_TextChanged);
			this->textBox22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox22_KeyPress);
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox23->Location = System::Drawing::Point(221, 110);
			this->textBox23->MaxLength = 1;
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(44, 43);
			this->textBox23->TabIndex = 22;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox23_TextChanged);
			this->textBox23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox23_KeyPress);
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox24->Location = System::Drawing::Point(271, 110);
			this->textBox24->MaxLength = 1;
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(44, 43);
			this->textBox24->TabIndex = 21;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox24_TextChanged);
			this->textBox24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox24_KeyPress);
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox25->Location = System::Drawing::Point(330, 110);
			this->textBox25->MaxLength = 1;
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(44, 43);
			this->textBox25->TabIndex = 20;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox25_TextChanged);
			this->textBox25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox25_KeyPress);
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox26->Location = System::Drawing::Point(380, 110);
			this->textBox26->MaxLength = 1;
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(44, 43);
			this->textBox26->TabIndex = 19;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox26_TextChanged);
			this->textBox26->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox26_KeyPress);
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox27->Location = System::Drawing::Point(430, 110);
			this->textBox27->MaxLength = 1;
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(44, 43);
			this->textBox27->TabIndex = 18;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox27_TextChanged);
			this->textBox27->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox27_KeyPress);
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox28->Location = System::Drawing::Point(12, 167);
			this->textBox28->MaxLength = 1;
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(44, 43);
			this->textBox28->TabIndex = 35;
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox28->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox28_TextChanged);
			this->textBox28->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox28_KeyPress);
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox29->Location = System::Drawing::Point(62, 167);
			this->textBox29->MaxLength = 1;
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(44, 43);
			this->textBox29->TabIndex = 34;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox29->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox29_TextChanged);
			this->textBox29->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox29_KeyPress);
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox30->Location = System::Drawing::Point(112, 167);
			this->textBox30->MaxLength = 1;
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(44, 43);
			this->textBox30->TabIndex = 33;
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox30->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox30_TextChanged);
			this->textBox30->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox30_KeyPress);
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox31->Location = System::Drawing::Point(171, 167);
			this->textBox31->MaxLength = 1;
			this->textBox31->Multiline = true;
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(44, 43);
			this->textBox31->TabIndex = 32;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox31->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox31_TextChanged);
			this->textBox31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox31_KeyPress);
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox32->Location = System::Drawing::Point(221, 167);
			this->textBox32->MaxLength = 1;
			this->textBox32->Multiline = true;
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(44, 43);
			this->textBox32->TabIndex = 31;
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox32->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox32_TextChanged);
			this->textBox32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox32_KeyPress);
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox33->Location = System::Drawing::Point(271, 167);
			this->textBox33->MaxLength = 1;
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(44, 43);
			this->textBox33->TabIndex = 30;
			this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox33->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox33_TextChanged);
			this->textBox33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox33_KeyPress);
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox34->Location = System::Drawing::Point(330, 167);
			this->textBox34->MaxLength = 1;
			this->textBox34->Multiline = true;
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(44, 43);
			this->textBox34->TabIndex = 29;
			this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox34->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox34_TextChanged);
			this->textBox34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox34_KeyPress);
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox35->Location = System::Drawing::Point(380, 167);
			this->textBox35->MaxLength = 1;
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(44, 43);
			this->textBox35->TabIndex = 28;
			this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox35->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox35_TextChanged);
			this->textBox35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox35_KeyPress);
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox36->Location = System::Drawing::Point(430, 167);
			this->textBox36->MaxLength = 1;
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(44, 43);
			this->textBox36->TabIndex = 27;
			this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox36_TextChanged);
			this->textBox36->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox36_KeyPress);
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox37->Location = System::Drawing::Point(12, 216);
			this->textBox37->MaxLength = 1;
			this->textBox37->Multiline = true;
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(44, 43);
			this->textBox37->TabIndex = 44;
			this->textBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox37->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox37_TextChanged);
			this->textBox37->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox37_KeyPress);
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox38->Location = System::Drawing::Point(62, 216);
			this->textBox38->MaxLength = 1;
			this->textBox38->Multiline = true;
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(44, 43);
			this->textBox38->TabIndex = 43;
			this->textBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox38->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox38_TextChanged);
			this->textBox38->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox38_KeyPress);
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox39->Location = System::Drawing::Point(112, 216);
			this->textBox39->MaxLength = 1;
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(44, 43);
			this->textBox39->TabIndex = 42;
			this->textBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox39->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox39_TextChanged);
			this->textBox39->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox39_KeyPress);
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox40->Location = System::Drawing::Point(171, 216);
			this->textBox40->MaxLength = 1;
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(44, 43);
			this->textBox40->TabIndex = 41;
			this->textBox40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox40->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox40_TextChanged);
			this->textBox40->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox40_KeyPress);
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox41->Location = System::Drawing::Point(221, 216);
			this->textBox41->MaxLength = 1;
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(44, 43);
			this->textBox41->TabIndex = 40;
			this->textBox41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox41->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox41_TextChanged);
			this->textBox41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox41_KeyPress);
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox42->Location = System::Drawing::Point(271, 216);
			this->textBox42->MaxLength = 1;
			this->textBox42->Multiline = true;
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(44, 43);
			this->textBox42->TabIndex = 39;
			this->textBox42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox42->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox42_TextChanged);
			this->textBox42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox42_KeyPress);
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox43->Location = System::Drawing::Point(330, 216);
			this->textBox43->MaxLength = 1;
			this->textBox43->Multiline = true;
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(44, 43);
			this->textBox43->TabIndex = 38;
			this->textBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox43->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox43_TextChanged);
			this->textBox43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox43_KeyPress);
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox44->Location = System::Drawing::Point(380, 216);
			this->textBox44->MaxLength = 1;
			this->textBox44->Multiline = true;
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(44, 43);
			this->textBox44->TabIndex = 37;
			this->textBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox44->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox44_TextChanged);
			this->textBox44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox44_KeyPress);
			// 
			// textBox45
			// 
			this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox45->Location = System::Drawing::Point(430, 216);
			this->textBox45->MaxLength = 1;
			this->textBox45->Multiline = true;
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(44, 43);
			this->textBox45->TabIndex = 36;
			this->textBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox45->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox45_TextChanged);
			this->textBox45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox45_KeyPress);
			// 
			// textBox46
			// 
			this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox46->Location = System::Drawing::Point(12, 265);
			this->textBox46->MaxLength = 1;
			this->textBox46->Multiline = true;
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(44, 43);
			this->textBox46->TabIndex = 53;
			this->textBox46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox46->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox46_TextChanged);
			this->textBox46->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox46_KeyPress);
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox47->Location = System::Drawing::Point(62, 265);
			this->textBox47->MaxLength = 1;
			this->textBox47->Multiline = true;
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(44, 43);
			this->textBox47->TabIndex = 52;
			this->textBox47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox47->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox47_TextChanged);
			this->textBox47->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox47_KeyPress);
			// 
			// textBox48
			// 
			this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox48->Location = System::Drawing::Point(112, 265);
			this->textBox48->MaxLength = 1;
			this->textBox48->Multiline = true;
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(44, 43);
			this->textBox48->TabIndex = 51;
			this->textBox48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox48->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox48_TextChanged);
			this->textBox48->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox48_KeyPress);
			// 
			// textBox49
			// 
			this->textBox49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox49->Location = System::Drawing::Point(171, 265);
			this->textBox49->MaxLength = 1;
			this->textBox49->Multiline = true;
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(44, 43);
			this->textBox49->TabIndex = 50;
			this->textBox49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox49->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox49_TextChanged);
			this->textBox49->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox49_KeyPress);
			// 
			// textBox50
			// 
			this->textBox50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox50->Location = System::Drawing::Point(221, 265);
			this->textBox50->MaxLength = 1;
			this->textBox50->Multiline = true;
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(44, 43);
			this->textBox50->TabIndex = 49;
			this->textBox50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox50->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox50_TextChanged);
			this->textBox50->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox50_KeyPress);
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox51->Location = System::Drawing::Point(271, 265);
			this->textBox51->MaxLength = 1;
			this->textBox51->Multiline = true;
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(44, 43);
			this->textBox51->TabIndex = 48;
			this->textBox51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox51->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox51_TextChanged);
			this->textBox51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox51_KeyPress);
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox52->Location = System::Drawing::Point(330, 265);
			this->textBox52->MaxLength = 1;
			this->textBox52->Multiline = true;
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(44, 43);
			this->textBox52->TabIndex = 47;
			this->textBox52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox52->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox52_TextChanged);
			this->textBox52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox52_KeyPress);
			// 
			// textBox53
			// 
			this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox53->Location = System::Drawing::Point(380, 265);
			this->textBox53->MaxLength = 1;
			this->textBox53->Multiline = true;
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(44, 43);
			this->textBox53->TabIndex = 46;
			this->textBox53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox53->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox53_TextChanged);
			this->textBox53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox53_KeyPress);
			// 
			// textBox54
			// 
			this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox54->Location = System::Drawing::Point(430, 265);
			this->textBox54->MaxLength = 1;
			this->textBox54->Multiline = true;
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(44, 43);
			this->textBox54->TabIndex = 45;
			this->textBox54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox54->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox54_TextChanged);
			this->textBox54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox54_KeyPress);
			// 
			// textBox55
			// 
			this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox55->Location = System::Drawing::Point(12, 325);
			this->textBox55->MaxLength = 1;
			this->textBox55->Multiline = true;
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(44, 43);
			this->textBox55->TabIndex = 62;
			this->textBox55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox55->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox55_TextChanged);
			this->textBox55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox55_KeyPress);
			// 
			// textBox56
			// 
			this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox56->Location = System::Drawing::Point(62, 325);
			this->textBox56->MaxLength = 1;
			this->textBox56->Multiline = true;
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(44, 43);
			this->textBox56->TabIndex = 61;
			this->textBox56->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox56->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox56_TextChanged);
			this->textBox56->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox56_KeyPress);
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox57->Location = System::Drawing::Point(112, 325);
			this->textBox57->MaxLength = 1;
			this->textBox57->Multiline = true;
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(44, 43);
			this->textBox57->TabIndex = 60;
			this->textBox57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox57->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox57_TextChanged);
			this->textBox57->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox57_KeyPress);
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox58->Location = System::Drawing::Point(171, 325);
			this->textBox58->MaxLength = 1;
			this->textBox58->Multiline = true;
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(44, 43);
			this->textBox58->TabIndex = 59;
			this->textBox58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox58->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox58_TextChanged);
			this->textBox58->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox58_KeyPress);
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox59->Location = System::Drawing::Point(221, 325);
			this->textBox59->MaxLength = 1;
			this->textBox59->Multiline = true;
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(44, 43);
			this->textBox59->TabIndex = 58;
			this->textBox59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox59->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox59_TextChanged);
			this->textBox59->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox59_KeyPress);
			// 
			// textBox60
			// 
			this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox60->Location = System::Drawing::Point(271, 325);
			this->textBox60->MaxLength = 1;
			this->textBox60->Multiline = true;
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(44, 43);
			this->textBox60->TabIndex = 57;
			this->textBox60->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox60->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox60_TextChanged);
			this->textBox60->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox60_KeyPress);
			// 
			// textBox61
			// 
			this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox61->Location = System::Drawing::Point(330, 325);
			this->textBox61->MaxLength = 1;
			this->textBox61->Multiline = true;
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(44, 43);
			this->textBox61->TabIndex = 56;
			this->textBox61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox61->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox61_TextChanged);
			this->textBox61->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox61_KeyPress);
			// 
			// textBox62
			// 
			this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox62->Location = System::Drawing::Point(380, 325);
			this->textBox62->MaxLength = 1;
			this->textBox62->Multiline = true;
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(44, 43);
			this->textBox62->TabIndex = 55;
			this->textBox62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox62->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox62_TextChanged);
			this->textBox62->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox62_KeyPress);
			// 
			// textBox63
			// 
			this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox63->Location = System::Drawing::Point(430, 325);
			this->textBox63->MaxLength = 1;
			this->textBox63->Multiline = true;
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(44, 43);
			this->textBox63->TabIndex = 54;
			this->textBox63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox63->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox63_TextChanged);
			this->textBox63->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox63_KeyPress);
			// 
			// textBox64
			// 
			this->textBox64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox64->Location = System::Drawing::Point(12, 374);
			this->textBox64->MaxLength = 1;
			this->textBox64->Multiline = true;
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(44, 43);
			this->textBox64->TabIndex = 71;
			this->textBox64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox64->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox64_TextChanged);
			this->textBox64->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox64_KeyPress);
			// 
			// textBox65
			// 
			this->textBox65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox65->Location = System::Drawing::Point(62, 374);
			this->textBox65->MaxLength = 1;
			this->textBox65->Multiline = true;
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(44, 43);
			this->textBox65->TabIndex = 70;
			this->textBox65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox65->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox65_TextChanged);
			this->textBox65->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox65_KeyPress);
			// 
			// textBox66
			// 
			this->textBox66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox66->Location = System::Drawing::Point(112, 374);
			this->textBox66->MaxLength = 1;
			this->textBox66->Multiline = true;
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(44, 43);
			this->textBox66->TabIndex = 69;
			this->textBox66->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox66->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox66_TextChanged);
			this->textBox66->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox66_KeyPress);
			// 
			// textBox67
			// 
			this->textBox67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox67->Location = System::Drawing::Point(171, 374);
			this->textBox67->MaxLength = 1;
			this->textBox67->Multiline = true;
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(44, 43);
			this->textBox67->TabIndex = 68;
			this->textBox67->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox67->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox67_TextChanged);
			this->textBox67->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox67_KeyPress);
			// 
			// textBox68
			// 
			this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox68->Location = System::Drawing::Point(221, 374);
			this->textBox68->MaxLength = 1;
			this->textBox68->Multiline = true;
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(44, 43);
			this->textBox68->TabIndex = 67;
			this->textBox68->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox68->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox68_TextChanged);
			this->textBox68->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox68_KeyPress);
			// 
			// textBox69
			// 
			this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox69->Location = System::Drawing::Point(271, 374);
			this->textBox69->MaxLength = 1;
			this->textBox69->Multiline = true;
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(44, 43);
			this->textBox69->TabIndex = 66;
			this->textBox69->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox69->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox69_TextChanged);
			this->textBox69->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox69_KeyPress);
			// 
			// textBox70
			// 
			this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox70->Location = System::Drawing::Point(330, 374);
			this->textBox70->MaxLength = 1;
			this->textBox70->Multiline = true;
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(44, 43);
			this->textBox70->TabIndex = 65;
			this->textBox70->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox70->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox70_TextChanged);
			this->textBox70->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox70_KeyPress);
			// 
			// textBox71
			// 
			this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox71->Location = System::Drawing::Point(380, 374);
			this->textBox71->MaxLength = 1;
			this->textBox71->Multiline = true;
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(44, 43);
			this->textBox71->TabIndex = 64;
			this->textBox71->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox71->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox71_TextChanged);
			this->textBox71->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox71_KeyPress);
			// 
			// textBox72
			// 
			this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox72->Location = System::Drawing::Point(430, 374);
			this->textBox72->MaxLength = 1;
			this->textBox72->Multiline = true;
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(44, 43);
			this->textBox72->TabIndex = 63;
			this->textBox72->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox72->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox72_TextChanged);
			this->textBox72->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox72_KeyPress);
			// 
			// textBox73
			// 
			this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox73->Location = System::Drawing::Point(12, 423);
			this->textBox73->MaxLength = 1;
			this->textBox73->Multiline = true;
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(44, 43);
			this->textBox73->TabIndex = 80;
			this->textBox73->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox73->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox73_TextChanged);
			this->textBox73->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox73_KeyPress);
			// 
			// textBox74
			// 
			this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox74->Location = System::Drawing::Point(62, 423);
			this->textBox74->MaxLength = 1;
			this->textBox74->Multiline = true;
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(44, 43);
			this->textBox74->TabIndex = 79;
			this->textBox74->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox74->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox74_TextChanged);
			this->textBox74->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox74_KeyPress);
			// 
			// textBox75
			// 
			this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox75->Location = System::Drawing::Point(112, 423);
			this->textBox75->MaxLength = 1;
			this->textBox75->Multiline = true;
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(44, 43);
			this->textBox75->TabIndex = 78;
			this->textBox75->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox75->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox75_TextChanged);
			this->textBox75->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox75_KeyPress);
			// 
			// textBox76
			// 
			this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox76->Location = System::Drawing::Point(171, 423);
			this->textBox76->MaxLength = 1;
			this->textBox76->Multiline = true;
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(44, 43);
			this->textBox76->TabIndex = 77;
			this->textBox76->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox76->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox76_TextChanged);
			this->textBox76->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox76_KeyPress);
			// 
			// textBox77
			// 
			this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox77->Location = System::Drawing::Point(221, 423);
			this->textBox77->MaxLength = 1;
			this->textBox77->Multiline = true;
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(44, 43);
			this->textBox77->TabIndex = 76;
			this->textBox77->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox77->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox77_TextChanged);
			this->textBox77->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox77_KeyPress);
			// 
			// textBox78
			// 
			this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox78->Location = System::Drawing::Point(271, 423);
			this->textBox78->MaxLength = 1;
			this->textBox78->Multiline = true;
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(44, 43);
			this->textBox78->TabIndex = 75;
			this->textBox78->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox78->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox78_TextChanged);
			this->textBox78->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox78_KeyPress);
			// 
			// textBox79
			// 
			this->textBox79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox79->Location = System::Drawing::Point(330, 423);
			this->textBox79->MaxLength = 1;
			this->textBox79->Multiline = true;
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(44, 43);
			this->textBox79->TabIndex = 74;
			this->textBox79->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox79->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox79_TextChanged);
			this->textBox79->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox79_KeyPress);
			// 
			// textBox80
			// 
			this->textBox80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox80->Location = System::Drawing::Point(380, 423);
			this->textBox80->MaxLength = 1;
			this->textBox80->Multiline = true;
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(44, 43);
			this->textBox80->TabIndex = 73;
			this->textBox80->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox80->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox80_TextChanged);
			this->textBox80->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox80_KeyPress);
			// 
			// textBox81
			// 
			this->textBox81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox81->Location = System::Drawing::Point(430, 423);
			this->textBox81->MaxLength = 1;
			this->textBox81->Multiline = true;
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(44, 43);
			this->textBox81->TabIndex = 72;
			this->textBox81->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox81->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox81_TextChanged);
			this->textBox81->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudokuframe::textBox81_KeyPress);
			// 
			// Sudokuframe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(486, 474);
			this->Controls->Add(this->textBox73);
			this->Controls->Add(this->textBox74);
			this->Controls->Add(this->textBox75);
			this->Controls->Add(this->textBox76);
			this->Controls->Add(this->textBox77);
			this->Controls->Add(this->textBox78);
			this->Controls->Add(this->textBox79);
			this->Controls->Add(this->textBox80);
			this->Controls->Add(this->textBox81);
			this->Controls->Add(this->textBox64);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->textBox66);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->textBox70);
			this->Controls->Add(this->textBox71);
			this->Controls->Add(this->textBox72);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox60);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox63);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->textBox51);
			this->Controls->Add(this->textBox52);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->textBox54);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Sudokuframe";
			this->Text = L"Sudokuframe";
			this->Load += gcnew System::EventHandler(this, &Sudokuframe::Sudokuframe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Sudokuframe_Load(System::Object^  sender, System::EventArgs^  e) {
				 C->print_arr();
				 int i=0;
				 int f=0;
				 int a;
				 for(int p=1; p<=81; p++)
				 {
					 a=C->get_arr(i,f);
					 TextBox^ t = (TextBox^)this->Controls["textBox"+p.ToString()];
					 if(a!=0) t->Text=String::Format(" {0:F0}", a);
					 if(C->get_ref_arr(i,f)) t->Enabled=false;
					 t->TextAlign = HorizontalAlignment::Center;
					 f++;
					 if(f==9)
					 {
						 f=0;
						 i++;
					 }
				 }

			 }
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox16_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox17_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox18_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox19_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox20_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox26_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox27_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox28_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox29_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox30_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox31_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox32_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;

			 }
	private: System::Void textBox33_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox34_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox35_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox36_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox37_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox38_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox39_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox40_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox41_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox42_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox43_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox44_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox45_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox46_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox47_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox48_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox49_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox50_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox51_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox52_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox53_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox54_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox55_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox56_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox57_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox58_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox59_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox60_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox61_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox62_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox63_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox64_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox65_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox66_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox67_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox68_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox69_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox70_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox71_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox72_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox73_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox74_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox75_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox76_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox77_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;


			 }
	private: System::Void textBox78_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox79_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;

			 }
	private: System::Void textBox80_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }
	private: System::Void textBox81_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 e->Handled = true;
			 }


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox1->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,0);
				 if(p!=0)
				 {
					 textBox1->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox1->Text="";
				 }

			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox2->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,1);
				 if(p!=0)
				 {
					 textBox2->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox2->Text="";
				 }
			 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox3->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,2);
				 if(p!=0)
				 {
					 textBox3->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox3->Text="";
				 }
			 }
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox4->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,3);
				 if(p!=0)
				 {
					 textBox4->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox4->Text="";
				 }
			 }
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox5->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,4);
				 if(p!=0)
				 {
					 textBox5->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox5->Text="";
				 }
			 }
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox6->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,5);
				 if(p!=0)
				 {
					 textBox6->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox6->Text="";
				 }
			 }
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox7->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,6);
				 if(p!=0)
				 {
					 textBox7->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox7->Text="";
				 }
			 }
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox8->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,7);
				 if(p!=0)
				 {
					 textBox8->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox8->Text="";
				 }
			 }
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox9->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,0,8);
				 if(p!=0)
				 {
					 textBox9->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox9->Text="";
				 }
			 }
	private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox10->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,0);
				 if(p!=0)
				 {
					 textBox10->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox10->Text="";
				 }
			 }
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox11->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,1);
				 if(p!=0)
				 {
					 textBox11->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox11->Text="";
				 }
			 }
	private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Single a= 0;
				 Single A = Single::TryParse(textBox12->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,2);
				 if(p!=0)
				 {
					 textBox12->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox12->Text="";
				 }
			 }
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox13->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,3);
				 if(p!=0)
				 {
					 textBox13->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox13->Text="";
				 }
			 }
	private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox14->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,4);
				 if(p!=0)
				 {
					 textBox14->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox14->Text="";
				 }
			 }
	private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox15->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,5);
				 if(p!=0)
				 {
					 textBox15->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox15->Text="";
				 }
			 }
	private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox16->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,6);
				 if(p!=0)
				 {
					 textBox16->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox16->Text="";
				 }
			 }
	private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox17->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,7);
				 if(p!=0)
				 {
					 textBox17->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox17->Text="";
				 }
			 }
	private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox18->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,1,8);
				 if(p!=0)
				 {
					 textBox18->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox18->Text="";
				 }
			 }
	private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  Single a= 0;
				 Single A = Single::TryParse(textBox19->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,0);
				 if(p!=0)
				 {
					 textBox19->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox19->Text="";
				 }
			 }
	private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   Single a= 0;
				 Single A = Single::TryParse(textBox20->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,1);
				 if(p!=0)
				 {
					 textBox20->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox20->Text="";
				 }
			 }
	private: System::Void textBox21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox21->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,2);
				 if(p!=0)
				 {
					 textBox21->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox21->Text="";
				 }

			 }
	private: System::Void textBox22_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox22->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,3);
				 if(p!=0)
				 {
					 textBox22->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox22->Text="";
				 }
			 }
	private: System::Void textBox23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox23->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,4);
				 if(p!=0)
				 {
					 textBox23->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox23->Text="";
				 }
			 }
	private: System::Void textBox24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox24->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,5);
				 if(p!=0)
				 {
					 textBox24->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox24->Text="";
				 }
			 }
	private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox25->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,6);
				 if(p!=0)
				 {
					 textBox25->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox25->Text="";
				 }
			 }
	private: System::Void textBox26_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox26->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,7);
				 if(p!=0)
				 {
					 textBox26->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox26->Text="";
				 }
			 }
	private: System::Void textBox27_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox27->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,2,8);
				 if(p!=0)
				 {
					 textBox27->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox27->Text="";
				 }
			 }
	private: System::Void textBox28_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				    Single a= 0;
				 Single A = Single::TryParse(textBox28->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,0);
				 if(p!=0)
				 {
					 textBox28->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox28->Text="";
				 }

			 }
	private: System::Void textBox29_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	    Single a= 0;
				 Single A = Single::TryParse(textBox29->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,1);
				 if(p!=0)
				 {
					 textBox29->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox29->Text="";
				 }
			 }
	private: System::Void textBox30_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	    Single a= 0;
				 Single A = Single::TryParse(textBox30->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,2);
				 if(p!=0)
				 {
					 textBox30->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox30->Text="";
				 }
			 }
	private: System::Void textBox31_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox31->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,3);
				 if(p!=0)
				 {
					 textBox31->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox31->Text="";
				 }
			 }
	private: System::Void textBox32_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox32->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,4);
				 if(p!=0)
				 {
					 textBox32->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox32->Text="";
				 }
			 }
	private: System::Void textBox33_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox33->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,5);
				 if(p!=0)
				 {
					 textBox33->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox33->Text="";
				 }
			 }
	private: System::Void textBox34_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox34->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,6);
				 if(p!=0)
				 {
					 textBox34->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox34->Text="";
				 }
			 }
	private: System::Void textBox35_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox35->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,7);
				 if(p!=0)
				 {
					 textBox35->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox35->Text="";
				 }
			 }
	private: System::Void textBox36_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox36->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,3,8);
				 if(p!=0)
				 {
					 textBox36->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox36->Text="";
				 }
			 }
	private: System::Void textBox37_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox37->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,0);
				 if(p!=0)
				 {
					 textBox37->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox37->Text="";
				 }
			 }
	private: System::Void textBox38_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox38->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,1);
				 if(p!=0)
				 {
					 textBox38->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox38->Text="";
				 }
			 }
	private: System::Void textBox39_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox39->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,2);
				 if(p!=0)
				 {
					 textBox39->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox39->Text="";
				 }
			 }
	private: System::Void textBox40_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox40->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,3);
				 if(p!=0)
				 {
					 textBox40->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox40->Text="";
				 }
			 }
	private: System::Void textBox41_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox41->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,4);
				 if(p!=0)
				 {
					 textBox41->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox41->Text="";
				 }
			 }
	private: System::Void textBox42_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox42->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,5);
				 if(p!=0)
				 {
					 textBox42->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox42->Text="";
				 }
			 }
	private: System::Void textBox43_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox43->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,6);
				 if(p!=0)
				 {
					 textBox43->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox43->Text="";
				 }
			 }
	private: System::Void textBox44_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox44->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,7);
				 if(p!=0)
				 {
					 textBox44->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox44->Text="";
				 }
			 }
	private: System::Void textBox45_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox45->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,4,8);
				 if(p!=0)
				 {
					 textBox45->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox45->Text="";
				 }
			 }
	private: System::Void textBox46_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox46->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,0);
				 if(p!=0)
				 {
					 textBox46->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox46->Text="";
				 }
			 }
	private: System::Void textBox47_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox47->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,1);
				 if(p!=0)
				 {
					 textBox47->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox47->Text="";
				 }
			 }
	private: System::Void textBox48_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox48->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,2);
				 if(p!=0)
				 {
					 textBox48->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox48->Text="";
				 }
			 }
	private: System::Void textBox49_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox49->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,3);
				 if(p!=0)
				 {
					 textBox49->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox49->Text="";
				 }
			 }
	private: System::Void textBox50_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox50->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,4);
				 if(p!=0)
				 {
					 textBox50->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox50->Text="";
				 }
			 }
	private: System::Void textBox51_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox51->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,5);
				 if(p!=0)
				 {
					 textBox51->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox51->Text="";
				 }
			 }
	private: System::Void textBox52_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox52->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,6);
				 if(p!=0)
				 {
					 textBox52->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox52->Text="";
				 }
			 }
	private: System::Void textBox53_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox53->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,7);
				 if(p!=0)
				 {
					 textBox53->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox53->Text="";
				 }
			 }
	private: System::Void textBox54_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox54->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,5,8);
				 if(p!=0)
				 {
					 textBox54->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox54->Text="";
				 }
			 }
	private: System::Void textBox55_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox55->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,0);
				 if(p!=0)
				 {
					 textBox55->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox55->Text="";
				 }
			 }
	private: System::Void textBox56_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox56->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,1);
				 if(p!=0)
				 {
					 textBox56->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox56->Text="";
				 }

			 }
	private: System::Void textBox57_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox57->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,2);
				 if(p!=0)
				 {
					 textBox57->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox57->Text="";
				 }
			 }
	private: System::Void textBox58_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox58->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,3);
				 if(p!=0)
				 {
					 textBox58->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox58->Text="";
				 }
			 }
	private: System::Void textBox59_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox59->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,4);
				 if(p!=0)
				 {
					 textBox59->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox59->Text="";
				 }
			 }
	private: System::Void textBox60_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox60->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,5);
				 if(p!=0)
				 {
					 textBox60->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox60->Text="";
				 }
			 }
	private: System::Void textBox61_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox61->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,6);
				 if(p!=0)
				 {
					 textBox61->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox61->Text="";
				 }
			 }
	private: System::Void textBox62_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox62->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,7);
				 if(p!=0)
				 {
					 textBox62->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox62->Text="";
				 }
			 }
	private: System::Void textBox63_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox63->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,6,8);
				 if(p!=0)
				 {
					 textBox63->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox63->Text="";
				 }
			 }
	private: System::Void textBox64_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	 	  	    Single a= 0;
				 Single A = Single::TryParse(textBox64->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,0);
				 if(p!=0)
				 {
					 textBox64->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox64->Text="";
				 }
			 }
	private: System::Void textBox65_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	  	    Single a= 0;
				 Single A = Single::TryParse(textBox65->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,1);
				 if(p!=0)
				 {
					 textBox65->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox65->Text="";
				 }
			 }
	private: System::Void textBox66_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	  	    Single a= 0;
				 Single A = Single::TryParse(textBox66->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,2);
				 if(p!=0)
				 {
					 textBox66->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox66->Text="";
				 }
			 }
	private: System::Void textBox67_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	  	    Single a= 0;
				 Single A = Single::TryParse(textBox67->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,3);
				 if(p!=0)
				 {
					 textBox67->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox67->Text="";
				 }
			 }
	private: System::Void textBox68_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	  	    Single a= 0;
				 Single A = Single::TryParse(textBox68->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,4);
				 if(p!=0)
				 {
					 textBox68->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox68->Text="";
				 }
			 }
	private: System::Void textBox69_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	  	    Single a= 0;
				 Single A = Single::TryParse(textBox69->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,5);
				 if(p!=0)
				 {
					 textBox69->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox69->Text="";
				 }
			 }
	private: System::Void textBox70_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	  	    Single a= 0;
				 Single A = Single::TryParse(textBox70->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,6);
				 if(p!=0)
				 {
					 textBox70->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox70->Text="";
				 }
			 }
	private: System::Void textBox71_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	  	    Single a= 0;
				 Single A = Single::TryParse(textBox71->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,7);
				 if(p!=0)
				 {
					 textBox71->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox71->Text="";
				 }
			 }
	private: System::Void textBox72_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	  	    Single a= 0;
				 Single A = Single::TryParse(textBox72->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,7,8);
				 if(p!=0)
				 {
					 textBox72->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox72->Text="";
				 }
			 }
	private: System::Void textBox73_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				   	  	    Single a= 0;
				 Single A = Single::TryParse(textBox73->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,0);
				 if(p!=0)
				 {
					 textBox73->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox73->Text="";
				 }
			 }
	private: System::Void textBox74_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox74->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,1);
				 if(p!=0)
				 {
					 textBox74->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox74->Text="";
				 }
			 }
	private: System::Void textBox75_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox75->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,2);
				 if(p!=0)
				 {
					 textBox75->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox75->Text="";
				 }
			 }
	private: System::Void textBox76_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox76->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,3);
				 if(p!=0)
				 {
					 textBox76->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox76->Text="";
				 }
			 }
	private: System::Void textBox77_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox77->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,4);
				 if(p!=0)
				 {
					 textBox77->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox77->Text="";
				 }
			 }
	private: System::Void textBox78_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox78->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,5);
				 if(p!=0)
				 {
					 textBox78->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox78->Text="";
				 }
			 }
	private: System::Void textBox79_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox79->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,6);
				 if(p!=0)
				 {
					 textBox79->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox79->Text="";
				 }
			 }
	private: System::Void textBox80_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox80->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,7);
				 if(p!=0)
				 {
					 textBox80->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox80->Text="";
				 }
			 }
	private: System::Void textBox81_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  	    Single a= 0;
				 Single A = Single::TryParse(textBox81->Text,
					 System::Globalization::NumberStyles::Number,
					 System::Globalization::NumberFormatInfo::CurrentInfo, a);
				 int p=C->user_input(a,8,8);
				 if(p!=0)
				 {
					 textBox81->Text=String::Format(" {0:F0}", p);
				 }
				 else
				 {
					 textBox81->Text="";
				 }
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {			 }
	};
}
