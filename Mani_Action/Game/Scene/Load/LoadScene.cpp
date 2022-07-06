#include "LoadScene.h"
#include "../Enum/SceneID.h"
#include "../../Other/Loader/ModelLoader/ModelLoader.h"
#include "../../Other/Loader/AnimLoader/AnimLoader.h"
#include "../../Other/Loader/ImageLoader/ImageLoader.h"

using namespace Mani;

LoadScene::LoadScene() :
	Scene{ (int)SceneID::LOAD, (int)SceneID::TITLE },
	m_loaders_{},
	m_current_load_{ 0 } {

}

LoadScene::~LoadScene() {

}

void LoadScene::Initialize() {
	m_loaders_.push_back(ModelLoader{ "Resource/Model/LoadModelList" });
	m_loaders_.push_back(AnimLoader{ "Resource/Anim/LoadAnimList" });
	m_loaders_.push_back(ImageLoader{ "Resource/Image/LoadImageList" });
}

void LoadScene::Update() {
	if (m_current_load_ >= m_loaders_.size()) {
		m_is_end_ = true;
	}

	m_loaders_[m_current_load_].Update();

	if (m_loaders_[m_current_load_].IsEnd()) {
		m_current_load_++;
	}
}

void LoadScene::Draw() {

}

void LoadScene::End() {

}

void LoadScene::Load() {

}