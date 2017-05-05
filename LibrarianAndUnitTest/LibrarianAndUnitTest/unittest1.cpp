#include "stdafx.h"
#include "CppUnitTest.h"
#include"address.h"
#include"Date.h"
#include"DocGia.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LibrarianAndUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	
	public:
		
		TEST_METHOD(testgetMaSV)
		{
			DocGia a("DG01|trung|19/05/1996|dn|sv01|none");
			string s = "sv01";
			Assert::AreEqual(a.getMaSV(), s);
			
		}
		
		TEST_METHOD(testgetTenDocGia)
		{
			DocGia a("DG01|trung|19/05/1996|dn|sv01|none");
			string s = "trung";
			Assert::AreEqual(a.getTenDocGia(), s);
		}
		TEST_METHOD(testgetngaysinh)
		{
			DocGia a("DG01|trung|19/05/1996|dn|sv01|none");
			string s = "19/05/1996";
			Assert::AreEqual(a.getNgaySinh(), s);
		}
		TEST_METHOD(testgetDiaChi)
		{
			DocGia a("DG01|trung|19/05/1996|dn|sv01|none");
			string s = "dn";
			Assert::AreEqual(a.getDiaChi(), s);
		}
		TEST_METHOD(testgetSDT)
		{
			DocGia a("DG01|trung|19/05/1996|dn|sv01|none");
			string s = "none";
			Assert::AreEqual(a.getSdt(), s);
		}


	};
}