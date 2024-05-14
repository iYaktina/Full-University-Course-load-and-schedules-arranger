#pragma once
#include "MyForm1.h"
#include "MyForm12.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::ComponentModel;

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Student";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(521, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Instructor";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(802, 226);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm12^ myform12 = gcnew MyForm12();
		myform12->Show();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ myform1 = gcnew MyForm1();
		myform1->Show();


	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Icon^ icon1 = gcnew System::Drawing::Icon("programing.ico");
		button1->BackgroundImage = icon1->ToBitmap();
		button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
		System::Drawing::Icon^ icon = gcnew System::Drawing::Icon("monitoring.ico");
		button2->BackgroundImage = icon->ToBitmap();
		button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->BackColor = System::Drawing::Color::LightSteelBlue;
		System::Drawing::Image^ backgroundImage = gcnew System::Drawing::Bitmap("logo-miu.png.pagespeed.ce.rwh7DNPyFw.png");
		this->BackgroundImage = backgroundImage;
	
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

	}
	
};
}
