#include "tool.h"


tool::tool(SOCKET client)
{
}


tool::~tool()
{
}

int tool::Recv(SOCKET client, char buf[]) {

	ZeroMemory(buf, MAX_BUFFER_SIZE);
	int Bytein = recv(client, buf, MAX_BUFFER_SIZE, 0);//�޼����� �Է¹���
	if (Bytein <= 0) {
		return 0;
	}
	else {
		return 1;
	}
}