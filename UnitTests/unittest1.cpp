#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ArxHelloWorld/wibble.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			wibble helloworld;
			Assert::AreEqual(15, helloworld.wobble(3));
			
		}

	};
}