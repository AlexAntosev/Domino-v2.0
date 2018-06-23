#include "Field.h"
#include "FieldElement.h"

namespace Kursova_robota_antosev_ip71
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Field field;
	Domino * current;
	bool DominoIsSelected = false;
	bool isClicked = false;
	int dx = 0, dy = 0;
	double time = 0;

	public ref class MainWindow : public System::Windows::Forms::Form
	{		
	public:
		MainWindow(void);
	protected:
		~MainWindow();
	private:
#pragma region Initialize Window Elements
	array<PictureBox^>^ sprites = gcnew array<PictureBox^>(15);
	Color defaultCellColor;
	PictureBox^  pbField;
	PictureBox^  pb1;
	PictureBox^  pb2;
	PictureBox^  pb3;
	PictureBox^  pb4;
	PictureBox^  pb5;
	PictureBox^  pb6;
	PictureBox^  pb7;
	PictureBox^  pb8;
	PictureBox^  pb9;
	PictureBox^  pb10;
	PictureBox^  pb11;
	PictureBox^  pb12;
	PictureBox^  pb13;
	PictureBox^  pb14;
	PictureBox^  pb15;
	ToolStrip^  toolStrip1;
	ToolStripDropDownButton^  toolStripDropDownButton1;
	ToolStripMenuItem^  tsmiNewGame;
	ToolStripMenuItem^  tsmiField1;
	ToolStripMenuItem^  tsmiField2;
	ToolStripMenuItem^  tsmiField3;
	ToolStripSeparator^  toolStripSeparator1;
	ToolStripMenuItem^  tsmiClose;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiLeaders;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::GroupBox^  gbLeaders;
	private: System::Windows::Forms::ListBox^  lbLeaders;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  gbFinalMessageBox;
	private: System::Windows::Forms::TextBox^  tbName;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lbTime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Button^  btnOk1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiAboutGame;
	private: System::Windows::Forms::GroupBox^  gbAboutGame;
	private: System::Windows::Forms::Button^  btnOk3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tbTask;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbTimer;
	private: System::Windows::Forms::Label^  lblTimer;





	private: System::ComponentModel::IContainer^  components;
#pragma endregion
#pragma region Windows Form Designer generated code
	void InitializeComponent(void);
#pragma endregion	
#pragma region Drag and Drop
	void MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e); // ������� ��� ������� �� ������
	void MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);// ������� ��� ���������� �� ������
	void MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);// ������� ��� ����������� �� ������
	void MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);// ������� ��� ������� ������� �� ������
#pragma endregion
#pragma region Domino Events
	void SetDomino(FieldElement & element, int i, int j, int value); // ���������� �������� ��� ������
	void SetEmpty(FieldElement & element, int i, int j);// ���������� �������� ��� ������ �������
	void DisableElementsAroundDomino(int i, int j); // ���������� ��������� ������ ������
	void EnableElementsAroundDomino(int i, int j); // ������������� ��������� ������ ������
#pragma endregion	
#pragma region Menu
	void tsmiField1_Click(System::Object^  sender, System::EventArgs^  e);// ����� ���� �� ���� 1
	void tsmiField2_Click(System::Object^  sender, System::EventArgs^  e);// ����� ���� �� ���� 2
	void tsmiField3_Click(System::Object^  sender, System::EventArgs^  e); // ����� ���� �� ���� 3
	void tsmiLeadersTable_Click(System::Object^  sender, System::EventArgs^  e); // ������� ������� �������
	void tsmiClose_Click(System::Object^  sender, System::EventArgs^  e); // ����� �� ��������
	void btnOK_Click(System::Object^  sender, System::EventArgs^  e); // �������� ���������� ����
	void btnOk1_Click(System::Object^  sender, System::EventArgs^  e); // �������� ������� �������
	void tsmiAboutGame_Click(System::Object^  sender, System::EventArgs^  e); //�� ����
	void btnOk3_Click(System::Object^  sender, System::EventArgs^  e);
#pragma endregion
#pragma region Properties
	void MainWindow_Load(System::Object^  sender, System::EventArgs^  e); // �������� ������� ����
	void ClearField(); // �������� ����
	void AssignStartCoordForSprites(); // ������ ��������� ���������� ��� ������
	void MakeSprites(); // ���������� ������ ������
	void timer_Tick(System::Object^  sender, System::EventArgs^  e); //������� �������
	bool IndexesAraValid(int i, int j); //�������� �������� ������ �� ����� �� ������� �������
	void AddNameToChampionsTable(String ^name, int time); // ���������� ����� � ������� ������ � ������� �������
	void LoadLeadersFile();// �������� ������� �������
	void ResetTimer(); //������������� ������
#pragma endregion
#pragma region Final Scaning
	void FinalScan(); // ��������� ��������
	bool SumsAreValid(); // �������� �� ���������� ���� ������ � ������
	bool DominoAreUnique(); // �������� �� ������������ ������ � ���� � �������
#pragma endregion			
	 
	};
}
