#ifndef RESULT_SCENE_H_
#define RESULT_SCENE_H_

#include <Scene.h>

class ResultScene : public Mani::Scene {
public:
	ResultScene();
	~ResultScene();

public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void End() override;
};

#endif // !RESULT_SCENE_H_
