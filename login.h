#pragma once

namespace miniproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 












	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  usernametextBox;
	private: System::Windows::Forms::TextBox^  passwordtextBox;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::CheckBox^  showpass;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->showpass = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGray;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(123, 108);
			this->panel2->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 142);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(125, 258);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password :";
			// 
			// usernametextBox
			// 
			this->usernametextBox->Location = System::Drawing::Point(131, 184);
			this->usernametextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->usernametextBox->Name = L"usernametextBox";
			this->usernametextBox->Size = System::Drawing::Size(564, 26);
			this->usernametextBox->TabIndex = 3;
			// 
			// passwordtextBox
			// 
			this->passwordtextBox->Location = System::Drawing::Point(131, 299);
			this->passwordtextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->passwordtextBox->Name = L"passwordtextBox";
			this->passwordtextBox->PasswordChar = '*';
			this->passwordtextBox->Size = System::Drawing::Size(564, 26);
			this->passwordtextBox->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(129, 385);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(566, 62);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(134, 335);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(144, 24);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"remember me";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(547, 274);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(148, 20);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"forgot password\?";
			// 
			// showpass
			// 
			this->showpass->AutoSize = true;
			this->showpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->showpass->Location = System::Drawing::Point(609, 333);
			this->showpass->Name = L"showpass";
			this->showpass->Size = System::Drawing::Size(76, 24);
			this->showpass->TabIndex = 9;
			this->showpass->Text = L"show";
			this->showpass->UseVisualStyleBackColor = true;
			this->showpass->CheckedChanged += gcnew System::EventHandler(this, &login::showpass_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DimGray;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->showpass);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->passwordtextBox);
			this->panel1->Controls->Add(this->usernametextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(348, 310);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(840, 551);
			this->panel1->TabIndex = 10;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1573, 1170);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"login";
			this->Text = L"login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::String^ username = usernametextBox->Text;
    System::String^ password = passwordtextBox->Text;

    if (username == "admin" && password == "admin123") {
        MessageBox::Show("Login successful as Admin!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
        this->Tag = "admin";  
        this->Close();
    }
    else if (username == "staff" && password == "staff123") {
        MessageBox::Show("Login successful as Staff!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
        this->Tag = "staff"; 
        this->Close();
    }
    else {
        MessageBox::Show("Invalid username or password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void showpass_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (showpass->Checked) {       
        passwordtextBox->PasswordChar = '\0';  
    }
    else {      
        passwordtextBox->PasswordChar = '*';  
    }
		 }
};
}

