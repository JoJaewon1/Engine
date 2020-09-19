
#include "Precompiled.h"
#include<algorithm>

Circle::Circle(const std::vector<Vector2> InVertices)
{
	// 위치 정보를 받아 중심과 반지름의 값을 구하는 로직 ( 직접 구현할 것 )
	Vector2 sumPos;

	for (auto it = InVertices.begin(); it != InVertices.end(); ++it)
	{
		Center += *it;
	}
	Center /= InVertices.size();

	Radius = (*std::max_element(InVertices.begin(), InVertices.end(),
		[&](Vector2 const& InLeft, Vector2 const& InRight)
		{
			return (Center - InLeft).SizeSquared() < (Center - InRight).SizeSquared();
		}
	)).Size();
}
