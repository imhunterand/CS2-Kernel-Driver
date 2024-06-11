#include "Aimbot.h"
#include <math.h>

float CalculateDistance(VECTOR3 pos1, VECTOR3 pos2) {
    return sqrt(pow(pos2.x - pos1.x, 2) + pow(pos2.y - pos1.y, 2) + pow(pos2.z - pos1.z, 2));
}

void AimAtTarget(VECTOR3 targetPos, VECTOR3 playerPos) {
    // Implementasikan logika untuk mengatur sudut bidikan pemain menuju targetPos
    // Ini akan melibatkan perhitungan sudut dan menulisnya ke memori permainan
}
