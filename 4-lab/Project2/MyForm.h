#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
			bool turn = true;
			int turn_count = 0;


				private: System::Windows::Forms::Label^ label3;
				private: System::Windows::Forms::Label^ x_win_count;
				private: System::Windows::Forms::Label^ draw_count;
				private: System::Windows::Forms::ToolStripMenuItem^ resetWinCountToolStripMenuItem;
				private: System::Windows::Forms::Label^ o_win_count;
				private: System::Windows::Forms::TextBox^ p1;
				private: System::Windows::Forms::TextBox^ p2;
				private: System::Windows::Forms::ToolStripMenuItem^ newGameToolStripMenuItem;
			public:
		   
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	//private: System::Windows::Forms::ToolStripMenuItem^ newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ A1;
	private: System::Windows::Forms::Button^ A2;
	private: System::Windows::Forms::Button^ A3;
	private: System::Windows::Forms::Button^ B1;
	private: System::Windows::Forms::Button^ B2;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ C1;
	private: System::Windows::Forms::Button^ C2;
	private: System::Windows::Forms::Button^ C3;









	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetWinCountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->x_win_count = (gcnew System::Windows::Forms::Label());
			this->draw_count = (gcnew System::Windows::Forms::Label());
			this->o_win_count = (gcnew System::Windows::Forms::Label());
			this->p1 = (gcnew System::Windows::Forms::TextBox());
			this->p2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(300, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->resetWinCountToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// resetWinCountToolStripMenuItem
			// 
			this->resetWinCountToolStripMenuItem->Name = L"resetWinCountToolStripMenuItem";
			this->resetWinCountToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->resetWinCountToolStripMenuItem->Text = L"Reset Win Count";
			this->resetWinCountToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::resetWinCountToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(133, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// A1
			// 
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A1->Location = System::Drawing::Point(12, 65);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(75, 75);
			this->A1->TabIndex = 1;
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->A1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->A1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// A2
			// 
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A2->Location = System::Drawing::Point(116, 65);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(75, 75);
			this->A2->TabIndex = 2;
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->A2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->A2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// A3
			// 
			this->A3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A3->Location = System::Drawing::Point(209, 65);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(75, 75);
			this->A3->TabIndex = 3;
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->A3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->A3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// B1
			// 
			this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B1->Location = System::Drawing::Point(12, 157);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(75, 75);
			this->B1->TabIndex = 4;
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->B1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->B1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// B2
			// 
			this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B2->Location = System::Drawing::Point(116, 157);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(75, 75);
			this->B2->TabIndex = 5;
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->B2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->B2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// B3
			// 
			this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B3->Location = System::Drawing::Point(209, 157);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(75, 75);
			this->B3->TabIndex = 6;
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->B3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->B3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// C1
			// 
			this->C1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C1->Location = System::Drawing::Point(12, 251);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(75, 75);
			this->C1->TabIndex = 7;
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->C1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->C1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// C2
			// 
			this->C2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C2->Location = System::Drawing::Point(116, 251);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(75, 75);
			this->C2->TabIndex = 8;
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->C2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->C2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// C3
			// 
			this->C3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C3->Location = System::Drawing::Point(209, 251);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(75, 75);
			this->C3->TabIndex = 9;
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->C3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->C3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(100, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Draw Count";
			// 
			// x_win_count
			// 
			this->x_win_count->AutoSize = true;
			this->x_win_count->Location = System::Drawing::Point(38, 376);
			this->x_win_count->Name = L"x_win_count";
			this->x_win_count->Size = System::Drawing::Size(16, 17);
			this->x_win_count->TabIndex = 13;
			this->x_win_count->Text = L"0";
			// 
			// draw_count
			// 
			this->draw_count->AutoSize = true;
			this->draw_count->Location = System::Drawing::Point(138, 376);
			this->draw_count->Name = L"draw_count";
			this->draw_count->Size = System::Drawing::Size(16, 17);
			this->draw_count->TabIndex = 14;
			this->draw_count->Text = L"0";
			// 
			// o_win_count
			// 
			this->o_win_count->AutoSize = true;
			this->o_win_count->Location = System::Drawing::Point(237, 376);
			this->o_win_count->Name = L"o_win_count";
			this->o_win_count->Size = System::Drawing::Size(16, 17);
			this->o_win_count->TabIndex = 15;
			this->o_win_count->Text = L"0";
			// 
			// p1
			// 
			this->p1->Location = System::Drawing::Point(2, 345);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(85, 22);
			this->p1->TabIndex = 16;
			this->p1->Text = L"Player1";
			this->p1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// p2
			// 
			this->p2->Location = System::Drawing::Point(200, 345);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(84, 22);
			this->p2->TabIndex = 17;
			this->p2->Text = L"Player2";
			this->p2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 425);
			this->Controls->Add(this->p2);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->o_win_count);
			this->Controls->Add(this->draw_count);
			this->Controls->Add(this->x_win_count);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			for each (Control ^ c in Controls)
			{
				System::Windows::Forms::Button^ b;
				if (c->Enabled == false) {
					b = (Button^)c;
					b->Enabled = true;
					b->Text = "";
				}
			}
			turn = true;
			turn_count = 0;
		}
		private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {

			System::Windows::Forms::Button^ b;
			b = (Button^)sender;
			if (turn) {
				b->Text = "X";
			}
			else {
				b->Text = "O";
			}

			turn = !turn;

			b->Enabled = false;
			turn_count++;
			checkForWinner();
		};
	private: System::Void checkForWinner() {

		bool there_is_a_winner = false;
		if ((A1->Text == A2->Text) && (A2->Text == A3->Text) && (!A1->Enabled)) {
			there_is_a_winner = true;
		}
		else if ((B1->Text == B2->Text) && (B2->Text == B3->Text) && (!B1->Enabled)) {
			there_is_a_winner = true;
		}
		else if ((C1->Text == C2->Text) && (C2->Text == C3->Text) && (!C1->Enabled)) {
			there_is_a_winner = true;
		}

		else if ((A1->Text == B1->Text) && (B1->Text == C1->Text) && (!A1->Enabled)) {
			there_is_a_winner = true;
		}
		else if ((A2->Text == B2->Text) && (B2->Text == C2->Text) && (!A2->Enabled)) {
			there_is_a_winner = true;
		}
		else if ((A3->Text == B3->Text) && (B3->Text == C3->Text) && (!A3->Enabled)) {
			there_is_a_winner = true;
		}

		else if ((A1->Text == B2->Text) && (B2->Text == C3->Text) && (!A1->Enabled)) {
			there_is_a_winner = true;
		}
		else if ((A3->Text == B2->Text) && (B2->Text == C1->Text) && (!C1->Enabled)) {
			there_is_a_winner = true;
		}

		if (there_is_a_winner) {
			System::String^ winner = " ";
			disableButtons();
			if (turn) {
				winner = p2->Text;
				o_win_count->Text = ((Int32::Parse(o_win_count->Text)) + 1).ToString();
			}
			else {
				winner = p1->Text;
				x_win_count->Text = ((Int32::Parse(x_win_count->Text)) + 1).ToString();
			}
			MessageBox::Show(winner + " Wins!", "Winner");
			newGameToolStripMenuItem->PerformClick();
		}
		else {
			if (turn_count == 9) {
				draw_count->Text = ((Int32::Parse(draw_count->Text)) + 1).ToString();
				MessageBox::Show("Draw", "Draw");
				newGameToolStripMenuItem->PerformClick();
			}
		}
	};

	private: System::Void disableButtons() {

		for each (Control ^ c in Controls)
		{
			System::Windows::Forms::Button^ b;
			if (c == b) {
				b = (Button^)c;
				b->Enabled = false;
			}
		}
	};
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Created By Sergey", "Tic Tac Toe");
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}
private: System::Void button_enter(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button_leave(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void resetWinCountToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	o_win_count->Text = "0";
	x_win_count->Text = "0";
	draw_count->Text = "0";
}
};
}
