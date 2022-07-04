#include "PlayScene.h"
#include "../Enum/SceneID.h"
#include <DxLib.h>

PlayScene::PlayScene() :
	Scene{(int)SceneID::PLAY, (int)SceneID::Result} {

}

PlayScene::~PlayScene() {

}

void PlayScene::Initialize() {

}

void PlayScene::Update() {

}

void PlayScene::Draw() {
	DrawStringF(640, 360, "ƒvƒŒƒC", GetColor(255, 255, 255));
}

void PlayScene::End() {

}