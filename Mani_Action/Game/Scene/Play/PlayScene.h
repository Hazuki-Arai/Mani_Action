#ifndef PLAY_SCENE_H_
#define PLAY_SCENE_H_

#include <Scene.h>

class PlayScene : public Mani::Scene {
public:
	PlayScene();
	~PlayScene();

public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void End() override;
};

#endif // !PLAY_SCENE_H_
