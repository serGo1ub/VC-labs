#pragma once
#include <cmath>
#include "./MyForm1.h"

namespace lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 111);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(335, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 89);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите числа";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 188);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(402, 108);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Найти \?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(402, 188);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 263);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Полиномы";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		static array<int>^ A = gcnew array<int>(50);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		array<String^>^ as;
		array<Char>^ ar;
		int len;
		int min;
		int indexMin;
		int indexMax;
		int max;
		int result = 1;
		ar = gcnew array<Char>(1);
		ar[0] = ' ';
		if (textBox1->Text->Length != 0)
		{
			len = textBox1->Text->Split(ar)->Length;

			as = textBox1->Text->Split(ar);
			for (int i = 0; i < len; i++)
			{
				A[i] = Convert::ToInt32(as[i]);
			}
			max = abs(A[0]);
			min = abs(A[0]);
			for (int i = 0; i < len; i++)
			{
				if (abs(max) < abs(A[i]))
				{
					max = abs(A[i]);
					indexMax = i;
				}

				if (abs(min) > abs(A[i]))
				{
					min = abs(A[i]);
					indexMin = i;
				}
			}
			if (indexMin > indexMax)
			{
				int n = indexMax;
				indexMax = indexMin;
				indexMin = n;
			}
			if (indexMax - indexMin > 1) {
				for (int i = indexMin + 1; i < indexMax; i++)
				{
					result *= A[i];
				}
			}

			if (len == 2) {
				result = 0;
			}

			MyForm^ gforma = gcnew MyForm;
			gforma->Show();
			gforma->textBox1->Text = System::Convert::ToString(result);
		}
		else {
			MessageBox::Show("Вы ввели не все данные !\n",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8) || (e->KeyChar == ' ') ||
			(e->KeyChar == '-')) return;
		//Остальные символы запрещены
		e->Handled = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Close();
	}
	};
}
