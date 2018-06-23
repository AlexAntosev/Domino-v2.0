#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Kursova_robota_antosev_ip71;

[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kursova_robota_antosev_ip71::MainWindow form;
	Application::Run(%form);
}
MainWindow::MainWindow(void)
{
	InitializeComponent();
}
MainWindow::~MainWindow()
{
	if (components)
	{
		delete components;
	}
}
#pragma region Initialize Components
void MainWindow::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
	this->pbField = (gcnew System::Windows::Forms::PictureBox());
	this->pb1 = (gcnew System::Windows::Forms::PictureBox());
	this->pb2 = (gcnew System::Windows::Forms::PictureBox());
	this->pb3 = (gcnew System::Windows::Forms::PictureBox());
	this->pb4 = (gcnew System::Windows::Forms::PictureBox());
	this->pb5 = (gcnew System::Windows::Forms::PictureBox());
	this->pb6 = (gcnew System::Windows::Forms::PictureBox());
	this->pb7 = (gcnew System::Windows::Forms::PictureBox());
	this->pb8 = (gcnew System::Windows::Forms::PictureBox());
	this->pb9 = (gcnew System::Windows::Forms::PictureBox());
	this->pb10 = (gcnew System::Windows::Forms::PictureBox());
	this->pb11 = (gcnew System::Windows::Forms::PictureBox());
	this->pb12 = (gcnew System::Windows::Forms::PictureBox());
	this->pb13 = (gcnew System::Windows::Forms::PictureBox());
	this->pb14 = (gcnew System::Windows::Forms::PictureBox());
	this->pb15 = (gcnew System::Windows::Forms::PictureBox());
	this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
	this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
	this->tsmiNewGame = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->tsmiField1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->tsmiField2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->tsmiField3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
	this->tsmiLeaders = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
	this->tsmiClose = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
	this->tsmiAboutGame = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->gbLeaders = (gcnew System::Windows::Forms::GroupBox());
	this->btnOk1 = (gcnew System::Windows::Forms::Button());
	this->lbLeaders = (gcnew System::Windows::Forms::ListBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->gbFinalMessageBox = (gcnew System::Windows::Forms::GroupBox());
	this->tbName = (gcnew System::Windows::Forms::TextBox());
	this->btnOK = (gcnew System::Windows::Forms::Button());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->lbTime = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->timer = (gcnew System::Windows::Forms::Timer(this->components));
	this->gbAboutGame = (gcnew System::Windows::Forms::GroupBox());
	this->btnOk3 = (gcnew System::Windows::Forms::Button());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->tbTask = (gcnew System::Windows::Forms::TextBox());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->tbTimer = (gcnew System::Windows::Forms::TextBox());
	this->lblTimer = (gcnew System::Windows::Forms::Label());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbField))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb2))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb3))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb4))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb5))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb6))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb7))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb8))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb9))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb10))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb11))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb12))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb13))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb14))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb15))->BeginInit();
	this->toolStrip1->SuspendLayout();
	this->gbLeaders->SuspendLayout();
	this->gbFinalMessageBox->SuspendLayout();
	this->gbAboutGame->SuspendLayout();
	this->SuspendLayout();
	// 
	// pbField
	// 
	this->pbField->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbField.Image")));
	this->pbField->Location = System::Drawing::Point(69, 35);
	this->pbField->Margin = System::Windows::Forms::Padding(2);
	this->pbField->Name = L"pbField";
	this->pbField->Size = System::Drawing::Size(900, 900);
	this->pbField->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	this->pbField->TabIndex = 20;
	this->pbField->TabStop = false;
	// 
	// pb1
	// 
	this->pb1->Enabled = false;
	this->pb1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb1.Image")));
	this->pb1->Location = System::Drawing::Point(1025, 51);
	this->pb1->Margin = System::Windows::Forms::Padding(2);
	this->pb1->Name = L"pb1";
	this->pb1->Size = System::Drawing::Size(100, 200);
	this->pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb1->TabIndex = 21;
	this->pb1->TabStop = false;
	this->pb1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb2
	// 
	this->pb2->Enabled = false;
	this->pb2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb2.Image")));
	this->pb2->Location = System::Drawing::Point(1233, 51);
	this->pb2->Margin = System::Windows::Forms::Padding(2);
	this->pb2->Name = L"pb2";
	this->pb2->Size = System::Drawing::Size(100, 200);
	this->pb2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb2->TabIndex = 22;
	this->pb2->TabStop = false;
	this->pb2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb3
	// 
	this->pb3->Enabled = false;
	this->pb3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb3.Image")));
	this->pb3->Location = System::Drawing::Point(1441, 51);
	this->pb3->Margin = System::Windows::Forms::Padding(2);
	this->pb3->Name = L"pb3";
	this->pb3->Size = System::Drawing::Size(100, 200);
	this->pb3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb3->TabIndex = 23;
	this->pb3->TabStop = false;
	this->pb3->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb4
	// 
	this->pb4->Enabled = false;
	this->pb4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb4.Image")));
	this->pb4->Location = System::Drawing::Point(1650, 51);
	this->pb4->Margin = System::Windows::Forms::Padding(2);
	this->pb4->Name = L"pb4";
	this->pb4->Size = System::Drawing::Size(100, 200);
	this->pb4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb4->TabIndex = 24;
	this->pb4->TabStop = false;
	this->pb4->Tag = L"";
	this->pb4->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb5
	// 
	this->pb5->Enabled = false;
	this->pb5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb5.Image")));
	this->pb5->Location = System::Drawing::Point(1025, 255);
	this->pb5->Margin = System::Windows::Forms::Padding(2);
	this->pb5->Name = L"pb5";
	this->pb5->Size = System::Drawing::Size(100, 200);
	this->pb5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb5->TabIndex = 25;
	this->pb5->TabStop = false;
	this->pb5->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb6
	// 
	this->pb6->Enabled = false;
	this->pb6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb6.Image")));
	this->pb6->Location = System::Drawing::Point(1233, 255);
	this->pb6->Margin = System::Windows::Forms::Padding(2);
	this->pb6->Name = L"pb6";
	this->pb6->Size = System::Drawing::Size(100, 200);
	this->pb6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb6->TabIndex = 26;
	this->pb6->TabStop = false;
	this->pb6->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb7
	// 
	this->pb7->Enabled = false;
	this->pb7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb7.Image")));
	this->pb7->Location = System::Drawing::Point(1441, 255);
	this->pb7->Margin = System::Windows::Forms::Padding(2);
	this->pb7->Name = L"pb7";
	this->pb7->Size = System::Drawing::Size(100, 200);
	this->pb7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb7->TabIndex = 27;
	this->pb7->TabStop = false;
	this->pb7->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb8
	// 
	this->pb8->Enabled = false;
	this->pb8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb8.Image")));
	this->pb8->Location = System::Drawing::Point(1650, 255);
	this->pb8->Margin = System::Windows::Forms::Padding(2);
	this->pb8->Name = L"pb8";
	this->pb8->Size = System::Drawing::Size(100, 200);
	this->pb8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb8->TabIndex = 28;
	this->pb8->TabStop = false;
	this->pb8->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb8->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb9
	// 
	this->pb9->Enabled = false;
	this->pb9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb9.Image")));
	this->pb9->Location = System::Drawing::Point(1025, 459);
	this->pb9->Margin = System::Windows::Forms::Padding(2);
	this->pb9->Name = L"pb9";
	this->pb9->Size = System::Drawing::Size(100, 200);
	this->pb9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb9->TabIndex = 29;
	this->pb9->TabStop = false;
	this->pb9->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb9->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb9->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb10
	// 
	this->pb10->Enabled = false;
	this->pb10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb10.Image")));
	this->pb10->Location = System::Drawing::Point(1233, 459);
	this->pb10->Margin = System::Windows::Forms::Padding(2);
	this->pb10->Name = L"pb10";
	this->pb10->Size = System::Drawing::Size(100, 200);
	this->pb10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb10->TabIndex = 30;
	this->pb10->TabStop = false;
	this->pb10->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb10->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb11
	// 
	this->pb11->Enabled = false;
	this->pb11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb11.Image")));
	this->pb11->Location = System::Drawing::Point(1442, 459);
	this->pb11->Margin = System::Windows::Forms::Padding(2);
	this->pb11->Name = L"pb11";
	this->pb11->Size = System::Drawing::Size(100, 200);
	this->pb11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb11->TabIndex = 31;
	this->pb11->TabStop = false;
	this->pb11->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb11->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb11->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb12
	// 
	this->pb12->Enabled = false;
	this->pb12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb12.Image")));
	this->pb12->Location = System::Drawing::Point(1650, 459);
	this->pb12->Margin = System::Windows::Forms::Padding(2);
	this->pb12->Name = L"pb12";
	this->pb12->Size = System::Drawing::Size(100, 200);
	this->pb12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb12->TabIndex = 32;
	this->pb12->TabStop = false;
	this->pb12->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb12->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb12->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb13
	// 
	this->pb13->Enabled = false;
	this->pb13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb13.Image")));
	this->pb13->Location = System::Drawing::Point(1025, 663);
	this->pb13->Margin = System::Windows::Forms::Padding(2);
	this->pb13->Name = L"pb13";
	this->pb13->Size = System::Drawing::Size(100, 200);
	this->pb13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb13->TabIndex = 33;
	this->pb13->TabStop = false;
	this->pb13->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb13->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb13->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb14
	// 
	this->pb14->Enabled = false;
	this->pb14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb14.Image")));
	this->pb14->Location = System::Drawing::Point(1233, 663);
	this->pb14->Margin = System::Windows::Forms::Padding(2);
	this->pb14->Name = L"pb14";
	this->pb14->Size = System::Drawing::Size(100, 200);
	this->pb14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb14->TabIndex = 34;
	this->pb14->TabStop = false;
	this->pb14->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb14->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb14->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// pb15
	// 
	this->pb15->Enabled = false;
	this->pb15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb15.Image")));
	this->pb15->Location = System::Drawing::Point(1441, 663);
	this->pb15->Margin = System::Windows::Forms::Padding(2);
	this->pb15->Name = L"pb15";
	this->pb15->Size = System::Drawing::Size(100, 200);
	this->pb15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pb15->TabIndex = 35;
	this->pb15->TabStop = false;
	this->pb15->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDoubleClick);
	this->pb15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseDown);
	this->pb15->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseMove);
	this->pb15->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MouseUp);
	// 
	// toolStrip1
	// 
	this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
		this->toolStripDropDownButton1,
			this->toolStripDropDownButton2
	});
	this->toolStrip1->Location = System::Drawing::Point(0, 0);
	this->toolStrip1->Name = L"toolStrip1";
	this->toolStrip1->Size = System::Drawing::Size(1904, 25);
	this->toolStrip1->TabIndex = 38;
	this->toolStrip1->Text = L"toolStrip1";
	// 
	// toolStripDropDownButton1
	// 
	this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
	this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
		this->tsmiNewGame,
			this->toolStripSeparator1, this->tsmiLeaders, this->toolStripSeparator2, this->tsmiClose
	});
	this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
	this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
	this->toolStripDropDownButton1->Size = System::Drawing::Size(47, 22);
	this->toolStripDropDownButton1->Text = L"Игра";
	// 
	// tsmiNewGame
	// 
	this->tsmiNewGame->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
		this->tsmiField1,
			this->tsmiField2, this->tsmiField3
	});
	this->tsmiNewGame->Name = L"tsmiNewGame";
	this->tsmiNewGame->Size = System::Drawing::Size(170, 22);
	this->tsmiNewGame->Text = L"Новая игра";
	// 
	// tsmiField1
	// 
	this->tsmiField1->Name = L"tsmiField1";
	this->tsmiField1->Size = System::Drawing::Size(112, 22);
	this->tsmiField1->Text = L"Поле 1";
	this->tsmiField1->Click += gcnew System::EventHandler(this, &MainWindow::tsmiField1_Click);
	// 
	// tsmiField2
	// 
	this->tsmiField2->Name = L"tsmiField2";
	this->tsmiField2->Size = System::Drawing::Size(112, 22);
	this->tsmiField2->Text = L"Поле 2";
	this->tsmiField2->Click += gcnew System::EventHandler(this, &MainWindow::tsmiField2_Click);
	// 
	// tsmiField3
	// 
	this->tsmiField3->Name = L"tsmiField3";
	this->tsmiField3->Size = System::Drawing::Size(112, 22);
	this->tsmiField3->Text = L"Поле 3";
	this->tsmiField3->Click += gcnew System::EventHandler(this, &MainWindow::tsmiField3_Click);
	// 
	// toolStripSeparator1
	// 
	this->toolStripSeparator1->Name = L"toolStripSeparator1";
	this->toolStripSeparator1->Size = System::Drawing::Size(167, 6);
	// 
	// tsmiLeaders
	// 
	this->tsmiLeaders->Name = L"tsmiLeaders";
	this->tsmiLeaders->Size = System::Drawing::Size(170, 22);
	this->tsmiLeaders->Text = L"Таблица лидеров";
	this->tsmiLeaders->Click += gcnew System::EventHandler(this, &MainWindow::tsmiLeadersTable_Click);
	// 
	// toolStripSeparator2
	// 
	this->toolStripSeparator2->Name = L"toolStripSeparator2";
	this->toolStripSeparator2->Size = System::Drawing::Size(167, 6);
	// 
	// tsmiClose
	// 
	this->tsmiClose->Name = L"tsmiClose";
	this->tsmiClose->Size = System::Drawing::Size(170, 22);
	this->tsmiClose->Text = L"Выход";
	this->tsmiClose->Click += gcnew System::EventHandler(this, &MainWindow::tsmiClose_Click);
	// 
	// toolStripDropDownButton2
	// 
	this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
	this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiAboutGame });
	this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
	this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
	this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
	this->toolStripDropDownButton2->Size = System::Drawing::Size(86, 22);
	this->toolStripDropDownButton2->Text = L"Инструкция";
	// 
	// tsmiAboutGame
	// 
	this->tsmiAboutGame->Name = L"tsmiAboutGame";
	this->tsmiAboutGame->Size = System::Drawing::Size(118, 22);
	this->tsmiAboutGame->Text = L"Об игре";
	this->tsmiAboutGame->Click += gcnew System::EventHandler(this, &MainWindow::tsmiAboutGame_Click);
	// 
	// gbLeaders
	// 
	this->gbLeaders->Controls->Add(this->btnOk1);
	this->gbLeaders->Controls->Add(this->lbLeaders);
	this->gbLeaders->Controls->Add(this->label1);
	this->gbLeaders->Location = System::Drawing::Point(281, 171);
	this->gbLeaders->Name = L"gbLeaders";
	this->gbLeaders->Size = System::Drawing::Size(455, 360);
	this->gbLeaders->TabIndex = 39;
	this->gbLeaders->TabStop = false;
	this->gbLeaders->Visible = false;
	// 
	// btnOk1
	// 
	this->btnOk1->Location = System::Drawing::Point(153, 321);
	this->btnOk1->Name = L"btnOk1";
	this->btnOk1->Size = System::Drawing::Size(140, 27);
	this->btnOk1->TabIndex = 2;
	this->btnOk1->Text = L"OK";
	this->btnOk1->UseVisualStyleBackColor = true;
	this->btnOk1->Click += gcnew System::EventHandler(this, &MainWindow::btnOk1_Click);
	// 
	// lbLeaders
	// 
	this->lbLeaders->Enabled = false;
	this->lbLeaders->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->lbLeaders->FormattingEnabled = true;
	this->lbLeaders->ItemHeight = 25;
	this->lbLeaders->Location = System::Drawing::Point(32, 69);
	this->lbLeaders->Name = L"lbLeaders";
	this->lbLeaders->Size = System::Drawing::Size(386, 229);
	this->lbLeaders->TabIndex = 1;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->Location = System::Drawing::Point(107, 16);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(285, 39);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Таблица лидеров";
	// 
	// gbFinalMessageBox
	// 
	this->gbFinalMessageBox->Controls->Add(this->tbName);
	this->gbFinalMessageBox->Controls->Add(this->btnOK);
	this->gbFinalMessageBox->Controls->Add(this->label5);
	this->gbFinalMessageBox->Controls->Add(this->lbTime);
	this->gbFinalMessageBox->Controls->Add(this->label3);
	this->gbFinalMessageBox->Controls->Add(this->label2);
	this->gbFinalMessageBox->Enabled = false;
	this->gbFinalMessageBox->Location = System::Drawing::Point(132, 240);
	this->gbFinalMessageBox->Name = L"gbFinalMessageBox";
	this->gbFinalMessageBox->Size = System::Drawing::Size(372, 306);
	this->gbFinalMessageBox->TabIndex = 40;
	this->gbFinalMessageBox->TabStop = false;
	this->gbFinalMessageBox->Visible = false;
	// 
	// tbName
	// 
	this->tbName->Location = System::Drawing::Point(62, 182);
	this->tbName->Name = L"tbName";
	this->tbName->Size = System::Drawing::Size(259, 20);
	this->tbName->TabIndex = 5;
	// 
	// btnOK
	// 
	this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->btnOK->Location = System::Drawing::Point(142, 262);
	this->btnOK->Name = L"btnOK";
	this->btnOK->Size = System::Drawing::Size(90, 29);
	this->btnOK->TabIndex = 4;
	this->btnOK->Text = L"ОК";
	this->btnOK->UseVisualStyleBackColor = true;
	this->btnOK->Click += gcnew System::EventHandler(this, &MainWindow::btnOK_Click);
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label5->Location = System::Drawing::Point(61, 131);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(243, 32);
	this->label5->TabIndex = 3;
	this->label5->Text = L"Введите свое имя";
	// 
	// lbTime
	// 
	this->lbTime->AutoSize = true;
	this->lbTime->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->lbTime->Location = System::Drawing::Point(238, 78);
	this->lbTime->Name = L"lbTime";
	this->lbTime->Size = System::Drawing::Size(27, 29);
	this->lbTime->TabIndex = 2;
	this->lbTime->Text = L"0";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Location = System::Drawing::Point(62, 78);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(170, 29);
	this->label3->TabIndex = 1;
	this->label3->Text = L"Ваше время :";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Location = System::Drawing::Point(60, 16);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(262, 39);
	this->label2->TabIndex = 0;
	this->label2->Text = L"Вы выиграли!!!";
	// 
	// timer
	// 
	this->timer->Enabled = true;
	this->timer->Tick += gcnew System::EventHandler(this, &MainWindow::timer_Tick);
	// 
	// gbAboutGame
	// 
	this->gbAboutGame->Controls->Add(this->btnOk3);
	this->gbAboutGame->Controls->Add(this->textBox2);
	this->gbAboutGame->Controls->Add(this->textBox1);
	this->gbAboutGame->Controls->Add(this->gbFinalMessageBox);
	this->gbAboutGame->Controls->Add(this->label6);
	this->gbAboutGame->Controls->Add(this->tbTask);
	this->gbAboutGame->Controls->Add(this->label4);
	this->gbAboutGame->Location = System::Drawing::Point(215, 0);
	this->gbAboutGame->Name = L"gbAboutGame";
	this->gbAboutGame->Size = System::Drawing::Size(805, 322);
	this->gbAboutGame->TabIndex = 41;
	this->gbAboutGame->TabStop = false;
	this->gbAboutGame->Visible = false;
	// 
	// btnOk3
	// 
	this->btnOk3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->btnOk3->Location = System::Drawing::Point(555, 266);
	this->btnOk3->Name = L"btnOk3";
	this->btnOk3->Size = System::Drawing::Size(90, 29);
	this->btnOk3->TabIndex = 6;
	this->btnOk3->Text = L"ОК";
	this->btnOk3->UseVisualStyleBackColor = true;
	this->btnOk3->Click += gcnew System::EventHandler(this, &MainWindow::btnOk3_Click);
	// 
	// textBox2
	// 
	this->textBox2->Enabled = false;
	this->textBox2->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textBox2->Location = System::Drawing::Point(423, 176);
	this->textBox2->Multiline = true;
	this->textBox2->Name = L"textBox2";
	this->textBox2->ReadOnly = true;
	this->textBox2->Size = System::Drawing::Size(354, 73);
	this->textBox2->TabIndex = 4;
	this->textBox2->Text = L"2. Что бы перевернуть домино нажмите на нее два раза подряд пока она не находитьс"
		L"я на поле";
	// 
	// textBox1
	// 
	this->textBox1->Enabled = false;
	this->textBox1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textBox1->Location = System::Drawing::Point(423, 82);
	this->textBox1->Multiline = true;
	this->textBox1->Name = L"textBox1";
	this->textBox1->ReadOnly = true;
	this->textBox1->Size = System::Drawing::Size(354, 73);
	this->textBox1->TabIndex = 3;
	this->textBox1->Text = L"1. Что бы перетащить домино нажмите на него и не отпуская клавишу перетащите ее к"
		L"уда хотите";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label6->Location = System::Drawing::Point(512, 16);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(192, 39);
	this->label6->TabIndex = 2;
	this->label6->Text = L"Как играть";
	// 
	// tbTask
	// 
	this->tbTask->Enabled = false;
	this->tbTask->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->tbTask->Location = System::Drawing::Point(37, 82);
	this->tbTask->Multiline = true;
	this->tbTask->Name = L"tbTask";
	this->tbTask->ReadOnly = true;
	this->tbTask->Size = System::Drawing::Size(353, 213);
	this->tbTask->TabIndex = 1;
	this->tbTask->Text = resources->GetString(L"tbTask.Text");
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label4->Location = System::Drawing::Point(93, 16);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(229, 39);
	this->label4->TabIndex = 0;
	this->label4->Text = L"Ваша задача";
	// 
	// tbTimer
	// 
	this->tbTimer->BorderStyle = System::Windows::Forms::BorderStyle::None;
	this->tbTimer->Enabled = false;
	this->tbTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->tbTimer->Location = System::Drawing::Point(1691, 916);
	this->tbTimer->Name = L"tbTimer";
	this->tbTimer->ReadOnly = true;
	this->tbTimer->Size = System::Drawing::Size(31, 19);
	this->tbTimer->TabIndex = 42;
	this->tbTimer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	// 
	// lblTimer
	// 
	this->lblTimer->AutoSize = true;
	this->lblTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->lblTimer->Location = System::Drawing::Point(1627, 913);
	this->lblTimer->Name = L"lblTimer";
	this->lblTimer->Size = System::Drawing::Size(68, 20);
	this->lblTimer->TabIndex = 43;
	this->lblTimer->Text = L"Время:";
	// 
	// MainWindow
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::Control;
	this->ClientSize = System::Drawing::Size(1904, 1041);
	this->Controls->Add(this->lblTimer);
	this->Controls->Add(this->tbTimer);
	this->Controls->Add(this->gbAboutGame);
	this->Controls->Add(this->gbLeaders);
	this->Controls->Add(this->toolStrip1);
	this->Controls->Add(this->pb15);
	this->Controls->Add(this->pb14);
	this->Controls->Add(this->pb13);
	this->Controls->Add(this->pb12);
	this->Controls->Add(this->pb11);
	this->Controls->Add(this->pb10);
	this->Controls->Add(this->pb9);
	this->Controls->Add(this->pb8);
	this->Controls->Add(this->pb7);
	this->Controls->Add(this->pb6);
	this->Controls->Add(this->pb5);
	this->Controls->Add(this->pb4);
	this->Controls->Add(this->pb3);
	this->Controls->Add(this->pb2);
	this->Controls->Add(this->pb1);
	this->Controls->Add(this->pbField);
	this->Margin = System::Windows::Forms::Padding(2);
	this->Name = L"MainWindow";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Domino";
	this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
	this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbField))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb2))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb3))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb4))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb5))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb6))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb7))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb8))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb9))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb10))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb11))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb12))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb13))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb14))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb15))->EndInit();
	this->toolStrip1->ResumeLayout(false);
	this->toolStrip1->PerformLayout();
	this->gbLeaders->ResumeLayout(false);
	this->gbLeaders->PerformLayout();
	this->gbFinalMessageBox->ResumeLayout(false);
	this->gbFinalMessageBox->PerformLayout();
	this->gbAboutGame->ResumeLayout(false);
	this->gbAboutGame->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}
