#include "GameFrame.h"
#include <GameSetting.h>
#include <DxLib.h>
#include <Input.h>

using namespace Mani;

GameFrame::GameFrame() :
	MainFrame{} {
	GameSetting::AppEndKeyCode() = KEY_INPUT_ESCAPE;
}

GameFrame::~GameFrame() {

}

void GameFrame::Initialize() {

}

void GameFrame::Update() {
}

void GameFrame::Draw() {

}

void GameFrame::End() {

}