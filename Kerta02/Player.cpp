#include "Player.h"


Player::Player()
{
}

void Player::setPosition(Vector2& position)
{
	this->position = position;
}
Vector2 Player::getPosition()
{
	return position;
}

Player::~Player()
{
}
