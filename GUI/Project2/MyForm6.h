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
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox3;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(936, 204);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 47;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(936, 157);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 46;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(936, 60);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 45;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(754, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 44;
			this->button6->Text = L"DROP";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm6::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(754, 155);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 43;
			this->button5->Text = L"DROP";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm6::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(754, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 42;
			this->button4->Text = L"DROP";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm6::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(835, 202);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 41;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(835, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 40;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(835, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 39;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(443, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 38;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(443, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(443, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(197, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm6::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm6::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Courses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Database Management Systems";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 133);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Computer Organization ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"University Req";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 13);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Data Structures & Algorithms";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 201);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Object Oriented Programming";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(197, 133);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 48;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(443, 133);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 49;
			this->label14->Text = L"label14";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(936, 125);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 52;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(754, 123);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 51;
			this->button7->Text = L"DROP";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm6::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(835, 123);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 50;
			this->button8->Text = L"ADD";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm6::button8_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 607);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
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
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button8->Visible = false;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		comboBox3->Visible = false;
		comboBox4->Visible = false;
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
		String^ input13 = reader->ReadLine();
		String^ input14 = reader->ReadLine();
		String^ input15 = reader->ReadLine();
		String^ input16 = reader->ReadLine();
		label2->Text = "Lecture Day : " + input1 + "  Lecture Time : " + input5 + " : " + (System::Convert::ToInt16(input5) + 1.30);
		label13->Text= "Lecture Day : " + input2 + "  Lecture Time : " + input6 + " : " + (System::Convert::ToInt16(input6) + 1.30);
		label3->Text = "Lecture Day : " + input3 + "  Lecture Time : " + input7 + " : " + (System::Convert::ToInt16(input7) + 1.30);
		label4->Text = "Lecture Day : " + input4 + "  Lecture Time : " + input8 + " : " + (System::Convert::ToInt16(input8) + 1.30);
		label5->Text = "Lab Day : " + input9 + "  Lab Time : " + input13 + " : " + (System::Convert::ToInt16(input13) + 2.00);
		label14->Text = "Lab Day : " + input10 + "  Lab Time : " + input14 + " : " + (System::Convert::ToInt16(input14) + 2.00);
		label6->Text = "Lab Day : " + input11 + "  Lab Time : " + input15 + " : " + (System::Convert::ToInt16(input15) + 2.00);
		label7->Text = "Lab Day : " + input12 + "  Lab Time : " + input16 + " : " + (System::Convert::ToInt16(input16) + 2.00);
		
			
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Visible = false;
	button1->Visible = true;
	button4->Visible = false;
	comboBox1->Visible = true;
	if (!label8->Visible) {
		comboBox1->Items->Add(label8->Text);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	label10->Visible = false;
	button8->Visible = true;
	button7->Visible = false;
	comboBox4->Visible = true;
	if (!label10->Visible) {
		comboBox4->Items->Add(label10->Text);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label11->Visible = false;
	button2->Visible = true;
	button5->Visible = false;
	comboBox2->Visible = true;
	if (!label11->Visible) {
		comboBox2->Items->Add(label11->Text);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	label12->Visible = false;
	button3->Visible = true;
	button6->Visible = false;
	comboBox3->Visible = true;
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
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedChoice = comboBox4->SelectedItem->ToString();
	label10->Text = selectedChoice;
	comboBox4->Items->Remove(label10->Text);
	comboBox4->Visible = false;
	label10->Visible = true;
	button8->Visible = false;
	button7->Visible = true;
	comboBox4->Items->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedChoice = comboBox2->SelectedItem->ToString();
	label11->Text = selectedChoice;
	comboBox2->Items->Remove(label11->Text);
	comboBox2->Visible = false;
	label11->Visible = true;
	button2->Visible = false;
	button5->Visible = true;
	comboBox2->Items->Clear();
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
