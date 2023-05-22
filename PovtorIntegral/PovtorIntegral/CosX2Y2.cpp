#include "CosX2Y2.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PovtorIntegral::CosX2Y2 form;
	Application::Run(% form);
}

System::Void PovtorIntegral::CosX2Y2::вычислитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox_B1->Text == "" || textBox_B2->Text == "" || textBox_B3->Text == "" || 
		textBox_G1->Text == "" || textBox_G2->Text == "" || textBox_G3->Text == "" ||
		textBox_y1->Text == "" || textBox_y2->Text == "" || textBox_y3->Text == "" ||
		textBox_x1->Text == "" || textBox_x2->Text == "" || textBox_x3->Text == "") {
		MessageBox::Show("Введите параметры", "Внимание");
	}
	else {
		double B1, B2, B3, Y1, Y2, Y3;
		double x1, x2, x3, y1, y2, y3;
		try
		{
			B1 = Convert::ToDouble(textBox_B1->Text);
			B2 = Convert::ToDouble(textBox_B2->Text);
			B3 = Convert::ToDouble(textBox_B3->Text);
			Y1 = Convert::ToDouble(textBox_G1->Text);
			Y2 = Convert::ToDouble(textBox_G2->Text);
			Y3 = Convert::ToDouble(textBox_G3->Text);
			x1 = Convert::ToDouble(textBox_x1->Text);
			x2 = Convert::ToDouble(textBox_x2->Text);
			x3 = Convert::ToDouble(textBox_x3->Text);
			y1 = Convert::ToDouble(textBox_y1->Text);
			y2 = Convert::ToDouble(textBox_y2->Text);
			y3 = Convert::ToDouble(textBox_y3->Text);
			this->chart3->Series[0]->Points->AddXY(x1, y1);
			this->chart3->Series[0]->Points->AddXY(x2, y2);
			this->chart3->Series[0]->Points->AddXY(x3, y3);
			this->chart3->Series[0]->Points->AddXY(x1, y1);
			this->chart3->Series[1]->Points->AddXY(B1, Y1);
			this->chart3->Series[1]->Points->AddXY(B2, Y2);
			this->chart3->Series[1]->Points->AddXY(B3, Y3);
			double res = 0, x, y;
			x = (x2 - x1) * B1 + (x3 - x1) * Y1 + x1;
			y = (y2 - y1) * B1 + (y3 - y1) * Y1 + x1;
			res += cos(pow(x, 2) + pow(y, 2));
			x = (x2 - x1) * B2 + (x3 - x1) * Y2 + x1;
			y = (y2 - y1) * B2 + (y3 - y1) * Y2 + x1;
			res += cos(pow(x, 2) + pow(y, 2));
			x = (x2 - x1) * B3 + (x3 - x1) * Y3 + x1;
			y = (y2 - y1) * B3 + (y3 - y1) * Y3 + x1;
			res += cos(pow(x, 2) + pow(y, 2));
			res = res / 6;
			textBox_res->Text = Convert::ToString(res);
		}
		catch (...)
		{
			MessageBox::Show("Ошибка при вводе координат! Используйте запятую, как десятичный разделитель!");
		}
	}
}

