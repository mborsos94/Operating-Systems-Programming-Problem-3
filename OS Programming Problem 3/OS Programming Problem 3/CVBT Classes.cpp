#include "CBVT Classes.h"

Thread::Thread()
: ThreadHandle(NULL), Terminate(false)
{
}

Thread::~Thread()
{
	if (ThreadHandle != NULL)
	{
		::TerminateThread(ThreadHandle, 0);
		ThreadHandle = NULL;
	}
}

DWORD Thread::ThreadProc(void *ap)
{
	Thread *r = (Thread *)ap;
	return r->run();
}

void Thread::Start()
{
	ThreadHandle = ::CreateThread(
		NULL,       // default security attributes
		0,          // default stack size
		(LPTHREAD_START_ROUTINE)ThreadProc,
		this,       // no thread function arguments
		0,          // default creation flags
		&ThreadID); // receive thread identifier
}

Client::Client()
{
	auto_ptr<Client> aClient(new Client(*this));
	client_ptr = aClient;
	client_ptr->Start();
}

Client::~Client()
{

}

DWORD Client::run()
{
	clientDoc.SetObject();
	{
		Value clients(kArrayType);
	}
}

BankInsur::BankInsur()
{
	auto_ptr<BankInsur> aBankInsur(new BankInsur(*this));
	bankinsur_ptr = aBankInsur;
	bankinsur_ptr->Start();
}

BankInsur::~BankInsur()
{

}

DWORD BankInsur::run()
{
	while (true)
	{
	}
}

DMV::DMV()
{
	auto_ptr<DMV> aDMV(new DMV(*this));
	dmv_ptr = aDMV;
	dmv_ptr->Start();
}

DMV::~DMV()
{

}

DWORD DMV::run()
{
	while (true)
	{
	}
}
