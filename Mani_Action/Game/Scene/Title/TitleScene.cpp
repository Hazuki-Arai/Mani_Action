#include "TitleScene.h"
#include "../Enum/SceneID.h"
#include <DxLib.h>
#include <Input.h>

using namespace Mani;

TitleScene::TitleScene() :
	Scene{(int)SceneID::TITLE, (int)SceneID::PLAY} {

}

TitleScene::~TitleScene() {

}

void TitleScene::Initialize() {

}

void TitleScene::Update() {
	if (Input::IsKeyDown(KEY_INPUT_RETURN)) {
		m_is_end_ = true;
	}
}

void TitleScene::Draw() {
	DrawStringF(640, 360, "ƒ^ƒCƒgƒ‹", GetColor(255, 255, 255));
}

void TitleScene::End() {

}