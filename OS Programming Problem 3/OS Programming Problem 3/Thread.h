#include  <Windows.h>
using namespace std;

#ifndef _THREAD_H
#define _THREAD_H
class Thread
{
	HANDLE ThreadHandle;
	bool Terminate;
	DWORD ThreadID;

	static DWORD ThreadProc(void *);
public:
	Thread();
	virtual ~Thread();
	void Start();
	void Stop() { Terminate = true; }
	bool ContinueRunning() { return !Terminate; }
	DWORD GetThreadID() const { return ThreadID; }
	virtual DWORD run() = 0;
};
#endif

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