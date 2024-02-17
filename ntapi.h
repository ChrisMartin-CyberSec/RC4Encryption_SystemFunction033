#pragma once
#include <Windows.h>

/*
	The SystemFunction032/033 accepts two paramaters of UNICODE_STRING (USTRING)
	The UNICODE_STRING structure can be found on several sources including MSDN (https://learn.microsoft.com/en-us/windows/win32/api/subauth/ns-subauth-unicode_string)
		-Substitute the PWSTR to PUCHAR for the Buffer to work with the unsigned char shellcode
*/
typedef struct _UNICODE_STRING
{
	DWORD Length;
	DWORD MaxLength;
	PUCHAR Buffer;
} USTRING, *PUSTRING;

typedef NTSTATUS(NTAPI* fnSystemFunction033)
(
	PUSTRING Data,
	PUSTRING Key
);


