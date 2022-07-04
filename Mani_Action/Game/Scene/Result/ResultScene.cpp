#include "ResultScene.h"
#include "../Enum/SceneID.h"
#include <DxLib.h>
#include <Input.h>

using namespace Mani;

ResultScene::ResultScene() :
	Scene{ (int)SceneID::RESULT, (int)SceneID::TITLE } {

}

ResultScene::~ResultScene() {

}

void ResultScene::Initialize(){

}

void ResultScene::Update() {
	if (Input::IsKeyDown(KEY_INPUT_RETURN)) {
		m_is_end_ = true;
	}
}

void ResultScene::Draw() {
	DrawStringF(640, 360, "ƒŠƒUƒ‹ƒg", GetColor(255, 255, 255));
}

void ResultScene::End() {

}