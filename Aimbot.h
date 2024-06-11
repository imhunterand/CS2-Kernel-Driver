#pragma once
#include <ntddk.h>

typedef struct _VECTOR3 {
    float x;
    float y;
    float z;
} VECTOR3;

float CalculateDistance(VECTOR3 pos1, VECTOR3 pos2);
void AimAtTarget(VECTOR3 targetPos, VECTOR3 playerPos);
