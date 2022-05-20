#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project5.1(C)\Project5.1(C)\Complex2.cpp"
#include "D:\Study\ООП\Project5.1(C)\Project5.1(C)\Complex2.h"
#include "D:\Study\ООП\Project5.1(C)\Project5.1(C)\Complex.cpp"
#include "D:\Study\ООП\Project5.1(C)\Project5.1(C)\Complex.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a; 
			Complex2 b(2, 1);
			Complex2 c(2, 1);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