System::Void PovtorIntegral::CosX2Y2::поУмолчанию1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox_2->Checked && checkBox_1->Checked == false) {
		textBox_B1->Text = "";
		textBox_B2->Text = "";
		textBox_B3->Text = "";
		textBox_G1->Text = "";
		textBox_G2->Text = "";
		textBox_G3->Text = "";
		textBox_x1->Text = "";
		textBox_x2->Text = "";
		textBox_x3->Text = "";
		textBox_y1->Text = "";
		textBox_y2->Text = "";
		textBox_y3->Text = "";
		double B1, B2, B3, Y1, Y2, Y3;
		double x1, x2, x3, y1, y2, y3;
		B1 = 0.6666;
		B2 = 0.1666;
		B3 = 0.1666;
		Y1 = 0.8333;
		Y2 = 0.3333;
		Y3 = 0.8333;
		x1 = 0;
		y1 = 1;
		x2 = 1;
		y2 = 1;
		x3 = 0;
		y3 = 0;
		textBox_B1->Text = Convert::ToString(B1);
		textBox_B2->Text = Convert::ToString(B2);
		textBox_B3->Text = Convert::ToString(B3);
		textBox_G1->Text = Convert::ToString(Y1);
		textBox_G2->Text = Convert::ToString(Y2);
		textBox_G3->Text = Convert::ToString(Y3);
		textBox_x1->Text = Convert::ToString(x1);
		textBox_x2->Text = Convert::ToString(x2);
		textBox_x3->Text = Convert::ToString(x3);
		textBox_y1->Text = Convert::ToString(y1);
		textBox_y2->Text = Convert::ToString(y2);
		textBox_y3->Text = Convert::ToString(y3);
		double res = 0, x, y;
		x = (x2 - x1) * B1 + (x3 - x1) * Y1 + x1;
		y = (y2 - y1) * B1 + (y3 - y1) * Y1 + x1;
		res += cos(pow(x, 2) + pow(y, 2));
		x = (x2 - x1) * B2 + (x3 - x1) * Y2 + x1;
		y = (y2 - y1) * B2 + (y3 - y1) * Y2 + x1;
		res += cos(pow(x, 2) + pow(y, 2));
		x = (x2 - x1) * B3 + (x3 - x1) * Y3 + x1;
		y = (y2 - y1) * B3 + (y3 - y1) * Y3 + x1;
		res += cos(pow(x, 2) + pow(y, 2));
		res = res / 6;
		textBox_3->Text = Convert::ToString(res);
	}
	if (checkBox_1->Checked && checkBox_2->Checked == false) {
		textBox_B1->Text = "";
		textBox_B2->Text = "";
		textBox_B3->Text = "";
		textBox_G1->Text = "";
		textBox_G2->Text = "";
		textBox_G3->Text = "";
		textBox_x1->Text = "";
		textBox_x2->Text = "";
		textBox_x3->Text = "";
		textBox_y1->Text = "";
		textBox_y2->Text = "";
		textBox_y3->Text = "";
		double B1, B2, B3, Y1, Y2, Y3;
		double x1, x2, x3, y1, y2, y3;
		B1 = 0.5;
		B2 = 0.5;
		B3 = 0;
		Y1 = 1;
		Y2 = 0.5;
		Y3 = 0.5;
		x1 = 0;
		y1 = 1;
		x2 = 1;
		y2 = 1;
		x3 = 0;
		y3 = 0;
		textBox_B1->Text = Convert::ToString(B1);
		textBox_B2->Text = Convert::ToString(B2);
		textBox_B3->Text = Convert::ToString(B3);
		textBox_G1->Text = Convert::ToString(Y1);
		textBox_G2->Text = Convert::ToString(Y2);
		textBox_G3->Text = Convert::ToString(Y3);
		textBox_x1->Text = Convert::ToString(x1);
		textBox_x2->Text = Convert::ToString(x2);
		textBox_x3->Text = Convert::ToString(x3);
		textBox_y1->Text = Convert::ToString(y1);
		textBox_y2->Text = Convert::ToString(y2);
		textBox_y3->Text = Convert::ToString(y3);
		double res = 0, x, y;
		x = (x2 - x1) * B1 + (x3 - x1) * Y1 + x1;
		y = (y2 - y1) * B1 + (y3 - y1) * Y1 + x1;
		res += cos(pow(x, 2) + pow(y, 2));
		x = (x2 - x1) * B2 + (x3 - x1) * Y2 + x1;
		y = (y2 - y1) * B2 + (y3 - y1) * Y2 + x1;
		res += cos(pow(x, 2) + pow(y, 2));
		x = (x2 - x1) * B3 + (x3 - x1) * Y3 + x1;
		y = (y2 - y1) * B3 + (y3 - y1) * Y3 + x1;
		res += cos(pow(x, 2) + pow(y, 2));
		res = res / 6;
		textBox_1->Text = Convert::ToString(res);
	}
	if (checkBox_1->Checked == false && checkBox_2->Checked == false) {
		MessageBox::Show("Выберте 1 из 2 ячеек", "Внимание");
	}
	if (checkBox_1->Checked && checkBox_2->Checked)
		MessageBox::Show("Выберте 1 из 2 ячеек", "Внимание");
}

