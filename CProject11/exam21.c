#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

Point Addpoint(Point pos1, Point pos2)
{
	Point pos = {pos1.xpos+pos2.xpos,pos1.ypos+pos2.ypos};
	
	return pos;
}
Point Minpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos - pos2.xpos,pos1.ypos - pos2.ypos };

	return pos;
}
int main()
{
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	
	Point result;
	result = Addpoint(pos1, pos2);
	printf("[%d,%d]\n", result.xpos, result.ypos);
	result = Minpoint(pos1, pos2);
	printf("[%d,%d]\n", result.xpos, result.ypos);

	return 0;
}