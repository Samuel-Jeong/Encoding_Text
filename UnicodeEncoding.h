#pragma once
#include "Type.h"
#include "Define.h"

namespace core
{
	size_t CalcUnicodeCchFromASCII(LPCSTR pSrc, size_t tSrcCch, size_t* ptSrcReadCch);

	size_t ASCII_TO_ASCII(const char* pSrc, size_t tSrcCch, char* pDest, size_t tDestCch);
	size_t UTF8_TO_UTF8(const char* pSrc, size_t tSrcCch, char* pDest, size_t tDestCch);
	size_t UTF16_TO_UTF16(const WORD* pSrc, size_t tSrcCch, WORD* pDest, size_t tDestCch);
	size_t UTF32_TO_UTF32(const DWORD* pSrc, size_t tSrcCch, DWORD* pDest, size_t tDestCch);

	size_t UTF8_TO_UTF16(const char* pSrc, size_t tSrcCch, WORD* pDest, size_t tDestCch, size_t* ptReadSize = NULL);
	size_t UTF16_TO_UTF8(const WORD* pSrc, size_t tSrcCch, char* pDest, size_t tDestCch);

	size_t ASCII_TO_UTF16(const char* pSrc, size_t tSrcCch, WORD* pDest, size_t tDestCch, size_t* ptReadSize = NULL);
	size_t UTF16_TO_ASCII(const WORD* pSrc, size_t tSrcCch, char* pDest, size_t tDestCch);
	size_t UTF8_TO_UTF32(const char* pSrc, size_t tSrcCch, DWORD* pDest, size_t tDestCch, size_t* ptReadSize = NULL);
	size_t UTF32_TO_UTF8(const DWORD* pSrc, size_t tSrcCch, char* pDest, size_t tDestCch);

	size_t ASCII_TO_UTF32(const char* pSrc, size_t tSrcCch, DWORD* pDest, size_t tDestCch, size_t* ptReadSize = NULL);
	size_t UTF32_TO_ASCII(const DWORD* pSrc, size_t tSrcCch, char* pDest, size_t tDestCch);	
	size_t UTF16_TO_UTF32(const WORD* pSrc, size_t tSrcCch, DWORD* pDest, size_t tDestCch);
	size_t UTF32_TO_UTF16(const DWORD* pSrc, size_t tSrcCch, WORD* pDest, size_t tDestCch);
}