#pragma endregion

#pragma region Drag and Drop
void MainWindow::MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) // при нажатии на домино
{
	PictureBox^ pb = (PictureBox^)sender;
	for (int i = 0; i < 15; i++)
	{
		if (pb == sprites[i])
		{
			current = &field.dominoes[i]; // достаем выбраные екземпляр домино с масива
		}
	}
	current->prevCoordX = pb->Left; // запоминаем ее текущие координаты 
	current->prevCoordY = pb->Top;
	current->previ = current->i;
	current->prevj = current->j;
	isClicked = true;
	dx = e->X;
	dy = e->Y;
	if (current->onTable == true) // если домино было на столе то делаем елементы матрицы пустыми
	{
		SetEmpty(field.matrix[current->i][current->j], current->i, current->j);
		SetEmpty(field.matrix[current->ii][current->jj], current->ii, current->jj);
	}
}
void MainWindow::MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) // при отпускании клавиши мыши 
{
	PictureBox^ pb = (PictureBox^)sender;
	isClicked = false;
	if (Cursor->Position.X > pbField->Left && Cursor->Position.X < pbField->Left + pbField->Width && Cursor->Position.Y > pbField->Top && Cursor->Position.Y < pbField->Top + pbField->Height) // если домино в пределах поля
	{
		int i = (Cursor->Position.Y - pbField->Top) / 100;
		int j = (Cursor->Position.X - pbField->Left) / 100;
		current->SetPosition(i, j); // задаем индексы в матрице
		if (IndexesAraValid(current->ii, current->jj) && field.matrix[current->i][current->j].access && field.matrix[current->ii][current->jj].access) // если индексы в пределах матрицы и елементы пустые
		{
			current->onTable = true; // устанавливаем домино на поле
			int ostX = (Cursor->Position.X - pbField->Left) % 100;
			int ostY = (Cursor->Position.Y - pbField->Top) % 100;
			SetDomino(field.matrix[current->i][current->j], current->i, current->j, current->x);
			SetDomino(field.matrix[current->ii][current->jj], current->ii, current->jj, current->y);
			pb->Left -= ostX;
			pb->Left += e->X;
			pb->Top -= ostY;
			pb->Top += e->Y + 25;
		}
		else // если не получилось поставить домино возвращаем ее в предыдущую позицию
		{
			if (current->prevCoordX == current->startCoordX)	current->onTable = false;
			else current->onTable = true;
			pb->Left = current->prevCoordX;
			pb->Top = current->prevCoordY;
			current->SetPosition(current->previ, current->prevj);
			
		}
		FinalScan(); // финальная проверка
	}
	else // если домино за границами поля то устанавливаем ее на стартовую позицию
	{
		current->onTable = false;
		pb->Left = current->startCoordX;
		pb->Top = current->startCoordY;
	}
}
void MainWindow::MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) // при перемещении мыши
{
	if (isClicked) // если домино выбрано то перемещаем его за курсором
	{
		PictureBox^ pb = (PictureBox^)sender;
		pb->BringToFront();
		pb->Left = Cursor->Position.X - dx;
		pb->Top = Cursor->Position.Y - dy;
	}
}
void MainWindow::MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) // при двойном нажатии на домино
{
	PictureBox^ pb = (PictureBox^)sender;
	if (!current->onTable) // если  домино на стартовой позиции то поварачиваем его горизонтально(вертикально)
	{
		int temp = pb->Height;
		pb->Height = pb->Width;
		pb->Width = temp;
		current->ChangeAligment();
		pb->Image->RotateFlip(RotateFlipType::Rotate270FlipNone);
	}
}
#pragma endregion

