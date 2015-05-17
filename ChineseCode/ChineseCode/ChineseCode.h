#include <iostream>
using namespace std;
#include <atlstr.h>

class ChineseCode
{
public:
	static void UTF_8ToUnicode(wchar_t* pOut,char *pText);  // ��UTF-8ת����Unicode  
	
	static void UnicodeToUTF_8(char* pOut,wchar_t* pText);  //Unicode ת����UTF-8  
	
	static void UnicodeToGB2312(char* pOut,wchar_t uData);  // ��Unicode ת���� GB2312    
	
	static void Gb2312ToUnicode(wchar_t* pOut,char *gbBuffer);// GB2312 ת���ɡ�Unicode  
	
	static void GB2312ToUTF_8(CString& pOut,char *pText, int pLen);//GB2312 תΪ UTF-8  
	
	static void UTF_8ToGB2312(CString &pOut, char *pText, int pLen);//UTF-8 תΪ GB2312 

	static CString URLEncode(CString sIn);

	//char* BytesToUtf8(string src, char* dst, int* nout);
};

inline BYTE toHex(const BYTE &x)
{
	return x > 9 ? x + 55: x + 48;
}