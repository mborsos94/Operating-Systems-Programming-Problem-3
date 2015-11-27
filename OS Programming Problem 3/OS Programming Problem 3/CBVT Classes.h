#include  <Windows.h>
#include <iostream>
#include <time.h>
#include "rapidjson/document.h"
#include <vector>

using namespace std;
using namespace rapidjson;

#ifndef _CBVT_CLASSES_H
#define _CBVT_CLASSES_H

class Client;
class BankInsur;
class DMV;

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

public class Client : public Thread
{
public:
	Client();
	~Client();
	DWORD run();
	auto_ptr<Client> client_ptr;
	Document clientDoc;
	string fName;
	string lName;
};

public class BankInsur : public Thread
{
public:
	BankInsur();
	~BankInsur();
	DWORD run();
	auto_ptr<BankInsur> bankinsur_ptr;
};

public class DMV : public Thread
{
public:
	DMV();
	~DMV();
	DWORD run();
	auto_ptr<DMV> dmv_ptr;
};
#endif