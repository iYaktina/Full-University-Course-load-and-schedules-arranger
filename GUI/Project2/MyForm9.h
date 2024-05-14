#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;

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
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(443, 83);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 101;
			this->label14->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(197, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 100;
			this->label13->Text = L"label13";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(936, 178);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 99;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(936, 75);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 98;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(936, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 97;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(754, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 96;
			this->button6->Text = L"DROP";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm9::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(754, 73);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 95;
			this->button5->Text = L"DROP";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm9::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(754, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 94;
			this->button4->Text = L"DROP";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm9::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(835, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 93;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm9::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(835, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 92;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(835, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 91;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(443, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 89;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(443, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 88;
			this->label5->Text = L"label5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(197, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 86;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 85;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 79;
			this->label1->Text = L"Courses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 150);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 13);
			this->label11->TabIndex = 83;
			this->label11->Text = L"Minor elective 4";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 13);
			this->label10->TabIndex = 82;
			this->label10->Text = L"Minor elective 3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 13);
			this->label9->TabIndex = 81;
			this->label9->Text = L"Distributed Systems";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 13);
			this->label8->TabIndex = 80;
			this->label8->Text = L"Network Security";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 186);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(177, 13);
			this->label12->TabIndex = 84;
			this->label12->Text = L"Senior Project in Computer Science ";
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 323);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		comboBox3->Visible = false;
		String^ fileName = "data.txt";
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ inputm = reader->ReadLine();
		String^ inputk = reader->ReadLine();
		String^ inputj = reader->ReadLine();
		String^ inputi = reader->ReadLine();
		String^ inputh = reader->ReadLine();
		String^ inputg = reader->ReadLine();
		String^ inputf = reader->ReadLine();
		String^ inpute = reader->ReadLine();
		String^ inputd = reader->ReadLine();
		String^ inputc = reader->ReadLine();
		String^ inputb = reader->ReadLine();
		String^ inputa = reader->ReadLine();
		String^ inputaa = reader->ReadLine();
		String^ inputab = reader->ReadLine();
		String^ inputac = reader->ReadLine();
		String^ inputad = reader->ReadLine();
		String^ inputae = reader->ReadLine();
		String^ inputaf = reader->ReadLine();
		String^ inputag = reader->ReadLine();
		String^ inputba = reader->ReadLine();
		String^ inputbb = reader->ReadLine();
		String^ inputbc = reader->ReadLine();
		String^ inputbd = reader->ReadLine();
		String^ inputbe = reader->ReadLine();
		String^ inputbf = reader->ReadLine();
		String^ inputbg = reader->ReadLine();
		String^ inputbh = reader->ReadLine();
		String^ inputbi = reader->ReadLine();
		String^ inputca = reader->ReadLine();
		String^ inputcb = reader->ReadLine();
		String^ inputcc = reader->ReadLine();
		String^ inputcd = reader->ReadLine();
		String^ inputce = reader->ReadLine();
		String^ inputcf = reader->ReadLine();
		String^ inputcg = reader->ReadLine();
		String^ inputch = reader->ReadLine();
		String^ inputda = reader->ReadLine();
		String^ inputdb = reader->ReadLine();
		String^ inputdc = reader->ReadLine();
		String^ inputdd = reader->ReadLine();
		String^ inputde = reader->ReadLine();
		String^ inputdf = reader->ReadLine();
		String^ inputdg = reader->ReadLine();
		String^ inputdh = reader->ReadLine();
		String^ input1 = reader->ReadLine();
		String^ input2 = reader->ReadLine();
		String^ input3 = reader->ReadLine();
		String^ input4 = reader->ReadLine();
		String^ input5 = reader->ReadLine();
		String^ input6 = reader->ReadLine();
		String^ input7 = reader->ReadLine();
		String^ input8 = reader->ReadLine();
		String^ input9 = reader->ReadLine();
		String^ input10 = reader->ReadLine();
		String^ input11 = reader->ReadLine();
		String^ input12 = reader->ReadLine();
		label2->Text = "Lecture Day : " + input1 + "  Lecture Time : " + input4 + " : " + (System::Convert::ToInt16(input4) + 1.30);
		label13->Text = "Lecture Day : " + input2 + "  Lecture Time : " + input5 + " : " + (System::Convert::ToInt16(input5) + 1.30);
		label3->Text = "Lecture Day : " + input3 + "  Lecture Time : " + input6 + " : " + (System::Convert::ToInt16(input6) + 1.30);
		label5->Text = "Lab Day : " + input7 + "  Lab Time : " + input10 + " : " + (System::Convert::ToInt16(input10) + 2.00);
		label14->Text = "Lab Day : " + input8 + "  Lab Time : " + input11 + " : " + (System::Convert::ToInt16(input11) + 2.00);
		label6->Text = "Lab Day : " + input9 + "  Lab Time : " + input12 + " : " + (System::Convert::ToInt16(input12) + 2.00);

	}
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	button4->Visible = false;
	button1->Visible = true;
	comboBox1->Visible = true;
	label8->Visible = false;
	if (!label8->Visible) {
		comboBox1->Items->Add(label8->Text);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	button5->Visible = false;
	button2->Visible = true;
	comboBox2->Visible = true;
	label9->Visible = false;
	if (!label9->Visible) {
		comboBox2->Items->Add(label9->Text);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Visible = false;
	button3->Visible = true;
	comboBox3->Visible = true;
	label12->Visible = false;
	if (!label12->Visible) {
		comboBox3->Items->Add(label12->Text);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedChoice = comboBox1->SelectedItem->ToString();
	label8->Text = selectedChoice;
	comboBox1->Items->Remove(label8->Text);
	comboBox1->Visible = false;
	label8->Visible = true;
	button1->Visible = false;
	button4->Visible = true;
	comboBox1->Items->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedChoice = comboBox2->SelectedItem->ToString();
	label9->Text = selectedChoice;
	comboBox2->Items->Remove(label9->Text);
	comboBox2->Visible = false;
	label9->Visible = true;
	button2->Visible = false;
	button5->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedChoice = comboBox3->SelectedItem->ToString();
	label12->Text = selectedChoice;
	comboBox3->Items->Remove(label12->Text);
	comboBox3->Visible = false;
	label12->Visible = true;
	button3->Visible = false;
	button6->Visible = true;
	comboBox3->Items->Clear();
}
};
}
