#include "Authorithation.h"

#include <Windows.h>  

using namespace Project1; // �������� �������  



int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Authorithation);

	return 0;

}
