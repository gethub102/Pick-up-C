#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <ctype.h>
#include <netinet/in.h>

#define SERVER_PORT 8080
#define BUFFER_SIZE 1024

int main(void) {
	
	int sfd, cfd;
	int len, i;
	struct sockaddr_in serv_addr, clie_addr;
	char buf[BUFFER_SIZE], clie_ip[128];

	socklen_t clie_addr_len;
	
	// ipv4, tcp
	sfd = socket(AF_INET, SOCK_STREAM, 0);

	/* init ip addr with ipaddr and port  */
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERVER_PORT);

	/* INADDR_ANY bind any ip  */
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(sfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

	/* 64 simutanously connection  */
	listen(sfd, 64);

	/* 初始化地址结构体长度  */
	clie_addr_len = sizeof(clie_addr);
	printf(" accepting client connecting ...  \n");
	cfd = accept(sfd, (struct sockaddr *)&clie_addr, &clie_addr_len);
	printf("client IP: %s\tPORT: %d\n", 
		inet_ntop(AF_INET, &clie_addr.sin_addr.s_addr, clie_ip, sizeof(clie_ip)), 
		ntohs(clie_addr.sin_port)
		);

	do {
		len = read(cfd, buf, sizeof(buf));
		write(STDOUT_FILENO, buf, len);
		for (i = 0; i < len; i++) {
			buf[i] = toupper(buf[i]);
		}
		write(cfd, buf, len);
	} while (1);

	close(cfd);
	close(sfd);
	return 0;
}