#pragma region Domino Events

void MainWindow::SetDomino(FieldElement & element, int i, int j, int value) // установить елемент на поле как домино
{
	element.SetElementAsDomino(value);
	DisableElementsAroundDomino(i, j);
}

void MainWindow::SetEmpty(FieldElement & element, int i, int j) // установить елемент на поле как пустой елемент
{
	element.SetElementAsEmptyElement();
	EnableElementsAroundDomino(i, j);
}

void MainWindow::DisableElementsAroundDomino(int i, int j) // заблокировать пустые елементы вокруг домино
{
	for (int a = i - 1; a <= i + 1; a++)
	{
		for (int b = j - 1; b <= j + 1; b++)
		{
			if (a == i && b == j || a >= 9 || b >= 9 || a < 0 || b < 0) continue;
			if (field.matrix[a][b].type == FieldElement::Empty)
			{
				field.matrix[a][b].access = false;
			}
		}
	}
}

void MainWindow::EnableElementsAroundDomino(int i, int j) // разблокировать пустые елементы вокруг домино
{
	for (int a = i - 1; a <= i + 1; a++)
	{
		for (int b = j - 1; b <= j + 1; b++)
		{
			if (a == i && b == j || a >= 9 || b >= 9 || a < 0 || b < 0) continue;
			if (field.matrix[a][b].type == FieldElement::Empty)
			{
				field.matrix[a][b].access = true;
			}
		}
	}
	for (int p = 0; p < 9; p++)
	{
		for (int q = 0; q < 9; q++)
		{
			if (field.matrix[p][q].type == FieldElement::Domino)
			{
				DisableElementsAroundDomino(p, q);
			}
		}
	}
}

