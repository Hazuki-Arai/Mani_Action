#include "GameFrame.h"
#include <GameSetting.h>
#include <Input.h>
#include "../Scene/Title/TitleScene.h"
#include "../Scene/Play/PlayScene.h"
#include "../Scene/Result/ResultScene.h"
#include "../Scene/Enum/SceneID.h"

using namespace Mani;

GameFrame::GameFrame() :
	MainFrame{} {
	GameSetting::AppEndKeyCode() = 0x01; // EscapeÉLÅ[
}

GameFrame::~GameFrame() {

}

void GameFrame::Initialize() {
	m_scene_manager_.AddScene(std::make_shared<TitleScene>());
	m_scene_manager_.AddScene(std::make_shared<PlayScene>());
	m_scene_manager_.AddScene(std::make_shared<ResultScene>());
	m_scene_manager_.SceneChange((int)SceneID::TITLE);
}

void GameFrame::End() {

}