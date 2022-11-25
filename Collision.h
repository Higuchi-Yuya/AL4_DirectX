#pragma once

#include "CollisionPrimitive.h"

class Collision
{
public:

	// 球と平面の当たり判定
	static bool CheckSphere2Plane(const Sphere& sphere, const Plane& plane, DirectX::XMVECTOR* inter = nullptr);
};

