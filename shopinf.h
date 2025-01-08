#pragma once
#include "UpdateP.h"
#include "UpdateS.h"
#include "login.h" 




namespace miniproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for shopinf
	/// </summary>

	public ref class shopinf : public System::Windows::Forms::Form
	{
		public: 
		void DisableStaffButtons() {
        // Disable the delete and modify buttons
        deleteb->Enabled = false;
        modifyb->Enabled = false;
    }

	public:
		shopinf(void)
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
		~shopinf()
		{
			if (components)
			{
				delete components;
			}
		}
	private:System::Windows::Forms::Label^  labelLoggedInAs; 
	private: System::Data::DataSet^  dataSet1;
	protected: 
	private: System::Data::DataTable^  product;
	private: System::Data::DataColumn^  dataColumn1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::TextBox^  IDtextBox1;
	private: System::Windows::Forms::TextBox^  productNametextBox2;
	private: System::Windows::Forms::TextBox^  QuatitytextBox3;
	private: System::Windows::Forms::Button^  saveb;
	private: System::Windows::Forms::Button^  modifyb;
	private: System::Windows::Forms::Button^  deleteb;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDpDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  productnameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  quantityDataGridViewTextBoxColumn;
	private: System::Data::DataTable^  sales;

	private: System::Data::DataColumn^  dataColumn4;
	private: System::Data::DataColumn^  dataColumn5;
	private: System::Data::DataColumn^  dataColumn6;
	private: System::Data::DataColumn^  dataColumn7;
	private: System::Data::DataColumn^  dataColumn8;
	private: System::Data::DataColumn^  dataColumn9;
	private: System::Data::DataColumn^  dataColumn10;
	private: System::Data::DataColumn^  dataColumn11;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDsDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDpsDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  priceDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  quantitysoldDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  totalamountofsalesexcludingtaxDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vATammoutDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  discountDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  finalpriceDataGridViewTextBoxColumn;
	private: System::Windows::Forms::Button^  save2;
	private: System::Windows::Forms::Button^  modify2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  IDs_textBox;
	private: System::Windows::Forms::TextBox^  IDps_textBox;
	private: System::Windows::Forms::TextBox^  price_textBox;
	private: System::Windows::Forms::TextBox^  quantitysold_textBox;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tax_textBox;
	private: System::Windows::Forms::Button^  delete2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  disconectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vIEWToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Panel^  panel7;


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
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->product = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->sales = (gcnew System::Data::DataTable());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IDtextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->productNametextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->QuatitytextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->saveb = (gcnew System::Windows::Forms::Button());
			this->modifyb = (gcnew System::Windows::Forms::Button());
			this->deleteb = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->iDpDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productnameDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantityDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->iDsDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iDpsDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantitysoldDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalamountofsalesexcludingtaxDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vATammoutDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->finalpriceDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->save2 = (gcnew System::Windows::Forms::Button());
			this->modify2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->IDs_textBox = (gcnew System::Windows::Forms::TextBox());
			this->IDps_textBox = (gcnew System::Windows::Forms::TextBox());
			this->price_textBox = (gcnew System::Windows::Forms::TextBox());
			this->quantitysold_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tax_textBox = (gcnew System::Windows::Forms::TextBox());
			this->delete2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->disconectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vIEWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->product))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(2) {this->product, this->sales});
			// 
			// product
			// 
			this->product->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(3) {this->dataColumn1, this->dataColumn2, 
				this->dataColumn3});
			this->product->TableName = L"product";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"IDp";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"productname";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"quantity";
			// 
			// sales
			// 
			this->sales->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(8) {this->dataColumn4, this->dataColumn5, this->dataColumn6, 
				this->dataColumn7, this->dataColumn8, this->dataColumn9, this->dataColumn10, this->dataColumn11});
			this->sales->TableName = L"sales";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"IDs";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"IDps";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"price";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"quantity_sold";
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"Total_amount_of_sales_excluding_tax";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"VAT_ammout";
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"discount";
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"final_price";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"IDp:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"poduct name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 149);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"quantity in stock :";
			// 
			// IDtextBox1
			// 
			this->IDtextBox1->Location = System::Drawing::Point(164, 28);
			this->IDtextBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->IDtextBox1->Name = L"IDtextBox1";
			this->IDtextBox1->Size = System::Drawing::Size(283, 26);
			this->IDtextBox1->TabIndex = 4;
			// 
			// productNametextBox2
			// 
			this->productNametextBox2->Location = System::Drawing::Point(201, 86);
			this->productNametextBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->productNametextBox2->Name = L"productNametextBox2";
			this->productNametextBox2->Size = System::Drawing::Size(246, 26);
			this->productNametextBox2->TabIndex = 5;
			// 
			// QuatitytextBox3
			// 
			this->QuatitytextBox3->Location = System::Drawing::Point(224, 149);
			this->QuatitytextBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->QuatitytextBox3->Name = L"QuatitytextBox3";
			this->QuatitytextBox3->Size = System::Drawing::Size(223, 26);
			this->QuatitytextBox3->TabIndex = 6;
			// 
			// saveb
			// 
			this->saveb->BackColor = System::Drawing::Color::BlueViolet;
			this->saveb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->saveb->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->saveb->Location = System::Drawing::Point(234, 212);
			this->saveb->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->saveb->Name = L"saveb";
			this->saveb->Size = System::Drawing::Size(161, 60);
			this->saveb->TabIndex = 7;
			this->saveb->Text = L"save";
			this->saveb->UseVisualStyleBackColor = false;
			this->saveb->Click += gcnew System::EventHandler(this, &shopinf::saveb_Click);
			// 
			// modifyb
			// 
			this->modifyb->BackColor = System::Drawing::Color::CornflowerBlue;
			this->modifyb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->modifyb->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->modifyb->Location = System::Drawing::Point(940, 295);
			this->modifyb->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->modifyb->Name = L"modifyb";
			this->modifyb->Size = System::Drawing::Size(162, 62);
			this->modifyb->TabIndex = 8;
			this->modifyb->Text = L"modify";
			this->modifyb->UseVisualStyleBackColor = false;
			this->modifyb->Click += gcnew System::EventHandler(this, &shopinf::modifyb_Click);
			// 
			// deleteb
			// 
			this->deleteb->BackColor = System::Drawing::Color::Crimson;
			this->deleteb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->deleteb->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->deleteb->Location = System::Drawing::Point(1342, 295);
			this->deleteb->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->deleteb->Name = L"deleteb";
			this->deleteb->Size = System::Drawing::Size(156, 62);
			this->deleteb->TabIndex = 9;
			this->deleteb->Text = L"delete";
			this->deleteb->UseVisualStyleBackColor = false;
			this->deleteb->Click += gcnew System::EventHandler(this, &shopinf::deleteb_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->iDpDataGridViewTextBoxColumn, 
				this->productnameDataGridViewTextBoxColumn, this->quantityDataGridViewTextBoxColumn});
			this->dataGridView1->DataSource = this->product;
			this->dataGridView1->Location = System::Drawing::Point(884, 82);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(681, 203);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &shopinf::dataGridView1_CellContentClick_1);
			// 
			// iDpDataGridViewTextBoxColumn
			// 
			this->iDpDataGridViewTextBoxColumn->DataPropertyName = L"IDp";
			this->iDpDataGridViewTextBoxColumn->HeaderText = L"IDp";
			this->iDpDataGridViewTextBoxColumn->Name = L"iDpDataGridViewTextBoxColumn";
			// 
			// productnameDataGridViewTextBoxColumn
			// 
			this->productnameDataGridViewTextBoxColumn->DataPropertyName = L"productname";
			this->productnameDataGridViewTextBoxColumn->HeaderText = L"productname";
			this->productnameDataGridViewTextBoxColumn->Name = L"productnameDataGridViewTextBoxColumn";
			// 
			// quantityDataGridViewTextBoxColumn
			// 
			this->quantityDataGridViewTextBoxColumn->DataPropertyName = L"quantity";
			this->quantityDataGridViewTextBoxColumn->HeaderText = L"quantity";
			this->quantityDataGridViewTextBoxColumn->Name = L"quantityDataGridViewTextBoxColumn";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoGenerateColumns = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->iDsDataGridViewTextBoxColumn, 
				this->iDpsDataGridViewTextBoxColumn, this->priceDataGridViewTextBoxColumn, this->quantitysoldDataGridViewTextBoxColumn, this->totalamountofsalesexcludingtaxDataGridViewTextBoxColumn, 
				this->vATammoutDataGridViewTextBoxColumn, this->discountDataGridViewTextBoxColumn, this->finalpriceDataGridViewTextBoxColumn});
			this->dataGridView2->DataSource = this->sales;
			this->dataGridView2->Location = System::Drawing::Point(91, 468);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(1575, 260);
			this->dataGridView2->TabIndex = 11;
			// 
			// iDsDataGridViewTextBoxColumn
			// 
			this->iDsDataGridViewTextBoxColumn->DataPropertyName = L"IDs";
			this->iDsDataGridViewTextBoxColumn->HeaderText = L"IDs";
			this->iDsDataGridViewTextBoxColumn->Name = L"iDsDataGridViewTextBoxColumn";
			// 
			// iDpsDataGridViewTextBoxColumn
			// 
			this->iDpsDataGridViewTextBoxColumn->DataPropertyName = L"IDps";
			this->iDpsDataGridViewTextBoxColumn->HeaderText = L"IDps";
			this->iDpsDataGridViewTextBoxColumn->Name = L"iDpsDataGridViewTextBoxColumn";
			// 
			// priceDataGridViewTextBoxColumn
			// 
			this->priceDataGridViewTextBoxColumn->DataPropertyName = L"price";
			this->priceDataGridViewTextBoxColumn->HeaderText = L"price";
			this->priceDataGridViewTextBoxColumn->Name = L"priceDataGridViewTextBoxColumn";
			// 
			// quantitysoldDataGridViewTextBoxColumn
			// 
			this->quantitysoldDataGridViewTextBoxColumn->DataPropertyName = L"quantity_sold";
			this->quantitysoldDataGridViewTextBoxColumn->HeaderText = L"quantity_sold";
			this->quantitysoldDataGridViewTextBoxColumn->Name = L"quantitysoldDataGridViewTextBoxColumn";
			// 
			// totalamountofsalesexcludingtaxDataGridViewTextBoxColumn
			// 
			this->totalamountofsalesexcludingtaxDataGridViewTextBoxColumn->DataPropertyName = L"Total_amount_of_sales_excluding_tax";
			this->totalamountofsalesexcludingtaxDataGridViewTextBoxColumn->HeaderText = L"Total_amount_of_sales_excluding_tax";
			this->totalamountofsalesexcludingtaxDataGridViewTextBoxColumn->Name = L"totalamountofsalesexcludingtaxDataGridViewTextBoxColumn";
			// 
			// vATammoutDataGridViewTextBoxColumn
			// 
			this->vATammoutDataGridViewTextBoxColumn->DataPropertyName = L"VAT_ammout";
			this->vATammoutDataGridViewTextBoxColumn->HeaderText = L"VAT_ammout";
			this->vATammoutDataGridViewTextBoxColumn->Name = L"vATammoutDataGridViewTextBoxColumn";
			// 
			// discountDataGridViewTextBoxColumn
			// 
			this->discountDataGridViewTextBoxColumn->DataPropertyName = L"discount";
			this->discountDataGridViewTextBoxColumn->HeaderText = L"discount";
			this->discountDataGridViewTextBoxColumn->Name = L"discountDataGridViewTextBoxColumn";
			// 
			// finalpriceDataGridViewTextBoxColumn
			// 
			this->finalpriceDataGridViewTextBoxColumn->DataPropertyName = L"final_price";
			this->finalpriceDataGridViewTextBoxColumn->HeaderText = L"final_price";
			this->finalpriceDataGridViewTextBoxColumn->Name = L"finalpriceDataGridViewTextBoxColumn";
			// 
			// save2
			// 
			this->save2->BackColor = System::Drawing::Color::BlueViolet;
			this->save2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->save2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->save2->Location = System::Drawing::Point(299, 312);
			this->save2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->save2->Name = L"save2";
			this->save2->Size = System::Drawing::Size(161, 60);
			this->save2->TabIndex = 12;
			this->save2->Text = L"save";
			this->save2->UseVisualStyleBackColor = false;
			this->save2->Click += gcnew System::EventHandler(this, &shopinf::save2_Click);
			// 
			// modify2
			// 
			this->modify2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->modify2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->modify2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->modify2->Location = System::Drawing::Point(357, 738);
			this->modify2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->modify2->Name = L"modify2";
			this->modify2->Size = System::Drawing::Size(162, 60);
			this->modify2->TabIndex = 13;
			this->modify2->Text = L"modify";
			this->modify2->UseVisualStyleBackColor = false;
			this->modify2->Click += gcnew System::EventHandler(this, &shopinf::modify2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 37);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 29);
			this->label4->TabIndex = 15;
			this->label4->Text = L"IDs:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 102);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 29);
			this->label5->TabIndex = 16;
			this->label5->Text = L"IDps:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 158);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 29);
			this->label6->TabIndex = 17;
			this->label6->Text = L"price:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(29, 220);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 29);
			this->label7->TabIndex = 18;
			this->label7->Text = L"quantity sold:";
			// 
			// IDs_textBox
			// 
			this->IDs_textBox->Location = System::Drawing::Point(84, 37);
			this->IDs_textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->IDs_textBox->Name = L"IDs_textBox";
			this->IDs_textBox->Size = System::Drawing::Size(241, 26);
			this->IDs_textBox->TabIndex = 19;
			// 
			// IDps_textBox
			// 
			this->IDps_textBox->Location = System::Drawing::Point(94, 102);
			this->IDps_textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->IDps_textBox->Name = L"IDps_textBox";
			this->IDps_textBox->Size = System::Drawing::Size(241, 26);
			this->IDps_textBox->TabIndex = 20;
			// 
			// price_textBox
			// 
			this->price_textBox->Location = System::Drawing::Point(110, 158);
			this->price_textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->price_textBox->Name = L"price_textBox";
			this->price_textBox->Size = System::Drawing::Size(292, 26);
			this->price_textBox->TabIndex = 21;
			// 
			// quantitysold_textBox
			// 
			this->quantitysold_textBox->Location = System::Drawing::Point(190, 220);
			this->quantitysold_textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->quantitysold_textBox->Name = L"quantitysold_textBox";
			this->quantitysold_textBox->Size = System::Drawing::Size(238, 26);
			this->quantitysold_textBox->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(34, 266);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 29);
			this->label8->TabIndex = 23;
			this->label8->Text = L"tax:";
			// 
			// tax_textBox
			// 
			this->tax_textBox->Location = System::Drawing::Point(94, 266);
			this->tax_textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tax_textBox->Name = L"tax_textBox";
			this->tax_textBox->Size = System::Drawing::Size(148, 26);
			this->tax_textBox->TabIndex = 24;
			// 
			// delete2
			// 
			this->delete2->BackColor = System::Drawing::Color::Crimson;
			this->delete2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->delete2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->delete2->Location = System::Drawing::Point(1198, 738);
			this->delete2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->delete2->Name = L"delete2";
			this->delete2->Size = System::Drawing::Size(162, 60);
			this->delete2->TabIndex = 25;
			this->delete2->Text = L"delete";
			this->delete2->UseVisualStyleBackColor = false;
			this->delete2->Click += gcnew System::EventHandler(this, &shopinf::delete2_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(747, 26);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(406, 64);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Shop Interface";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::GhostWhite;
			this->panel1->Controls->Add(this->saveb);
			this->panel1->Controls->Add(this->QuatitytextBox3);
			this->panel1->Controls->Add(this->productNametextBox2);
			this->panel1->Controls->Add(this->IDtextBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(32, 40);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(632, 291);
			this->panel1->TabIndex = 27;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::GhostWhite;
			this->panel2->Controls->Add(this->tax_textBox);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->save2);
			this->panel2->Controls->Add(this->quantitysold_textBox);
			this->panel2->Controls->Add(this->price_textBox);
			this->panel2->Controls->Add(this->IDps_textBox);
			this->panel2->Controls->Add(this->IDs_textBox);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(91, 39);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(492, 400);
			this->panel2->TabIndex = 28;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->vIEWToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(2179, 35);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->newToolStripMenuItem, 
				this->openToolStripMenuItem, this->saveToolStripMenuItem, this->disconectToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(55, 29);
			this->fileToolStripMenuItem->Text = L"FILE";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(159, 30);
			this->newToolStripMenuItem->Text = L"new";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(159, 30);
			this->openToolStripMenuItem->Text = L"open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(159, 30);
			this->saveToolStripMenuItem->Text = L"save";
			// 
			// disconectToolStripMenuItem
			// 
			this->disconectToolStripMenuItem->Name = L"disconectToolStripMenuItem";
			this->disconectToolStripMenuItem->Size = System::Drawing::Size(159, 30);
			this->disconectToolStripMenuItem->Text = L"disconect";
			this->disconectToolStripMenuItem->Click += gcnew System::EventHandler(this, &shopinf::disconectToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(60, 29);
			this->editToolStripMenuItem->Text = L"EDIT";
			// 
			// vIEWToolStripMenuItem
			// 
			this->vIEWToolStripMenuItem->Name = L"vIEWToolStripMenuItem";
			this->vIEWToolStripMenuItem->Size = System::Drawing::Size(66, 29);
			this->vIEWToolStripMenuItem->Text = L"VIEW";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateBlue;
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->deleteb);
			this->panel3->Controls->Add(this->modifyb);
			this->panel3->Location = System::Drawing::Point(142, 322);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1754, 391);
			this->panel3->TabIndex = 30;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SlateBlue;
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Controls->Add(this->delete2);
			this->panel4->Controls->Add(this->modify2);
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Location = System::Drawing::Point(143, 849);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1753, 835);
			this->panel4->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(3, 11);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(415, 55);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Product inventory";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(2, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(455, 55);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Sales management";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Navy;
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(142, 243);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1754, 84);
			this->panel5->TabIndex = 34;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Navy;
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(142, 762);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1754, 89);
			this->panel6->TabIndex = 35;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Navy;
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(0, 38);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(2246, 123);
			this->panel7->TabIndex = 36;
			// 
			// shopinf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(2179, 1770);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"shopinf";
			this->Text = L"shopinf";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->product))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void ShowLoginForm()
{
    miniproject::login^ loginForm = gcnew miniproject::login();
    if (loginForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
       
        System::String^ loggedInAccount = loginForm->Tag->ToString();
        
        
        labelLoggedInAs->Text = "Logged in as: " + loggedInAccount;
    }
}


