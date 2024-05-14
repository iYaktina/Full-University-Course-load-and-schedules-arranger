#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		MyForm10(void)
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
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label9;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28571F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28572F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28572F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28572F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28572F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28572F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.28572F)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label6, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label22, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label18, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label23, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label17, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->label16, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->label14, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->label15, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->label13, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 6, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(54, 58);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(651, 302);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(467, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 26);
			this->label15->TabIndex = 23;
			this->label15->Text = L"      Lab        8:30";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Courses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 26);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Network Security";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 26);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Distributed Systems";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 39);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Senior Project in Computer Science ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(560, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Thurusday";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(467, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Wednesday";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(374, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tuesday";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(281, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Monday";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sunday";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(95, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Saturday";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 240);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Minor Elective";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(560, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 26);
			this->label9->TabIndex = 30;
			this->label9->Text = L"      Lecture        1:00";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(281, 120);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(82, 26);
			this->label22->TabIndex = 31;
			this->label22->Text = L"      Lecture        1:00";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(374, 180);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 26);
			this->label17->TabIndex = 25;
			this->label17->Text = L"      Lecture        10:30";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(281, 180);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(64, 26);
			this->label18->TabIndex = 26;
			this->label18->Text = L"      Lab        3:45";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(560, 180);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 26);
			this->label16->TabIndex = 24;
			this->label16->Text = L"      Lecture        11:00";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(374, 120);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(67, 26);
			this->label23->TabIndex = 32;
			this->label23->Text = L"      Lab         1:00";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(374, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 26);
			this->label13->TabIndex = 21;
			this->label13->Text = L"      Lecture        9:00";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(560, 60);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 26);
			this->label14->TabIndex = 22;
			this->label14->Text = L"      Lecture        1:00";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 541);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm10";
			this->Text = L"MyForm10";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
