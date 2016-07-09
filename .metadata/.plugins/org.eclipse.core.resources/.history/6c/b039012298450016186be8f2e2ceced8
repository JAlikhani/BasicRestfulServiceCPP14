//============================================================================
// Name        : JSONParser.cpp
// Author      : J.Alikhani
// Version     : 1.0
// Copyright   : @2016 RestfulServiceCpp
// Description : Restful Service in Modern C++14
//============================================================================

#include "../include/JSONParser.h"

string SubString(string in, char after ) {

	string buff {""};
	bool start = false;

	for(auto n:in)
	{
		if(start) {
			buff += n;
		}
		else if(n == after) {
			buff += n;
			start = true;
		}
	}
	return buff;
}

string JSONParser::Books(string httpInput) {

	stringstream ss;
	string buff = SubString(httpInput, '{');
	Json::Reader reader;
	Json::Value obj;
	reader.parse(buff, obj); // reader can also read strings
	const Json::Value& books = obj["book"]; // array of characters
	for (unsigned int i = 0; i < books.size(); i++){
		ss << i + 1 << ":" << endl;
		ss << "title: " << books[i]["title"].asString() << endl;
		ss << "author: " << books[i]["author"].asString() << endl;
		ss << endl;
	}
	return ss.str();
}





