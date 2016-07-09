//============================================================================
// Name        : Http.h
// Author      : J.Alikhani
// Version     : 1.0
// Copyright   : @2016 RestfulServiceCpp
// Description : Restful Service in Modern C++14
//============================================================================
#ifndef HTTP_H_
#define HTTP_H_

#include "../include/Headers.h"

using namespace std;

class Http {
	public:
		string Request(string hostName, int port, string path, string contentType);
};

#endif /* HTTP_H_ */
