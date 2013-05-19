#pragma once
#include"main_table.h"
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
	public:
		 
		Sudokuframe(void)
		{
			InitializeComponent();
			main_table *newc= new main_table();
			C=newc;
			int n=rand()%129;
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
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 43);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox1_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(62, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 43);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Sudokuframe::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(112, 12);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 43);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->Location = System::Drawing::Point(12, 61);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 43);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->Location = System::Drawing::Point(62, 61);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 43);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox6->Location = System::Drawing::Point(112, 61);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 43);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox7->Location = System::Drawing::Point(12, 110);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 43);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox8->Location = System::Drawing::Point(62, 110);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 43);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox9->Location = System::Drawing::Point(112, 110);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(44, 43);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox10->Location = System::Drawing::Point(271, 110);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(44, 43);
			this->textBox10->TabIndex = 17;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox11->Location = System::Drawing::Point(221, 110);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(44, 43);
			this->textBox11->TabIndex = 16;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox12->Location = System::Drawing::Point(171, 110);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(44, 43);
			this->textBox12->TabIndex = 15;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox13->Location = System::Drawing::Point(271, 61);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(44, 43);
			this->textBox13->TabIndex = 14;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox14->Location = System::Drawing::Point(221, 61);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(44, 43);
			this->textBox14->TabIndex = 13;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox15->Location = System::Drawing::Point(171, 61);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(44, 43);
			this->textBox15->TabIndex = 12;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox16->Location = System::Drawing::Point(271, 12);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(44, 43);
			this->textBox16->TabIndex = 11;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox17->Location = System::Drawing::Point(221, 12);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(44, 43);
			this->textBox17->TabIndex = 10;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox18->Location = System::Drawing::Point(171, 12);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(44, 43);
			this->textBox18->TabIndex = 9;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox19->Location = System::Drawing::Point(430, 110);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(44, 43);
			this->textBox19->TabIndex = 26;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox20->Location = System::Drawing::Point(380, 110);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(44, 43);
			this->textBox20->TabIndex = 25;
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox21->Location = System::Drawing::Point(330, 110);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(44, 43);
			this->textBox21->TabIndex = 24;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox22->Location = System::Drawing::Point(430, 61);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(44, 43);
			this->textBox22->TabIndex = 23;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox23->Location = System::Drawing::Point(380, 61);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(44, 43);
			this->textBox23->TabIndex = 22;
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox24->Location = System::Drawing::Point(330, 61);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(44, 43);
			this->textBox24->TabIndex = 21;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox25->Location = System::Drawing::Point(430, 12);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(44, 43);
			this->textBox25->TabIndex = 20;
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox26->Location = System::Drawing::Point(380, 12);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(44, 43);
			this->textBox26->TabIndex = 19;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox27->Location = System::Drawing::Point(330, 12);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(44, 43);
			this->textBox27->TabIndex = 18;
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox28->Location = System::Drawing::Point(112, 265);
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(44, 43);
			this->textBox28->TabIndex = 35;
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox29->Location = System::Drawing::Point(62, 265);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(44, 43);
			this->textBox29->TabIndex = 34;
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox30->Location = System::Drawing::Point(12, 265);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(44, 43);
			this->textBox30->TabIndex = 33;
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox31->Location = System::Drawing::Point(112, 216);
			this->textBox31->Multiline = true;
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(44, 43);
			this->textBox31->TabIndex = 32;
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox32->Location = System::Drawing::Point(62, 216);
			this->textBox32->Multiline = true;
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(44, 43);
			this->textBox32->TabIndex = 31;
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox33->Location = System::Drawing::Point(12, 216);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(44, 43);
			this->textBox33->TabIndex = 30;
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox34->Location = System::Drawing::Point(112, 167);
			this->textBox34->Multiline = true;
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(44, 43);
			this->textBox34->TabIndex = 29;
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox35->Location = System::Drawing::Point(62, 167);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(44, 43);
			this->textBox35->TabIndex = 28;
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox36->Location = System::Drawing::Point(12, 167);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(44, 43);
			this->textBox36->TabIndex = 27;
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox37->Location = System::Drawing::Point(271, 265);
			this->textBox37->Multiline = true;
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(44, 43);
			this->textBox37->TabIndex = 44;
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox38->Location = System::Drawing::Point(221, 265);
			this->textBox38->Multiline = true;
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(44, 43);
			this->textBox38->TabIndex = 43;
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox39->Location = System::Drawing::Point(171, 265);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(44, 43);
			this->textBox39->TabIndex = 42;
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox40->Location = System::Drawing::Point(271, 216);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(44, 43);
			this->textBox40->TabIndex = 41;
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox41->Location = System::Drawing::Point(221, 216);
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(44, 43);
			this->textBox41->TabIndex = 40;
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox42->Location = System::Drawing::Point(171, 216);
			this->textBox42->Multiline = true;
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(44, 43);
			this->textBox42->TabIndex = 39;
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox43->Location = System::Drawing::Point(271, 167);
			this->textBox43->Multiline = true;
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(44, 43);
			this->textBox43->TabIndex = 38;
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox44->Location = System::Drawing::Point(221, 167);
			this->textBox44->Multiline = true;
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(44, 43);
			this->textBox44->TabIndex = 37;
			// 
			// textBox45
			// 
			this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox45->Location = System::Drawing::Point(171, 167);
			this->textBox45->Multiline = true;
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(44, 43);
			this->textBox45->TabIndex = 36;
			// 
			// textBox46
			// 
			this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox46->Location = System::Drawing::Point(430, 265);
			this->textBox46->Multiline = true;
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(44, 43);
			this->textBox46->TabIndex = 53;
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox47->Location = System::Drawing::Point(380, 265);
			this->textBox47->Multiline = true;
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(44, 43);
			this->textBox47->TabIndex = 52;
			// 
			// textBox48
			// 
			this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox48->Location = System::Drawing::Point(330, 265);
			this->textBox48->Multiline = true;
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(44, 43);
			this->textBox48->TabIndex = 51;
			// 
			// textBox49
			// 
			this->textBox49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox49->Location = System::Drawing::Point(430, 216);
			this->textBox49->Multiline = true;
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(44, 43);
			this->textBox49->TabIndex = 50;
			// 
			// textBox50
			// 
			this->textBox50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox50->Location = System::Drawing::Point(380, 216);
			this->textBox50->Multiline = true;
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(44, 43);
			this->textBox50->TabIndex = 49;
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox51->Location = System::Drawing::Point(330, 216);
			this->textBox51->Multiline = true;
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(44, 43);
			this->textBox51->TabIndex = 48;
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox52->Location = System::Drawing::Point(430, 167);
			this->textBox52->Multiline = true;
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(44, 43);
			this->textBox52->TabIndex = 47;
			// 
			// textBox53
			// 
			this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox53->Location = System::Drawing::Point(380, 167);
			this->textBox53->Multiline = true;
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(44, 43);
			this->textBox53->TabIndex = 46;
			// 
			// textBox54
			// 
			this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox54->Location = System::Drawing::Point(330, 167);
			this->textBox54->Multiline = true;
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(44, 43);
			this->textBox54->TabIndex = 45;
			// 
			// textBox55
			// 
			this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox55->Location = System::Drawing::Point(112, 423);
			this->textBox55->Multiline = true;
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(44, 43);
			this->textBox55->TabIndex = 62;
			// 
			// textBox56
			// 
			this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox56->Location = System::Drawing::Point(62, 423);
			this->textBox56->Multiline = true;
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(44, 43);
			this->textBox56->TabIndex = 61;
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox57->Location = System::Drawing::Point(12, 423);
			this->textBox57->Multiline = true;
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(44, 43);
			this->textBox57->TabIndex = 60;
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox58->Location = System::Drawing::Point(112, 374);
			this->textBox58->Multiline = true;
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(44, 43);
			this->textBox58->TabIndex = 59;
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox59->Location = System::Drawing::Point(62, 374);
			this->textBox59->Multiline = true;
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(44, 43);
			this->textBox59->TabIndex = 58;
			// 
			// textBox60
			// 
			this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox60->Location = System::Drawing::Point(12, 374);
			this->textBox60->Multiline = true;
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(44, 43);
			this->textBox60->TabIndex = 57;
			// 
			// textBox61
			// 
			this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox61->Location = System::Drawing::Point(112, 325);
			this->textBox61->Multiline = true;
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(44, 43);
			this->textBox61->TabIndex = 56;
			// 
			// textBox62
			// 
			this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox62->Location = System::Drawing::Point(62, 325);
			this->textBox62->Multiline = true;
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(44, 43);
			this->textBox62->TabIndex = 55;
			// 
			// textBox63
			// 
			this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox63->Location = System::Drawing::Point(12, 325);
			this->textBox63->Multiline = true;
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(44, 43);
			this->textBox63->TabIndex = 54;
			// 
			// textBox64
			// 
			this->textBox64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox64->Location = System::Drawing::Point(271, 423);
			this->textBox64->Multiline = true;
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(44, 43);
			this->textBox64->TabIndex = 71;
			// 
			// textBox65
			// 
			this->textBox65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox65->Location = System::Drawing::Point(221, 423);
			this->textBox65->Multiline = true;
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(44, 43);
			this->textBox65->TabIndex = 70;
			// 
			// textBox66
			// 
			this->textBox66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox66->Location = System::Drawing::Point(171, 423);
			this->textBox66->Multiline = true;
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(44, 43);
			this->textBox66->TabIndex = 69;
			// 
			// textBox67
			// 
			this->textBox67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox67->Location = System::Drawing::Point(271, 374);
			this->textBox67->Multiline = true;
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(44, 43);
			this->textBox67->TabIndex = 68;
			// 
			// textBox68
			// 
			this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox68->Location = System::Drawing::Point(221, 374);
			this->textBox68->Multiline = true;
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(44, 43);
			this->textBox68->TabIndex = 67;
			// 
			// textBox69
			// 
			this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox69->Location = System::Drawing::Point(171, 374);
			this->textBox69->Multiline = true;
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(44, 43);
			this->textBox69->TabIndex = 66;
			// 
			// textBox70
			// 
			this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox70->Location = System::Drawing::Point(271, 325);
			this->textBox70->Multiline = true;
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(44, 43);
			this->textBox70->TabIndex = 65;
			// 
			// textBox71
			// 
			this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox71->Location = System::Drawing::Point(221, 325);
			this->textBox71->Multiline = true;
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(44, 43);
			this->textBox71->TabIndex = 64;
			// 
			// textBox72
			// 
			this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox72->Location = System::Drawing::Point(171, 325);
			this->textBox72->Multiline = true;
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(44, 43);
			this->textBox72->TabIndex = 63;
			// 
			// textBox73
			// 
			this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox73->Location = System::Drawing::Point(430, 423);
			this->textBox73->Multiline = true;
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(44, 43);
			this->textBox73->TabIndex = 80;
			// 
			// textBox74
			// 
			this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox74->Location = System::Drawing::Point(380, 423);
			this->textBox74->Multiline = true;
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(44, 43);
			this->textBox74->TabIndex = 79;
			// 
			// textBox75
			// 
			this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox75->Location = System::Drawing::Point(330, 423);
			this->textBox75->Multiline = true;
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(44, 43);
			this->textBox75->TabIndex = 78;
			// 
			// textBox76
			// 
			this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox76->Location = System::Drawing::Point(430, 374);
			this->textBox76->Multiline = true;
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(44, 43);
			this->textBox76->TabIndex = 77;
			// 
			// textBox77
			// 
			this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox77->Location = System::Drawing::Point(380, 374);
			this->textBox77->Multiline = true;
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(44, 43);
			this->textBox77->TabIndex = 76;
			// 
			// textBox78
			// 
			this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox78->Location = System::Drawing::Point(330, 374);
			this->textBox78->Multiline = true;
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(44, 43);
			this->textBox78->TabIndex = 75;
			// 
			// textBox79
			// 
			this->textBox79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox79->Location = System::Drawing::Point(430, 325);
			this->textBox79->Multiline = true;
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(44, 43);
			this->textBox79->TabIndex = 74;
			// 
			// textBox80
			// 
			this->textBox80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox80->Location = System::Drawing::Point(380, 325);
			this->textBox80->Multiline = true;
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(44, 43);
			this->textBox80->TabIndex = 73;
			// 
			// textBox81
			// 
			this->textBox81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox81->Location = System::Drawing::Point(330, 325);
			this->textBox81->Multiline = true;
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(44, 43);
			this->textBox81->TabIndex = 72;
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
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Sudokuframe_Load(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->TextAlign = HorizontalAlignment::Center;
			 
			textBox1->Text=char(C->get_arr(0,0));
			 textBox54->Text="4";
		 }
};
}
