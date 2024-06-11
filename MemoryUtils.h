#pragma once
#include <ntddk.h>

NTSTATUS ReadProcessMemory(PEPROCESS Process, PVOID SourceAddress, PVOID TargetAddress, SIZE_T Size);