private: System::Void shopinf_Load(System::Object^ sender, System::EventArgs^ e)
{
	ShowLoginForm(); }

	
private: System::Void saveb_Click(System::Object^  sender, System::EventArgs^  e) {


				System::String^ IDp=IDtextBox1->Text;
				System::String^ productname =productNametextBox2->Text;
				System::String^ quantity =QuatitytextBox3->Text;
		
				
				if (IDp->Length > 0 && productname->Length > 0 && quantity->Length > 0) 
				{ 
				
				product->Rows->Add(IDp,productname, quantity);
				}
				else {
				
				MessageBox::Show("everything needs to be flled before adding a product.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
		 }
private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void deleteb_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 if (dataGridView1->SelectedRows->Count > 0) {
				 DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			
				 DataTable^ product = static_cast<DataTable^>(dataGridView1->DataSource);
			
				 product->Rows->RemoveAt(selectedRow->Index);
			 
				 dataGridView1->Refresh();
			 }
			 
			 else
			 {
				 MessageBox::Show("Please select a row to delete.", "No Row Selected", 
				 MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }

		 }
private: System::Void save2_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ IDs = IDs_textBox->Text;
    System::String^ IDps = IDps_textBox->Text;
    System::String^ price = price_textBox->Text;
    System::String^ quantity_sold = quantitysold_textBox->Text;
    System::String^ tax = tax_textBox->Text;

    if (IDs->Length > 0 && IDps->Length > 0 && price->Length > 0 && quantity_sold->Length > 0) {
        
        double priceValue;
        int quantityValue;
        double taxValue;
        
        if (Double::TryParse(price, priceValue) && priceValue >= 0 && Int32::TryParse(quantity_sold, quantityValue) && quantityValue >= 0 && Double::TryParse(tax, taxValue) && taxValue >= 0) {

            bool productExists = false;
            int availableQuantity = -1; 

            for (int i = 0; i < product->Rows->Count; ++i) {
                if (product->Rows[i]["IDp"]->ToString() == IDps) {
                    productExists = true;

                    System::String^ Quantity = product->Rows[i]["quantity"]->ToString();
                    
                    if (!Int32::TryParse(Quantity, availableQuantity)) {
                        MessageBox::Show("Invalid quantity value in inventory for Product ID: " + IDps, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    break;
                }
            }
            if (!productExists) {
                MessageBox::Show("Product ID not found in inventory.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            if (quantityValue > availableQuantity) {
                MessageBox::Show("Quantity desired exceeds available stock. Available quantity: " + availableQuantity, "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            double totalAmountExcludingTax = priceValue * quantityValue;           
            double VATAmount = totalAmountExcludingTax * (taxValue / 100);
            
            double discount = 0.0;
            if (quantityValue >= 5 && quantityValue <= 10) {
                discount = totalAmountExcludingTax * 0.05;  // 5% discount
            } else if (quantityValue > 10) {
                discount = totalAmountExcludingTax * 0.10;  // 10% discount
            }

            double finalPrice = totalAmountExcludingTax + VATAmount - discount;

            for (int i = 0; i < product->Rows->Count; ++i) {
                if (product->Rows[i]["IDp"]->ToString() == IDps) {
                    product->Rows[i]["quantity"] = availableQuantity - quantityValue; // Deduct sold quantity
                    break;
                }
            }
            sales->Rows->Add(IDs, IDps, price, quantity_sold, totalAmountExcludingTax, VATAmount, discount, finalPrice);

            MessageBox::Show("\nSale processed successfully.\n" + "\nVAT:  " + VATAmount.ToString("C2") + "\nDiscount:  " + discount.ToString("C2") + "\nFinal Price:  " + finalPrice.ToString("C2"), "Sale Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
        } else {
            MessageBox::Show("Price must be a positive number, and Quantity Sold must be a valid non-negative integer.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    } else {
        MessageBox::Show("Please fill in all fields before adding a sale.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}



private: System::Void delete2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			
			 if (dataGridView2->SelectedRows->Count > 0) {			 
				 DataGridViewRow^ selectedRow = dataGridView2->SelectedRows[0];

				 DataTable^ sales = static_cast<DataTable^>(dataGridView2->DataSource);
			 
				 sales->Rows->RemoveAt(selectedRow->Index);
			
				 dataGridView2->Refresh();
			 }
			
			 else
			 {
			 MessageBox::Show("Please select a row to delete.", "No Row Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
		 }
private: System::Void modifyb_Click(System::Object^ sender, System::EventArgs^ e) {

			if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			UpdateP^ editForm = gcnew UpdateP();

			editForm->SetIDp1Text(selectedRow->Cells[0]->Value->ToString());
			editForm->SetProductNameText(selectedRow->Cells[1]->Value->ToString());
			editForm->SetQuantityText(selectedRow->Cells[2]->Value->ToString());

			if (editForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				selectedRow->Cells[0]->Value = editForm->GetIDp1Text();
				selectedRow->Cells[1]->Value = editForm->GetProductNameText();
				selectedRow->Cells[2]->Value = editForm->GetQuantityText();
			}
		} else {
			MessageBox::Show("Please select a row to update.", "No Row Selected",MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

}

private: System::Void modify2_Click(System::Object^ sender, System::EventArgs^ e) { 

    if (dataGridView2->SelectedRows->Count > 0) {
        DataGridViewRow^ selectedRow = dataGridView2->SelectedRows[0];
        UpdateS^ editForm = gcnew UpdateS();

        editForm->SetIDs1Text(selectedRow->Cells[0]->Value->ToString());
        editForm->SetIDpsText(selectedRow->Cells[1]->Value->ToString());
        editForm->SetQuantitySText(selectedRow->Cells[2]->Value->ToString());
        editForm->SetPriceText(selectedRow->Cells[3]->Value->ToString());
        editForm->SetTaxText(selectedRow->Cells[4]->Value->ToString());

        if (editForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            selectedRow->Cells[0]->Value = editForm->GetIDs1Text();
            selectedRow->Cells[1]->Value = editForm->GetIDpsText();
            selectedRow->Cells[2]->Value = editForm->GetQuantitySText();
            selectedRow->Cells[3]->Value = editForm->GetPriceSText();
            selectedRow->Cells[4]->Value = editForm->GetTaxText();

            int quantity = Int32::Parse(selectedRow->Cells[2]->Value->ToString());
            double price = Double::Parse(selectedRow->Cells[3]->Value->ToString());
            double tax = Double::Parse(selectedRow->Cells[4]->Value->ToString());
            double totalAmountExcludingTax = price * quantity;
            double VATAmount = totalAmountExcludingTax * (tax / 100);

            double discount = 0.0;
            if (quantity >= 5 && quantity <= 10) {
                discount = totalAmountExcludingTax * 0.05;  // 5% discount
            } else if (quantity > 10) {
                discount = totalAmountExcludingTax * 0.10;  // 10% discount
            }

            double finalPrice = totalAmountExcludingTax + VATAmount - discount;

            selectedRow->Cells[7]->Value = finalPrice.ToString("F2");

            System::String^ IDps = selectedRow->Cells[1]->Value->ToString();
            bool productExists = false;
            int availableQuantity = -1;

            for (int i = 0; i < product->Rows->Count; ++i) {
                if (product->Rows[i]["IDp"]->ToString() == IDps) {
                    productExists = true;

                    System::String^ Quantity = product->Rows[i]["quantity"]->ToString();
                    if (!Int32::TryParse(Quantity, availableQuantity)) {
                        MessageBox::Show("Invalid quantity value in inventory for Product ID: " + IDps, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }

                    int newQuantity = availableQuantity - quantity;  
                    if (newQuantity < 0) {
                        MessageBox::Show("Not enough stock in inventory.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    product->Rows[i]["quantity"] = newQuantity.ToString();
                    break;
                }
            }

            if (!productExists) {
                MessageBox::Show("Product not found in inventory.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    } else {
        MessageBox::Show("Please select a row to update.", "No Row Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
}

private: System::Void disconectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { 
    MessageBox::Show("You are disconnected.", "Disconnected", MessageBoxButtons::OK, MessageBoxIcon::Information);

    this->Hide(); 

    miniproject::login^ loginForm = gcnew miniproject::login(); 

    loginForm->ShowDialog(); 

    this->Show();
}

};
}