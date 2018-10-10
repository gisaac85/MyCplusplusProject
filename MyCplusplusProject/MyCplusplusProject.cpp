// MyCplusplusProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("First Test Case")
{
	REQUIRE(1 == 1);
}

TEST_CASE("Second Test Case")
{
	REQUIRE(2/2 == 1);
}

TEST_CASE("Third Test Case")
{
	REQUIRE(1/1 == 1);
}
