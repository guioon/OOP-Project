#pragma once
#include <WinSock2.h>
#include <string>
#define MAX_BUFFER_SIZE 40910
using namespace std;
class tool// recv�� send�� ����ϱ� ���� �������
{
public:
	SOCKET client;
	char buf[MAX_BUFFER_SIZE];
	tool(SOCKET client);
	~tool(); 
	int Recv(SOCKET client, char buf[]);
};