System::Void PovtorIntegral::CosX2Y2::chart1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->AddXY(0, 0);
	this->chart1->Series[0]->Points->AddXY(0, 1);
	this->chart1->Series[0]->Points->AddXY(1, 1);
	this->chart1->Series[0]->Points->AddXY(0, 0);
	this->chart1->Series[1]->Points->AddXY(0.5, 1);
	this->chart1->Series[1]->Points->AddXY(0.5, 0.5);
	this->chart1->Series[1]->Points->AddXY(0, 0.5);

}

System::Void PovtorIntegral::CosX2Y2::chart2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart2->Series[0]->Points->AddXY(0, 0);
	this->chart2->Series[0]->Points->AddXY(0, 1);
	this->chart2->Series[0]->Points->AddXY(1, 1);
	this->chart2->Series[0]->Points->AddXY(0, 0);
	this->chart2->Series[1]->Points->AddXY(0.666, 0.833);
	this->chart2->Series[1]->Points->AddXY(0.166, 0.333);
	this->chart2->Series[1]->Points->AddXY(0.166, 0.833);
}

System::Void PovtorIntegral::CosX2Y2::очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart3->Series[0]->Points->Clear();
	this->chart3->Series[1]->Points->Clear();
	this->chart1->Series[0]->Points->Clear();
	this->chart1->Series[1]->Points->Clear();
	this->chart2->Series[0]->Points->Clear();
	this->chart2->Series[1]->Points->Clear();
	textBox_B1->Text = "";
	textBox_B2->Text = "";
	textBox_B3->Text = "";
	textBox_G1->Text = "";
	textBox_G2->Text = "";
	textBox_G3->Text = "";
	textBox_x1->Text = "";
	textBox_x2->Text = "";
	textBox_x3->Text = "";
	textBox_y1->Text = "";
	textBox_y2->Text = "";
	textBox_y3->Text = "";
	textBox_1->Text = "";
	textBox_3->Text = "";
	textBox_res->Text = "";
}

System::Void PovtorIntegral::CosX2Y2::chart3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void PovtorIntegral::CosX2Y2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox_B1->Text == "" || textBox_B2->Text == "" || textBox_B3->Text == "" ||
		textBox_G1->Text == "" || textBox_G2->Text == "" || textBox_G3->Text == "" ||
		textBox_y1->Text == "" || textBox_y2->Text == "" || textBox_y3->Text == "" ||
		textBox_x1->Text == "" || textBox_x2->Text == "" || textBox_x3->Text == "") {
		MessageBox::Show("Введите параметры", "Внимание");
	}
	else {
		double B1, B2, B3, Y1, Y2, Y3;
		double x1, x2, x3, y1, y2, y3;
		try
		{
			B1 = Convert::ToDouble(textBox_B1->Text);
			B2 = Convert::ToDouble(textBox_B2->Text);
			B3 = Convert::ToDouble(textBox_B3->Text);
			Y1 = Convert::ToDouble(textBox_G1->Text);
			Y2 = Convert::ToDouble(textBox_G2->Text);
			Y3 = Convert::ToDouble(textBox_G3->Text);
			x1 = Convert::ToDouble(textBox_x1->Text);
			x2 = Convert::ToDouble(textBox_x2->Text);
			x3 = Convert::ToDouble(textBox_x3->Text);
			y1 = Convert::ToDouble(textBox_y1->Text);
			y2 = Convert::ToDouble(textBox_y2->Text);
			y3 = Convert::ToDouble(textBox_y3->Text);
			this->chart3->Series[0]->Points->AddXY(x1, y1);
			this->chart3->Series[0]->Points->AddXY(x2, y2);
			this->chart3->Series[0]->Points->AddXY(x3, y3);
			this->chart3->Series[0]->Points->AddXY(x1, y1);
			this->chart3->Series[1]->Points->AddXY(B1, Y1);
			this->chart3->Series[1]->Points->AddXY(B2, Y2);
			this->chart3->Series[1]->Points->AddXY(B3, Y3);
		}
		catch (...)
		{
			MessageBox::Show("Ошибка при вводе координат! Используйте запятую, как десятичный разделитель!");
		}
	}
}

System::Void PovtorIntegral::CosX2Y2::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart3->Series[0]->Points->Clear();
	this->chart3->Series[1]->Points->Clear();
}

System::Void PovtorIntegral::CosX2Y2::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Выйти", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
