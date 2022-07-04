#ifndef TITLE_SCENE_H_
#define TITLE_SCENE_H_

#include <Scene.h>

class TitleScene : public Mani::Scene {
public:
	TitleScene();
	~TitleScene();

public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void End() override;
};

#endif // !TITLE_SCENE_H_
