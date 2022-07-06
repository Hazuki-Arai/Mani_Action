#ifndef LOAD_SCENE_H_
#define LOAD_SCENE_H_

#include <Scene.h>

class BaseLoader;

class LoadScene : public Mani::Scene {
public:
	LoadScene();
	~LoadScene();

public:
	void Initialize() override;;
	void Update() override;
	void Draw() override;
	void End() override;

private:
	void Load();

private:
	std::vector<BaseLoader> m_loaders_;
	int m_current_load_;
};

#endif // !LOAD_SCENE_H_
