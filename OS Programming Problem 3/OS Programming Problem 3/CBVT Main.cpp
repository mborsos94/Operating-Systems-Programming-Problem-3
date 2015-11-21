#include "stdafx.h"
#include "globals.h"
#include "CBVT Main.h"

using namespace CBVTMainNS;
[System::STAThread]
int main(array<System::String ^> ^args)
{
	FreeConsole();
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew CBVTMain());
	//Application::Run(gcnew CBVTClient());
	return 0;
}