#include "Take.h"
#include "Insert.h"

System::Void Project1::Take::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	(gcnew Insert)->ShowDialog();

}