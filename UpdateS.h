#pragma once

namespace miniproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateS
	/// </summary>
	public ref class UpdateS : public System::Windows::Forms::Form
	{
	public:
		UpdateS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
		}
		System::String^ GetIDs1Text() {
            return IDs1->Text;
        }

        void SetIDs1Text(System::String^ value) {
            IDs1->Text = value;
        }

        System::String^ GetIDpsText() {
            return IDps1->Text;
        }

        void SetIDpsText(System::String^ value) {
            IDps1->Text = value;
        }

        System::String^ GetQuantitySText() {
            return quantitys1->Text;
        }

        void SetQuantitySText(System::String^ value) {
            quantitys1->Text = value;
        }

		System::String^ GetPriceSText() {
            return price1->Text;
        }

        void SetPriceText(System::String^ value) {
            price1->Text = value;
        }

		System::String^ GetTaxText() {
            return tax1->Text;
        }

        void SetTaxText(System::String^ value) {
            tax1->Text = value;
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  IDs1;
	private: System::Windows::Forms::TextBox^  price1;
	private: System::Windows::Forms::TextBox^  quantitys1;
	private: System::Windows::Forms::TextBox^  tax1;
	private: System::Windows::Forms::TextBox^  IDps1;
	private: System::Windows::Forms::Button^  savebutton1;
	private: System::Windows::Forms::Panel^  panel1;




 

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->IDs1 = (gcnew System::Windows::Forms::TextBox());
			this->price1 = (gcnew System::Windows::Forms::TextBox());
			this->quantitys1 = (gcnew System::Windows::Forms::TextBox());
			this->tax1 = (gcnew System::Windows::Forms::TextBox());
			this->IDps1 = (gcnew System::Windows::Forms::TextBox());
			this->savebutton1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(236, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(465, 82);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Update Form";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(107, 400);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"IDps :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(109, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 46);
			this->label7->TabIndex = 6;
			this->label7->Text = L"IDs :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 567);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 46);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Price :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(107, 733);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(290, 46);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Quantity sold :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(107, 890);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 46);
			this->label5->TabIndex = 9;
			this->label5->Text = L"tax :";
			// 
			// IDs1
			// 
			this->IDs1->Location = System::Drawing::Point(234, 254);
			this->IDs1->Name = L"IDs1";
			this->IDs1->Size = System::Drawing::Size(326, 26);
			this->IDs1->TabIndex = 10;
			// 
			// price1
			// 
			this->price1->Location = System::Drawing::Point(255, 585);
			this->price1->Name = L"price1";
			this->price1->Size = System::Drawing::Size(326, 26);
			this->price1->TabIndex = 11;
			// 
			// quantitys1
			// 
			this->quantitys1->Location = System::Drawing::Point(403, 751);
			this->quantitys1->Name = L"quantitys1";
			this->quantitys1->Size = System::Drawing::Size(326, 26);
			this->quantitys1->TabIndex = 12;
			// 
			// tax1
			// 
			this->tax1->Location = System::Drawing::Point(255, 907);
			this->tax1->Name = L"tax1";
			this->tax1->Size = System::Drawing::Size(326, 26);
			this->tax1->TabIndex = 13;
			// 
			// IDps1
			// 
			this->IDps1->Location = System::Drawing::Point(242, 418);
			this->IDps1->Name = L"IDps1";
			this->IDps1->Size = System::Drawing::Size(326, 26);
			this->IDps1->TabIndex = 14;
			// 
			// savebutton1
			// 
			this->savebutton1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->savebutton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->savebutton1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->savebutton1->Location = System::Drawing::Point(351, 1054);
			this->savebutton1->Name = L"savebutton1";
			this->savebutton1->Size = System::Drawing::Size(230, 69);
			this->savebutton1->TabIndex = 15;
			this->savebutton1->Text = L"save";
			this->savebutton1->UseVisualStyleBackColor = false;
			this->savebutton1->Click += gcnew System::EventHandler(this, &UpdateS::savebutton1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Navy;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(5, 11);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1011, 113);
			this->panel1->TabIndex = 16;
			// 
			// UpdateS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1022, 1285);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->savebutton1);
			this->Controls->Add(this->IDps1);
			this->Controls->Add(this->tax1);
			this->Controls->Add(this->quantitys1);
			this->Controls->Add(this->price1);
			this->Controls->Add(this->IDs1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Name = L"UpdateS";
			this->Text = L"UpdateS";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void savebutton1_Click(System::Object^ sender, System::EventArgs^ e) {
    
    // Check if all fields are filled
    if (IDps1->Text->Trim() == "" || IDs1->Text->Trim() == "" || price1->Text->Trim() == "" || quantitys1->Text->Trim() == "" || tax1->Text->Trim() == "") {
        MessageBox::Show("Please fill in all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    double price, tax;
    int quantity;
    // Try to parse the inputs
    if (!Double::TryParse(price1->Text, price) || !Int32::TryParse(quantitys1->Text, quantity) || !Double::TryParse(tax1->Text, tax)) {
        MessageBox::Show("Please enter valid numeric values for Price, Quantity, and Tax.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Debugging: Show parsed values
    MessageBox::Show("Price: " + price.ToString() + "\nQuantity: " + quantity.ToString() + "\nTax: " + tax.ToString(), "Debugging Info", MessageBoxButtons::OK, MessageBoxIcon::Information);

    // Confirm save action
    if (MessageBox::Show("Are you sure you want to save the changes?", "Confirm Save", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
        return;
    }

    // Pass the values back to the main form
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
}



};
}
