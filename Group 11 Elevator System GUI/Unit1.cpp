//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	// Initialize the current floor to the first floor
	currentFloor = 1;

	// Set the text of Label1 to indicate the current floor
	Label1->Text = "You are currently on Floor: " + IntToStr(currentFloor);
}

void __fastcall TForm1::ButtonClick(TObject *Sender)
{
	// Get the button that was clicked
	TButton *button = dynamic_cast<TButton*>(Sender);

	// Parse the number from the button's name (e.g. "Button2" => 2)
	int floor = StrToInt(button->Name.SubString(7, 1));

	// Update the current floor and Label1 text
	currentFloor = floor;
	Label1->Text = "Floor " + IntToStr(currentFloor);
}
//---------------------------------------------------------------------------