#pragma endregion	

#pragma region Final Field Scaning

void MainWindow::FinalScan() // проверка на совпадение суми чисел по условию задачи и уникальность домино в каждом ряду и столбце
{
	if (SumsAreValid() && DominoAreUnique())
	{
		timer->Stop();
		gbFinalMessageBox->Enabled = true;
		gbFinalMessageBox->Visible = true;
		lbTime->Text = time.ToString();		
	}
}

bool MainWindow::SumsAreValid() // для каждого числа находит и сравнивает суму домино вокруг
{
	for (int i = 0; i < field.SIZE; i++)
	{
		for (int j = 0; j < field.SIZE; j++)
		{
			int sum = 0;
			int val = 0;
			if (field.matrix[i][j].type == FieldElement::Number)
			{
				val = field.matrix[i][j].value;
				for (int a = i - 1; a <= i + 1; a++)
				{
					for (int b = j - 1; b <= j + 1; b++)
					{
						if (a == i && b == j || a >= 9 || b >= 9 || a < 0 || b < 0) continue;
						if (field.matrix[a][b].type == FieldElement::Domino)
						{
							sum += field.matrix[a][b].value;
						}
					}
				}
				if (sum != val) return false;
			}			
		}
	}
	return true;
}

bool MainWindow::DominoAreUnique() // сравнение домино между собой в ряду и столбце
{
	for (int i = 0; i < field.SIZE; i++)
	{
		for (int j = 0; j < field.SIZE; j++)
		{
			if (field.matrix[i][j].type == FieldElement::Domino)
			{
				for (int row = 0; row < 9; row++)
				{
					if (field.matrix[row][j].type == FieldElement::Domino && field.matrix[row][j].value == field.matrix[i][j].value && row != i)
					{
						return false;
					}
				}
				for (int col = 0; col < 9; col++)
				{
					if (field.matrix[i][col].type == FieldElement::Domino && field.matrix[i][col].value == field.matrix[i][j].value && col != j)
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

#pragma endregion

#pragma region Menu

void MainWindow::tsmiField1_Click(System::Object^  sender, System::EventArgs^  e) // начало игры на поле 1
{
	ClearField();		
	field.FillMatrixFromFile("Fields/1.txt");
	pbField->Image = gcnew Bitmap("Images/Field/field1.png");
	ResetTimer();
}

void MainWindow::tsmiField2_Click(System::Object^  sender, System::EventArgs^  e) // начало игры на поле 2
{
	ClearField();
	field.FillMatrixFromFile("Fields/2.txt");
	pbField->Image = gcnew Bitmap("Images/Field/field2.png");
	ResetTimer();
}

void MainWindow::tsmiField3_Click(System::Object^  sender, System::EventArgs^  e) // начало игры на поле 3
{
	ClearField();
	field.FillMatrixFromFile("Fields/3.txt");
	pbField->Image = gcnew Bitmap("Images/Field/field3.png");
	ResetTimer();
}

void MainWindow::tsmiLeadersTable_Click(System::Object^  sender, System::EventArgs^  e) // открытие таблицы лидеров
{
	gbLeaders->Visible = true;
	LoadLeadersFile();
	gbLeaders->BringToFront();
}

void MainWindow::btnOk1_Click(System::Object^  sender, System::EventArgs^  e) //закрытие таблицы лидеров
{
	gbLeaders->Visible = false;	
}

void MainWindow::tsmiClose_Click(System::Object^  sender, System::EventArgs^  e) // выходи из программы
{
	Close();
}

void MainWindow::btnOK_Click(System::Object^  sender, System::EventArgs^  e) // закрытие финального окна
{
	AddNameToChampionsTable(tbName->Text, time);
	Close();
}

void MainWindow::tsmiAboutGame_Click(System::Object^  sender, System::EventArgs^  e)
{
	gbAboutGame->Visible = true;
	gbAboutGame->BringToFront();
}

void MainWindow::btnOk3_Click(System::Object^  sender, System::EventArgs^  e)
{
	gbAboutGame->Visible = false;
}

#pragma endregion

#pragma region Properties

	void MainWindow::MainWindow_Load(System::Object^  sender, System::EventArgs^  e)
	{
		MakeSprites();
		AssignStartCoordForSprites();	
		timer->Stop();
	}

	void MainWindow::ClearField() // очистить поле и вернуть домино в стартовые позиции
	{
		for (int i = 0; i < field.SIZE; i++)
		{
			for (int j = 0; j < field.SIZE; j++)
			{
				field.matrix[i][j].SetElementAsEmptyElement();
			}
		}
		for (int i = 0; i < 15; i++)
		{
			sprites[i]->Enabled = true;
			sprites[i]->Left = field.dominoes[i].startCoordX;
			sprites[i]->Top = field.dominoes[i].startCoordY;
		}
	}

	void MainWindow::MakeSprites() // заполнить массив картинок домино 
	{
		sprites[0] = pb1;
		sprites[1] = pb2;
		sprites[2] = pb3;
		sprites[3] = pb4;
		sprites[4] = pb5;
		sprites[5] = pb6;
		sprites[6] = pb7;
		sprites[7] = pb8;
		sprites[8] = pb9;
		sprites[9] = pb10;
		sprites[10] = pb11;
		sprites[11] = pb12;
		sprites[12] = pb13;
		sprites[13] = pb14;
		sprites[14] = pb15;
	}

	void MainWindow::AssignStartCoordForSprites() // задать стартовые координаты для домино
	{
		field.dominoes[0].startCoordX = pb1->Left;
		field.dominoes[0].startCoordY = pb1->Top;
		field.dominoes[1].startCoordX = pb2->Left;
		field.dominoes[1].startCoordY = pb2->Top;
		field.dominoes[2].startCoordX = pb3->Left;
		field.dominoes[2].startCoordY = pb3->Top;
		field.dominoes[3].startCoordX = pb4->Left;
		field.dominoes[3].startCoordY = pb4->Top;
		field.dominoes[4].startCoordX = pb5->Left;
		field.dominoes[4].startCoordY = pb5->Top;
		field.dominoes[5].startCoordX = pb6->Left;
		field.dominoes[5].startCoordY = pb6->Top;
		field.dominoes[6].startCoordX = pb7->Left;
		field.dominoes[6].startCoordY = pb7->Top;
		field.dominoes[7].startCoordX = pb8->Left;
		field.dominoes[7].startCoordY = pb8->Top;
		field.dominoes[8].startCoordX = pb9->Left;
		field.dominoes[8].startCoordY = pb9->Top;
		field.dominoes[9].startCoordX = pb10->Left;
		field.dominoes[9].startCoordY = pb10->Top;
		field.dominoes[10].startCoordX = pb11->Left;
		field.dominoes[10].startCoordY = pb11->Top;
		field.dominoes[11].startCoordX = pb12->Left;
		field.dominoes[11].startCoordY = pb12->Top;
		field.dominoes[12].startCoordX = pb13->Left;
		field.dominoes[12].startCoordY = pb13->Top;
		field.dominoes[13].startCoordX = pb14->Left;
		field.dominoes[13].startCoordY = pb14->Top;
		field.dominoes[14].startCoordX = pb15->Left;
		field.dominoes[14].startCoordY = pb15->Top;
	}

	void MainWindow::timer_Tick(System::Object^  sender, System::EventArgs^  e) // счетчик таймера
	{
		time += 0.1;
		tbTimer->Text = Convert::ToInt32(time).ToString();
	}

	bool MainWindow::IndexesAraValid(int i, int j) // проверка на выход домино за пределы матрицы
	{
		if (i < 9 && j < 9) return true;
		return false;
	}

	void MainWindow::AddNameToChampionsTable(String ^ name, int time) // добавление имени и времени в таблицу лидеров
	{
		FILE *file = fopen("Leaders/table.txt", "a");
		fprintf(file, "%s-----%d\n", name, time);
		fclose(file);
	}

	void MainWindow::LoadLeadersFile() // загрузга файла с информацией о лидерах и добавление ее в саму таблицу 
	{
		FILE *file = fopen("Leaders/table.txt", "r");
		while (!feof(file))
		{
			char name[100];
			fscanf(file, "%s", &name);
			String^ nickname = gcnew String(name);
			lbLeaders->Items->Add(nickname);
		}
		fclose(file);
	}

	void MainWindow::ResetTimer()
	{
		time = 0;
		timer->Start();
	}
	
#pragma endregion


	
	