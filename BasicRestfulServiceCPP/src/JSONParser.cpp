//============================================================================
// Name        : JSONParser.cpp
// Author      : J.Alikhani
// Version     : 1.0
// Copyright   : @2016 RestfulServiceCpp
// Description : Restful Service in Modern C++14
//============================================================================

#include <JSONParser.h>

string SubString(string in, string start ) {

	string ret;
	size_t found = in.find(start);
	if (found!=string::npos) ret = in.substr(found);
	return ret;
}

JSONParser::JSONParser(string in) {
	string buff = SubString(in, "{");
	Json::Reader reader;
	Json::Value obj;
	reader.parse(buff, obj); // reader can also read strings
	const Json::Value myBooks = obj["book"]; // array of books
	for (unsigned int i = 0; i < myBooks.size(); i++){
		books[myBooks[i]["title"].asString()] = myBooks[i]["author"].asString();
	}
}

string JSONParser::Author(string title) {

	return books.find(title)->second;
}

string JSONParser::Books() {

	stringstream ss;
	int i = 1;
	for (auto& x: books) {
		std::cout << x.first << ": " << x.second << '\n';
		ss << i++ << ":" << endl;
		ss << "title: " << x.first << endl;
		ss << "author: " << x.second << endl;
		ss << endl;
	}
	return ss.str();
}





