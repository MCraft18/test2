#include<stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int serv(){
    WSADATA wsa;

    printf("\nInitialising Winsock...");
    if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
    {
        printf("Failed. Error Code : %d",WSAGetLastError());
        return 1;
    }

    printf("Initialised.");
    return 0;
}