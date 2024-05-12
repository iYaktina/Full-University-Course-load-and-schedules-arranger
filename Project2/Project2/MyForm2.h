#pragma once
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include "MyForm10.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{

	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Schedule";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(183, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"label3";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(324, 202);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		String^ ch = ch;
		String^ gpa = gpa;

#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Credit Hours : "+ch;
		label2->Text = "GPA : " + gpa;
		if (System::Convert::ToDouble(gpa) < 2.0) {
			label3->Text = "Student Status : Probabtion";
		}
		else
			label3->Text = "Student Status : Regular";
		


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Convert::ToInt16(ch) < 33 && label3->Text == "Student Status : Probabtion") {
			MyForm4^ myform4 = gcnew MyForm4();
			myform4->Show();
		
		}
		else if (System::Convert::ToInt16(ch) < 33 && label3->Text == "Student Status : Regular") {
			MyForm3^ myform3 = gcnew MyForm3();
			myform3->Show();
		}
		else if (System::Convert::ToInt16(ch) >33 && System::Convert::ToInt16(ch) < 66 && label3->Text == "Student Status : Probabtion") {
			MyForm5^ myform5 = gcnew MyForm5();
			myform5->Show();
		}
		else if (System::Convert::ToInt16(ch) > 33 && System::Convert::ToInt16(ch) < 66 && label3->Text == "Student Status : Regular") {
			MyForm6^ myform6 = gcnew MyForm6();
			myform6->Show();
		}
		else if (System::Convert::ToInt16(ch) > 66 && System::Convert::ToInt16(ch) < 99&& label3->Text == "Student Status : Probabtion") {
			MyForm8^ myform8 = gcnew MyForm8();
				myform8->Show();
		}
		else if (System::Convert::ToInt16(ch) > 66 && System::Convert::ToInt16(ch) < 99 && label3->Text == "Student Status : Regular") {
			MyForm7^ myform7 = gcnew MyForm7();
				myform7->Show();
		}
		else if (System::Convert::ToInt16(ch) > 99  && label3->Text == "Student Status : Probabtion") {
			MyForm10^ myform10 = gcnew MyForm10();
			myform10->Show();
		}
		else if (System::Convert::ToInt16(ch) > 99 && label3->Text == "Student Status : Regular") {
			MyForm9^ myform9 = gcnew MyForm9();
			myform9->Show();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
