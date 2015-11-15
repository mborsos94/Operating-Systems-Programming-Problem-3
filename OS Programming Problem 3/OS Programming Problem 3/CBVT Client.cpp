#include "CBVT Client.h"
#include "stdafx.h"

using namespace OSProgrammingProblem3;

[System::STAThread]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew CBVTClient());

	return 0;
}