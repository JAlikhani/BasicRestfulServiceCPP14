//============================================================================
// Name        : Http.cpp
// Author      : J.Alikhani
// Version     : 1.0
// Copyright   : @2016 RestfulServiceCpp
// Description : Restful Service in Modern C++14
//============================================================================

#include "../include/Http.h"

string Http::Request(string hostName, int port, string path, string contentType) {

int sock;
struct sockaddr_in client;
int PORT = port;
string out;

	struct hostent * host = gethostbyname(hostName.c_str());

	if ((host == NULL) || (host->h_addr == NULL)) {
		return "Error retrieving DNS information.\n";
	}

	bzero(&client, sizeof(client));
	client.sin_family = AF_INET;
	client.sin_port = htons(PORT);
	memcpy(&client.sin_addr, host->h_addr, host->h_length);

	sock = socket(AF_INET, SOCK_STREAM, 0);

	if (sock < 0) {
		return "Error creating socket.\n";
	}

	if (connect(sock, (struct sockaddr *)&client, sizeof(client)) < 0) {
		close(sock);
		return "Could not connect\n";
	}

	stringstream ss;
	ss << "GET " << path.c_str() << " HTTP/1.1\r\n"
				   << "Host:" << hostName.c_str() << "\r\n"
				   << "Accept: " << contentType.c_str()
				   << "\r\n\r\n";

	string request = ss.str();

	if (send(sock, request.c_str(), request.length(), 0) != (int)request.length()) {
		return "Error sending request.\n";
	}

	char cur;
	while (read(sock, &cur, 1) > 0) {
		out.append(1, cur);
	}
	return out;
}

