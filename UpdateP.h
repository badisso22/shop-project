#pragma once

namespace miniproject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for UpdateP
    /// </summary>
    public ref class UpdateP : public System::Windows::Forms::Form
    {
    public:
        UpdateP(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

        // Getter and Setter methods
        System::String^ GetIDp1Text() {
            return IDp1->Text;
        }

        void SetIDp1Text(System::String^ value) {
            IDp1->Text = value;
        }

        System::String^ GetProductNameText() {
            return productname1->Text;
        }

        void SetProductNameText(System::String^ value) {
            productname1->Text = value;
        }

        System::String^ GetQuantityText() {
            return quantity1->Text;
        }

        void SetQuantityText(System::String^ value) {
            quantity1->Text = value;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~UpdateP()
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
    private: System::Windows::Forms::TextBox^ IDp1;
    private: System::Windows::Forms::TextBox^ quantity1;
    private: System::Windows::Forms::TextBox^ productname1;
    private: System::Windows::Forms::Button^ savebutton;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->IDp1 = (gcnew System::Windows::Forms::TextBox());
			this->quantity1 = (gcnew System::Windows::Forms::TextBox());
			this->productname1 = (gcnew System::Windows::Forms::TextBox());
			this->savebutton = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(265, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(465, 82);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Update Form";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(54, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"IDp:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(332, 55);
			this->label3->TabIndex = 2;
			this->label3->Text = L"product name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 474);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 55);
			this->label4->TabIndex = 3;
			this->label4->Text = L"quantity:";
			// 
			// IDp1
			// 
			this->IDp1->Location = System::Drawing::Point(172, 245);
			this->IDp1->Name = L"IDp1";
			this->IDp1->Size = System::Drawing::Size(312, 26);
			this->IDp1->TabIndex = 4;
			this->IDp1->TextChanged += gcnew System::EventHandler(this, &UpdateP::IDp1_TextChanged);
			// 
			// quantity1
			// 
			this->quantity1->Location = System::Drawing::Point(266, 489);
			this->quantity1->Name = L"quantity1";
			this->quantity1->Size = System::Drawing::Size(415, 26);
			this->quantity1->TabIndex = 5;
			// 
			// productname1
			// 
			this->productname1->Location = System::Drawing::Point(380, 365);
			this->productname1->Name = L"productname1";
			this->productname1->Size = System::Drawing::Size(344, 26);
			this->productname1->TabIndex = 6;
			// 
			// savebutton
			// 
			this->savebutton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->savebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->savebutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->savebutton->Location = System::Drawing::Point(354, 712);
			this->savebutton->Name = L"savebutton";
			this->savebutton->Size = System::Drawing::Size(290, 75);
			this->savebutton->TabIndex = 7;
			this->savebutton->Text = L"save";
			this->savebutton->UseVisualStyleBackColor = false;
			this->savebutton->Click += gcnew System::EventHandler(this, &UpdateP::savebutton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Navy;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(4, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1020, 110);
			this->panel1->TabIndex = 8;
			// 
			// UpdateP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1024, 1032);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->savebutton);
			this->Controls->Add(this->productname1);
			this->Controls->Add(this->quantity1);
			this->Controls->Add(this->IDp1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"UpdateP";
			this->Text = L"UpdateP";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void IDp1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
             }
    private: System::Void savebutton_Click(System::Object^ sender, System::EventArgs^ e) {

            if (IDp1->Text->Trim() == "" || productname1->Text->Trim() == "" || quantity1->Text->Trim() == "") {

                MessageBox::Show("Please fill in all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

                return;
            }
            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }
    };
}

