#include "PlayScene.h"
#include "../Enum/SceneID.h"
#include <DxLib.h>
#include <Input.h>

using namespace Mani;

PlayScene::PlayScene() :
	Scene{(int)SceneID::PLAY, (int)SceneID::RESULT} {

}

PlayScene::~PlayScene() {

}

void PlayScene::Initialize() {

}

void PlayScene::Update() {
	if (Input::IsKeyDown(KEY_INPUT_RETURN)) {
		m_is_end_ = true;
	}
}

void PlayScene::Draw() {
	DrawStringF(640, 360, "ƒvƒŒƒC", GetColor(255, 255, 255));
}

void PlayScene::End() {

}