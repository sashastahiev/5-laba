#pragma once

namespace PovtorIntegral {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ CosX2Y2
	/// </summary>
	public ref class CosX2Y2 : public System::Windows::Forms::Form
	{
	public:
		CosX2Y2(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~CosX2Y2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_B1;
	private: System::Windows::Forms::TextBox^ textBox_G2;
	private: System::Windows::Forms::TextBox^ textBox_G3;


	private: System::Windows::Forms::TextBox^ textBox_G1;





	private: System::Windows::Forms::TextBox^ textBox_B3;

	private: System::Windows::Forms::TextBox^ textBox_B2;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíþToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âû÷èñëèòüToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox_x1;
	private: System::Windows::Forms::TextBox^ textBox_x2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_x3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_y1;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_y3;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_y2;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox_1;

	private: System::Windows::Forms::ToolStripMenuItem^ ïîÓìîë÷àíèþ1ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox_3;

	private: System::Windows::Forms::CheckBox^ checkBox_1;
	private: System::Windows::Forms::CheckBox^ checkBox_2;

	private: System::Windows::Forms::TextBox^ textBox_res;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;



	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_B1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_G2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_G3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_G1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_B3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_B2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âû÷èñëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÓìîë÷àíèþ1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_x1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_x3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_y1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_y3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_y2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox_res = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox_2 = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox_1 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(17, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"B1 =  ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(223, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y3 = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(223, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Y2 = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(223, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Y1 = ";
			this->label4->Click += gcnew System::EventHandler(this, &CosX2Y2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(17, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"B3 = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(17, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"B2 = ";
			// 
			// textBox_B1
			// 
			this->textBox_B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_B1->Location = System::Drawing::Point(84, 37);
			this->textBox_B1->Name = L"textBox_B1";
			this->textBox_B1->Size = System::Drawing::Size(100, 34);
			this->textBox_B1->TabIndex = 6;
			// 
			// textBox_G2
			// 
			this->textBox_G2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_G2->Location = System::Drawing::Point(295, 94);
			this->textBox_G2->Name = L"textBox_G2";
			this->textBox_G2->Size = System::Drawing::Size(100, 34);
			this->textBox_G2->TabIndex = 7;
			// 
			// textBox_G3
			// 
			this->textBox_G3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_G3->Location = System::Drawing::Point(295, 146);
			this->textBox_G3->Name = L"textBox_G3";
			this->textBox_G3->Size = System::Drawing::Size(100, 34);
			this->textBox_G3->TabIndex = 8;
			// 
			// textBox_G1
			// 
			this->textBox_G1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_G1->Location = System::Drawing::Point(295, 37);
			this->textBox_G1->Name = L"textBox_G1";
			this->textBox_G1->Size = System::Drawing::Size(100, 34);
			this->textBox_G1->TabIndex = 9;
			// 
			// textBox_B3
			// 
			this->textBox_B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_B3->Location = System::Drawing::Point(84, 146);
			this->textBox_B3->Name = L"textBox_B3";
			this->textBox_B3->Size = System::Drawing::Size(100, 34);
			this->textBox_B3->TabIndex = 10;
			// 
			// textBox_B2
			// 
			this->textBox_B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_B2->Location = System::Drawing::Point(84, 94);
			this->textBox_B2->Name = L"textBox_B2";
			this->textBox_B2->Size = System::Drawing::Size(100, 34);
			this->textBox_B2->TabIndex = 11;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíþToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1128, 30);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíþToolStripMenuItem
			// 
			this->ìåíþToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âû÷èñëèòüToolStripMenuItem,
					this->ïîÓìîë÷àíèþ1ToolStripMenuItem, this->î÷èñòèòüToolStripMenuItem
			});
			this->ìåíþToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ìåíþToolStripMenuItem->Name = L"ìåíþToolStripMenuItem";
			this->ìåíþToolStripMenuItem->Size = System::Drawing::Size(60, 26);
			this->ìåíþToolStripMenuItem->Text = L"Ìåíþ";
			// 
			// âû÷èñëèòüToolStripMenuItem
			// 
			this->âû÷èñëèòüToolStripMenuItem->Name = L"âû÷èñëèòüToolStripMenuItem";
			this->âû÷èñëèòüToolStripMenuItem->Size = System::Drawing::Size(392, 26);
			this->âû÷èñëèòüToolStripMenuItem->Text = L"Âû÷èñëèòü èíòåãðàë ïðè ââåäåííûõ ïàðàìåòðàõ";
			this->âû÷èñëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &CosX2Y2::âû÷èñëèòüToolStripMenuItem_Click);
			// 
			// ïîÓìîë÷àíèþ1ToolStripMenuItem
			// 
			this->ïîÓìîë÷àíèþ1ToolStripMenuItem->Name = L"ïîÓìîë÷àíèþ1ToolStripMenuItem";
			this->ïîÓìîë÷àíèþ1ToolStripMenuItem->Size = System::Drawing::Size(392, 26);
			this->ïîÓìîë÷àíèþ1ToolStripMenuItem->Text = L"Âû÷èñëèòü èíòåãðàë âûáðàííûì ñïîñîáîì";
			this->ïîÓìîë÷àíèþ1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CosX2Y2::ïîÓìîë÷àíèþ1ToolStripMenuItem_Click);
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(392, 26);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü âñå";
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &CosX2Y2::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(59, 26);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &CosX2Y2::âûõîäToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_B1);
			this->groupBox1->Controls->Add(this->textBox_B2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox_B3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox_G1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox_G3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox_G2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(487, 203);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Òî÷êè íà òðåóãîëüíèêå (óçëû)";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox_x1);
			this->groupBox2->Controls->Add(this->textBox_x2);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox_x3);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox_y1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox_y3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox_y2);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 253);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(487, 282);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Êîîðäèíàòû âåðøèí òðåóãîëüíèêà";
			// 
			// textBox_x1
			// 
			this->textBox_x1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x1->Location = System::Drawing::Point(84, 37);
			this->textBox_x1->Name = L"textBox_x1";
			this->textBox_x1->Size = System::Drawing::Size(100, 34);
			this->textBox_x1->TabIndex = 6;
			// 
			// textBox_x2
			// 
			this->textBox_x2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x2->Location = System::Drawing::Point(84, 101);
			this->textBox_x2->Name = L"textBox_x2";
			this->textBox_x2->Size = System::Drawing::Size(100, 34);
			this->textBox_x2->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(17, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 27);
			this->label7->TabIndex = 0;
			this->label7->Text = L"x1 = ";
			// 
			// textBox_x3
			// 
			this->textBox_x3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_x3->Location = System::Drawing::Point(84, 158);
			this->textBox_x3->Name = L"textBox_x3";
			this->textBox_x3->Size = System::Drawing::Size(100, 34);
			this->textBox_x3->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(223, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 27);
			this->label8->TabIndex = 1;
			this->label8->Text = L"y3 = ";
			// 
			// textBox_y1
			// 
			this->textBox_y1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y1->Location = System::Drawing::Point(295, 37);
			this->textBox_y1->Name = L"textBox_y1";
			this->textBox_y1->Size = System::Drawing::Size(100, 34);
			this->textBox_y1->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(223, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 27);
			this->label9->TabIndex = 2;
			this->label9->Text = L"y2 = ";
			// 
			// textBox_y3
			// 
			this->textBox_y3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y3->Location = System::Drawing::Point(295, 158);
			this->textBox_y3->Name = L"textBox_y3";
			this->textBox_y3->Size = System::Drawing::Size(100, 34);
			this->textBox_y3->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(223, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 27);
			this->label10->TabIndex = 3;
			this->label10->Text = L"y1 = ";
			// 
			// textBox_y2
			// 
			this->textBox_y2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_y2->Location = System::Drawing::Point(295, 101);
			this->textBox_y2->Name = L"textBox_y2";
			this->textBox_y2->Size = System::Drawing::Size(100, 34);
			this->textBox_y2->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(17, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 27);
			this->label11->TabIndex = 4;
			this->label11->Text = L"x3 = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(17, 104);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 27);
			this->label12->TabIndex = 5;
			this->label12->Text = L"x2 = ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->chart3);
			this->groupBox3->Controls->Add(this->textBox_res);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->chart2);
			this->groupBox3->Controls->Add(this->chart1);
			this->groupBox3->Controls->Add(this->checkBox_2);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->checkBox_1);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->textBox_3);
			this->groupBox3->Controls->Add(this->textBox_1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(508, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(620, 503);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Çíà÷åíèå èíòåãðàëà ïðè çíà÷åíèÿõ ïî óìîë÷àíèþ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(490, 40);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 22);
			this->label18->TabIndex = 24;
			this->label18->Text = L"(Click)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(491, 208);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 22);
			this->label17->TabIndex = 23;
			this->label17->Text = L"(Click)";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(495, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 36);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Î÷èñòèòü";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CosX2Y2::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(495, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 43);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Ïîñòðîèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CosX2Y2::button1_Click);
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(309, 341);
			this->chart3->Name = L"chart3";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			this->chart3->Series->Add(series1);
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(175, 122);
			this->chart3->TabIndex = 20;
			this->chart3->Text = L"1 ñïîñîá";
			this->chart3->Click += gcnew System::EventHandler(this, &CosX2Y2::chart3_Click);
			// 
			// textBox_res
			// 
			this->textBox_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_res->Location = System::Drawing::Point(58, 428);
			this->textBox_res->Name = L"textBox_res";
			this->textBox_res->Size = System::Drawing::Size(197, 34);
			this->textBox_res->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(8, 341);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(267, 27);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Çíà÷åíèå ïðè ââåäåííûõ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(8, 379);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 27);
			this->label16->TabIndex = 16;
			this->label16->Text = L"ïàðàìåòðàõ:";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(309, 187);
			this->chart2->Name = L"chart2";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->Name = L"Series2";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(175, 122);
			this->chart2->TabIndex = 19;
			this->chart2->Text = L"1 ñïîñîá";
			this->chart2->Click += gcnew System::EventHandler(this, &CosX2Y2::chart2_Click);
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(309, 37);
			this->chart1->Name = L"chart1";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->Legend = L"Legend1";
			series6->Name = L"Series2";
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(175, 122);
			this->chart1->TabIndex = 18;
			this->chart1->Text = L"1 ñïîñîá";
			this->chart1->Click += gcnew System::EventHandler(this, &CosX2Y2::chart1_Click);
			// 
			// checkBox_2
			// 
			this->checkBox_2->AutoSize = true;
			this->checkBox_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_2->Location = System::Drawing::Point(28, 254);
			this->checkBox_2->Name = L"checkBox_2";
			this->checkBox_2->Size = System::Drawing::Size(18, 17);
			this->checkBox_2->TabIndex = 17;
			this->checkBox_2->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(25, 76);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(216, 27);
			this->label14->TabIndex = 13;
			this->label14->Text = L"1 ñïîñîá (çíà÷åíèå)";
			// 
			// checkBox_1
			// 
			this->checkBox_1->AutoSize = true;
			this->checkBox_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_1->Location = System::Drawing::Point(30, 123);
			this->checkBox_1->Name = L"checkBox_1";
			this->checkBox_1->Size = System::Drawing::Size(18, 17);
			this->checkBox_1->TabIndex = 16;
			this->checkBox_1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(25, 199);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(216, 27);
			this->label13->TabIndex = 12;
			this->label13->Text = L"2 ñïîñîá (çíà÷åíèå)";
			// 
			// textBox_3
			// 
			this->textBox_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_3->Location = System::Drawing::Point(63, 244);
			this->textBox_3->Name = L"textBox_3";
			this->textBox_3->Size = System::Drawing::Size(192, 34);
			this->textBox_3->TabIndex = 11;
			// 
			// textBox_1
			// 
			this->textBox_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_1->Location = System::Drawing::Point(63, 113);
			this->textBox_1->Name = L"textBox_1";
			this->textBox_1->Size = System::Drawing::Size(194, 34);
			this->textBox_1->TabIndex = 10;
			// 
			// CosX2Y2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1128, 547);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::MenuText;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CosX2Y2";
			this->Text = L"3 Âàðèàíò: f(x,y) = cos(x^2+y^2)";
			this->Load += gcnew System::EventHandler(this, &CosX2Y2::CosX2Y2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void âû÷èñëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîÓìîë÷àíèþ1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CosX2Y2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void î÷èñòèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
