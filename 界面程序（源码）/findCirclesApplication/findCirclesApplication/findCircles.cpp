#include "findCircles.h"

int CoreAlgorithm::disPnt(Point2i srcPnt, Point2i dstPnt)
{
	int dis;
	dis = pow((srcPnt.x - dstPnt.x), 2) + pow((srcPnt.y-dstPnt.y),2);
	return dis;
}

