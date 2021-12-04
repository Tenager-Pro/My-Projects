#include "NewPeople.h"

#include "Delete.h"
System::Void Project1::NewPeople::deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	(gcnew Delete)->ShowDialog();


}