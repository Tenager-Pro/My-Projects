#include "Insert.h"
#include "Take.h"

System::Void Project1::Insert::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	(gcnew Take)->ShowDialog();
}