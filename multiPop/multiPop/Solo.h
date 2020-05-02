#pragma once
class Solo : public Mob
{
public:
	Solo()
	{
		life = 1;
	}

	Solo(int X, int Y, float Angle, int Radius)	: Mob(X,Y,Angle,Radius)
	{

		dx = rand() % 8 - 4;
		dy = rand() % 8 - 4;
		name = "Solo";
		box.setSize(Vector2f(35, 50));
		box.setOrigin(Vector2f(17.5, 25));
		box.setFillColor(sf::Color(5, 80, 200));
	}

	void update(float xx, float yy)
	{
		float hyp = sqrt((x - xx) * (x - xx) + (y - yy) * (y - yy));
		x += (xx - x) / hyp;
		y += (yy - y) / hyp;

		if (x > W) 
			x = 0;  
		if (x < 0) 
			x = W;
		if (y > H) 
			y = 0;  
		if (y < 0) 
			y = H;
	}

};