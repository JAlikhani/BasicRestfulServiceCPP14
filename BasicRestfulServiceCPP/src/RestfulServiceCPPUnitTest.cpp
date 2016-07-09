//============================================================================
// Name        : RestfulServiceCPPUnitTest.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_JSON_MODULE JSONTest
#define BOOST_TEST_MODULE Suites
#include <boost/test/included/unit_test.hpp>
#include <iostream>
#include <JSONParser.h>

using namespace std;

string in1 = R"({
		   "book": [

		      {
		         "id":"01",
		         "title": "Alice's Adventures in Wonderland",
		         "author": "Lewis Carroll"
		      },

		      {
		         "id":"02",
		         "title": "The Hitchhiker's Guide to the Galaxy",
		         "author": "Douglas Adams"
		      }
		   ]
		})";


BOOST_AUTO_TEST_SUITE()

BOOST_AUTO_TEST_CASE(ValidJson)
{
	JSONParser jsonParser(in1);
	BOOST_CHECK(jsonParser.Author("Alice's Adventures in Wonderland").compare("Lewis Carroll") == 0);
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE()

BOOST_AUTO_TEST_CASE(InvalidJson)
{
	JSONParser jsonParser(in1);
	BOOST_CHECK(jsonParser.Author("Alice's Adventures in Wonderland").compare("Carroll") != 0);
}

BOOST_AUTO_TEST_SUITE_END()

