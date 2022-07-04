#include "TitleScene.h"
#include "../Enum/SceneID.h"
#include <DxLib.h>

TitleScene::TitleScene() :
	Scene{(int)SceneID::TITLE, (int)SceneID::PLAY} {

}

TitleScene::~TitleScene() {

}

void TitleScene::Initialize() {

}

void TitleScene::Update() {

}

void TitleScene::Draw() {
	DrawStringF(640, 360, "ƒ^ƒCƒgƒ‹", GetColor(255, 255, 255));
}

void TitleScene::End() {

}