#ifndef SCORE_HEADER
#define SCORE_HEADER

#include <SFML\Graphics.hpp>

class Score
{
private:
	sf::Text scoreText;
	sf::Font font;
	int score_value;

public:
	void Init()
	{
		if (!font.loadFromFile("Assets/fonts/DejaVuSansCondensed.ttf"))
			return;

		score_value = 0;

		scoreText.setFont(font);
		scoreText.setCharacterSize(20);
		scoreText.setColor(sf::Color::White);
		scoreText.setPosition(sf::Vector2f(15, 15));
	}
	void Add() { score_value++; }
	void Reset() { score_value = 0; }
	void Show(sf::RenderWindow& wnd)
	{
		scoreText.setString("Score: " + std::to_string(this->score_value));
		wnd.draw(scoreText);
	}
};

#endif