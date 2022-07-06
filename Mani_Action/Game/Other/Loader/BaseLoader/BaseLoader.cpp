#include "BaseLoader.h"
#include "../CSVFileLoader/CSVFileLoader.h"

BaseLoader::BaseLoader(const std::string& file_name) :
	m_load_list_{ CSVFileLoader::LoadAndSplit(file_name) },
	m_current_load_num_{ 0 }{

}

BaseLoader::~BaseLoader() {

}

void BaseLoader::Update() {
	// �t�@�C���̃��[�h���I�����Ă��炸�A�t�@�C���̃��[�h�ɐ���������
	if (!IsEnd() && Load()) {
		// �ǂݍ��݃t�@�C�������J�E���g
		m_current_load_num_++;
	}
}

bool BaseLoader::IsEnd() const {
	return (m_current_load_num_ >= m_load_list_.size());
}