//============================================================================
// Name        : BasicRestfulServiceCPP.cpp
// Author      : J.Alikhani
// Version     : 1.0
// Copyright   : @2016 RestfulServiceCpp
// Description : Restful Service in Modern C++14
//============================================================================

#include <Http.h>
#include <JSONParser.h>
//#include <json.hpp>

using namespace std;

int main(int argc, char const *argv[]) {
	Http http;
	stringstream ss;
	// See Web Service source file in https://github.com/JAlikhani/BooksWebServiceNodeJS
	// Web service temporarily deployed in Heroku
	// Output JSON file looks like:
	/*
	 {
		   "book": [

		      {
		         "id":"01",
		         "title": "In Search of Lost Time",
		         "author": "Marcel Proust"
		      },

		      {
		         "id":"02",
		         "title": "Moby Dick",
		         "author": "Herman Melville"
		      },

		      {
		         "id":"03",
		         "title": "Hamlet",
		         "author": "William Shakespeare"
		      },

		      {
		         "id":"04",
		         "title": "The Odyssey",
		         "author": "Homer"
		      }
		   ]
		}
	 */
	ss << http.Request("floating-fjord-16663.herokuapp.com", 80, "/books", "application/json");
	JSONParser jsonParser(ss.str());
	cout << jsonParser.Books();
}
