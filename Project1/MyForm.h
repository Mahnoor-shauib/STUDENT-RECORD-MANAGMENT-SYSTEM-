#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <msclr/marshal_cppstd.h> // Required for marshal_as

// Required for std::string
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::AliceBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Student Name";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(332, 57);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 30);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::AliceBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Father Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::AliceBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 35);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Roll No :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::AliceBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(68, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 35);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Student Caste";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(332, 110);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 30);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(332, 161);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 30);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(332, 212);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 30);
			this->textBox4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::AliceBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(68, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 35);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Student GPA";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(332, 270);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 32);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::AliceBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(210, 339);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 59);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::AliceBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(74, 350);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 48);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::AliceBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(620, 58);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 57);
			this->button2->TabIndex = 16;
			this->button2->Text = L"NEXT ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button2_MouseClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::AliceBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(394, 339);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 59);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Clock;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(873, 424);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L" Student Record";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Initially enable only the Add button
		button1->Enabled = true;  // Add button
		button2->Enabled = false; // Next button
		button3->Enabled = false; // Update button
		button4->Enabled = false; // Delete button
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Collect data from text fields
		std::string studentName = msclr::interop::marshal_as<std::string>(textBox1->Text);//msclr::interop::marshal_as<std::string>(): A function provided by the msclr namespace to convert managed System::String to unmanaged std::string.
		std::string rollNo = msclr::interop::marshal_as<std::string>(textBox4->Text);//Retrieves the text from a specific TextBox control (e.g., textBox1->Text)
		std::string fatherName = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string caste = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string gpa = msclr::interop::marshal_as<std::string>(textBox5->Text);
		//Managed Strings (System::String): These are used in .NET environments (e.g., Windows Forms). They work with garbage collection.
		//Unmanaged Strings(std::string) : These are part of standard C++ and don't support .NET garbage collection.
		// Find the next available ID by reading the last line of the file
		int nextID = 1; // Default to 1 if the file is empty
		std::ifstream inputFile("students.txt");
		std::string lastLine;

		while (std::getline(inputFile, lastLine)) {
			// Read through the file to find the last line
		}
		inputFile.close();

		if (!lastLine.empty()) {
			// Extract the ID from the last line
			std::istringstream ss(lastLine);
			std::string id;
			std::getline(ss, id, ','); // Extract the first field (ID)
			nextID = std::stoi(id) + 1; // Increment the ID
		}

		// Open the file to append the new record
		std::ofstream file("students.txt", std::ios::app);//std::ofstream: Used to write to a file.
		//"students.txt": The name of the file where the new record will be stored.
			//std::ios::app :
			//Opens the file in append mode.
			//Ensures that new data is added to the end of the file without overwriting its existing content.
		if (file.is_open()) {//Ensures that the file was successfully opened.If the file couldn’t be opened (e.g., it doesn’t exist or there are permission issues), the code inside the if block is skipped.
			file << nextID << "," << studentName << "," << rollNo << "," << fatherName << "," << caste << "," << gpa << std::endl;// this line constructs a new record and writes it to the fil
			file.close();
		}

		// Disable the Add button and enable Next button
		button1->Enabled = false;  // Add button
		button2->Enabled = true;   // Next button
		button3->Enabled = false;  // Update button
		button4->Enabled = false;  // Delete button

		MessageBox::Show("Record added successfully!");
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve data from text fields
		std::string updatedName = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string updatedRollNo = msclr::interop::marshal_as<std::string>(textBox4->Text);
		std::string updatedFatherName = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string updatedCaste = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string updatedGPA = msclr::interop::marshal_as<std::string>(textBox5->Text);

		std::ifstream inputFile("students.txt");//std::ifstream: A class used to read data from files.
		std::ofstream tempFile("temp.txt"); // Temporary file to hold updated data
		//This setup is often used when working with files that need updates but cannot be directly modified

		bool recordFound = false;
		std::string line;

		// Read each line from the original file
		while (std::getline(inputFile, line)) {
			std::stringstream ss(line);
			std::string id, name, rollNo, fatherName, caste, gpa;

			// Parse the current line
			std::getline(ss, id, ',');
			std::getline(ss, name, ',');
			std::getline(ss, rollNo, ',');
			std::getline(ss, fatherName, ',');
			std::getline(ss, caste, ',');
			std::getline(ss, gpa, ',');

			// Check if this is the record to update based on Roll Number
			if (rollNo == updatedRollNo) {//If the roll numbers match, write the updated student data to a temporary file (tempFile).
				// Write updated data to temp file (replace old record)
				tempFile << id << "," << updatedName << "," << updatedRollNo << ","
					<< updatedFatherName << "," << updatedCaste << "," << updatedGPA << std::endl;
				recordFound = true;
			}
			else {
				// Write the original line to the temp file
				tempFile << line << std::endl;
			}
		}

		inputFile.close();
		tempFile.close();

		// Replace the original file with the temp file
		remove("students.txt");
		rename("temp.txt",  "students.txt");

		// Show a message indicating the result
		if (recordFound) {
			MessageBox::Show("Record updated successfully!");
		}
		else {
			MessageBox::Show("Record not found.");
		}

		// Reset buttons state
		button1->Enabled = false;   // Add button disabled
		button2->Enabled = true;    // Next button enabled
		button3->Enabled = false;   // Update button disabled
		button4->Enabled = false;   // Delete button disabled

	}



	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Delete button clicked
		std::string rollNo = msclr::interop::marshal_as<std::string>(textBox4->Text);
		bool recordFound = false;

		// Temporary storage for updated records
		std::ifstream file("students.txt");
		std::ofstream tempFile("temp.txt");
		std::string line;

		if (file.is_open() && tempFile.is_open()) {
			while (std::getline(file, line)) {
				std::stringstream ss(line);
				std::string id, name, fileRollNo, fatherName, caste, gpa;

				// Parse the current line
				std::getline(ss, id, ',');
				std::getline(ss, name, ',');
				std::getline(ss, fileRollNo, ',');
				std::getline(ss, fatherName, ',');
				std::getline(ss, caste, ',');
				std::getline(ss, gpa, ',');

				// Check if this is the record to delete
				if (fileRollNo == rollNo) {
					// Skip this record, effectively deleting it
					recordFound = true;
				}
				else {
					// Copy other records as they are
					tempFile << line << std::endl;
				}
			}

			file.close();
			tempFile.close();

			// Replace original file with the updated file
			remove("students.txt");//replacing original file with a temporaray file in order to store data 
			rename("temp.txt",  "students.txt");

			if (recordFound) {
				MessageBox::Show("Record deleted successfully!");
				// Clear text fields after deletion
				textBox1->Clear();
				textBox2->Clear();
				textBox3->Clear();
				textBox4->Clear();
				textBox5->Clear();

				// Disable Update and Delete buttons after deletion
				button3->Enabled = false;//update button
				button4->Enabled = false;//delete button 
			}
			else {
				MessageBox::Show("Record not found!");
			}
		}
		else {
			MessageBox::Show("Error opening file!");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		static int currentRecordIndex = 0; // Track the current record index
		std::ifstream file("students.txt");//std::ifstream file("students.txt");
		//Opens the file students.txt in read mode using an input file stream(std::ifstream).
			
		std::string line;//This stream allows reading data from the file line by line.
		int index = 0;//Initializes a counter variable index to 0. This is used to keep track of the current line number while iterating through the file.

		// Search for the next record
		while (std::getline(file, line)) {//Reads the file line by line.Each line is stored in the line variable.The while loop continues until all lines in the file are processed.
			if (index++ == currentRecordIndex) {
				std::stringstream ss(line);//Creates a string stream (std::stringstream) object ss and initializes it with the contents of line.
				std::string id, name, rollNo, fatherName, caste, gpa;//Declares six std::string variables to hold the different pieces of data extracted from the current record.
			//The code opens the file students.txt and reads it line by line.
				//When the loop finds the line corresponding to currentRecordIndex, it initializes a string stream with that line.
				//	The line is expected to contain fields like id, name, rollNo, etc., separated by spaces or delimiters.
				// Read data from the line
				std::getline(ss, id, ',');
				std::getline(ss, name, ',');
				std::getline(ss, rollNo, ',');
				std::getline(ss, fatherName, ',');
				std::getline(ss, caste, ',');
				std::getline(ss, gpa, ',');

				// Set text fields with student data
				textBox1->Text = gcnew String(name.c_str());
				textBox4->Text = gcnew String(rollNo.c_str());
				textBox3->Text = gcnew String(fatherName.c_str());
				textBox2->Text = gcnew String(caste.c_str());
				textBox5->Text = gcnew String(gpa.c_str());

				// Enable/Disable buttons as required
				button1->Enabled = false;  // Add button disabled
				button2->Enabled = true;   // Next button enabled
				button3->Enabled = true;   // Update button enabled
				button4->Enabled = true;   // Delete button enabled

				currentRecordIndex++;
				break;
			}
		}

		// Check if end of file is reached
		if (file.eof()) {
			MessageBox::Show("No more records found.");
			file.clear(); // Reset the file state for future reads
		}
		file.close();
	}

	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
