#pragma once
#include <cmath>
namespace lab3b {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(401, 333);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 357);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"����������� z=f(x,y)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		static double x0 = 10, Y0 = -1, z0 = 5, alf = 4.31, bet = 5, A = -6.5, a = -6.5;
		static double Xmin = -1.5, Xmax = 1.5, Ymin = -1.5, Ymax = 1.5;
		static int Width = 200, Height = 200;
		static double h = 0.1, h0 = 0.25;
		static array<Point>^ ob = gcnew array<Point>(4);

		//------------------------------------------------------------------------------
		//*********** void IJ(double x, double y, double z, array<int>^ ar) **********
	private: void IJ(double x, double y, double z, array<int>^ ar)
	{
		double Xn, Yn, Zn;

		//������������ ������� ������� ��������� � �.(x0,Y0,z0)
		Xn = (x - x0) * Math::Cos(alf) - (y - Y0) * Math::Sin(alf);
		Yn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Cos(bet) - (z - z0) * Math::Sin(bet);
		Zn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Sin(bet) + (z - z0) * Math::Cos(bet);

		//������ �������� �� ���������
		Xn /= Zn / A + 1;
		Yn /= Zn / a + 1;

		//������������ ��� x � y
		ar[0] = Width * (Xn - Xmin) / (Xmax - Xmin);
		ar[1] = Height * (Yn - Ymax) / (Ymin - Ymax);
	}
		   //******* void IJ(double x, double y, double z, array<int>^ ar) **********
		   //------------------------------------------------------------------------------

		   //------------------------------------------------------------------------------
		   //****** double F1(double x1,double y1) *****************************
	private: double F1(double x1, double y1)
	{
		return (x1 * y1) / (Math::Pow(x1, 2) + Math::Pow(y1, 2));
	}
		   //***** double F1(double x1,double y1) *****************************
		   //------------------------------------------------------------------------------



		   //��������� �����������
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		int i3, j3;
		int i1, j1, i2, j2;
		array<int>^ a1;
		array<int>^ a2;
		a1 = gcnew array<int>(2);
		a2 = gcnew array<int>(2);
		IJ(0, 0, 0, a1);

		//������ � ����������� ��� x
		IJ(4, 0, 0, a2);
		e->Graphics->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("X", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

		//������ � ����������� ��� y
		IJ(0, 4, 0, a2);
		e->Graphics->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

		//������ � ����������� ��� z
		IJ(0, 0, 4.3, a2);
		e->Graphics->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("Z", this->Font, Brushes::Red, a2[0] + 3, a2[1] - 3);


		for (j3 = -30; j3 < 30; j3++)
		{
			for (i3 = -30; i3 < 30; i3++)
			{
				IJ(h0 + h * i3, h0 + h * j3, F1(h0 + h * i3, h0 + h * j3), a1);
				ob[0].X = a1[0];
				ob[0].Y = a1[1];
				IJ(h0 + h * i3, h0 + h * (j3 + 1), F1(h0 + h * i3, h0 + h * (j3 + 1)), a1);
				ob[1].X = a1[0];
				ob[1].Y = a1[1];
				IJ(h0 + h * (i3 + 1), h0 + h * (j3 + 1), F1(h0 + h * (i3 + 1), h0 + h * (j3 + 1)), a1);
				ob[2].X = a1[0];
				ob[2].Y = a1[1];
				IJ(h0 + h * (i3 + 1), h0 + h * j3, F1(h0 + h * (i3 + 1), h0 + h * j3), a1);
				ob[3].X = a1[0];
				ob[3].Y = a1[1];
				e->Graphics->DrawPolygon(Pens::Blue, ob);


			}
		}

	}
	};
}
