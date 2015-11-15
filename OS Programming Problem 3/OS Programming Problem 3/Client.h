#include "CBVT Client.h";
#include "Thread.h"
#include <iostream>
using namespace std;
using namespace CBVTClientNS;

class Client;

public class Client : public Thread
{
public:
	Client();
	~Client();
	DWORD run();
	auto_ptr<Client> client_ptr;
};