/*#include  <Windows.h>
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
#endif*/