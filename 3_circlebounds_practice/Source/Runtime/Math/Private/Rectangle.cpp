#include "Precompiled.h"

Rectangle::Rectangle(const std::vector<Vector2> InVertices)
{
	// 직접 구현해보시오.
	for (auto it = InVertices.begin(); it != InVertices.end(); ++it)
	{
		Max.X = it->X > Max.X ? it->X : Max.X;
		Max.Y = it->Y > Max.Y ? it->Y : Max.Y;

		Min.X = it->X < Min.X ? it->X : Min.X;
		Min.Y = it->Y < Min.Y ? it->Y : Min.Y;
	}
}