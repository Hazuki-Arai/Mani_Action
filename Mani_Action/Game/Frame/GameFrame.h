#ifndef GAME_FRAME_H_
#define GAME_FRAME_H_

#include <MainFrame.h>

class GameFrame : public Mani::MainFrame {
public:
	GameFrame();
	~GameFrame();

public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void End() override;
};

#endif // !GAME_FRAME_H_
