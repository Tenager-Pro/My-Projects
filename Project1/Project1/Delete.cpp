#include "Delete.h"
#include "NewPeople.h"
System::Void Project1::Delete::registrationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	(gcnew NewPeople)->ShowDialog();


}