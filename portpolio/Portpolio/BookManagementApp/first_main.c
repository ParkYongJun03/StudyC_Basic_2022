#pragma comment (lib, "libmysql.lib")	//My SQL ���̺귯�� ��� ����

#include <stdio.h>
#include <stdlib.h>	//�⺻

#include <WinSock2.h>	//��Ʈ��ũ ����� ���� ���̺귯��
#include <my_global.h>	//DB��
#include <mysql.h>

void main() {
	printf("MySQL info = %s\n", mysql_get_client_info());

	system("pause");
	return EXIT_SUCCESS;
}