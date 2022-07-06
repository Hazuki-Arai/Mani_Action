#ifndef PLAYER_H_
#define PLAYER_H_

#include <Character.h>

class Player : public Mani::Character {
public:
	Player();
	~Player();

public:
	void VariableInit() override;
	void VariableUpdate() override;
	void VariableDraw() override;
	void VariableEnd() override;
};

#endif // !PLAYER_H_
