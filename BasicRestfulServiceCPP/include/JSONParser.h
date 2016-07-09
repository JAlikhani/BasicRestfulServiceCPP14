//============================================================================
// Name        : JSONParser.h
// Author      : J.Alikhani
// Version     : 1.0
// Copyright   : @2016 RestfulServiceCpp
// Description : Restful Service in Modern C++14
//============================================================================

#ifndef JSONPARSER_H_
#define JSONPARSER_H_

#include <Headers.h>
#include <json.h>
#include <json-forwards.h>

using namespace std;

class JSONParser {
	public:
		string Books(string httpInput);
};

#endif /* JSONPARSER_H_ */
