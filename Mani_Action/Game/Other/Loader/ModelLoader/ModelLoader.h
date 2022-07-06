#ifndef MODEL_LOADER_H_
#define MODEL_LOADER_H_

#include "../BaseLoader/BaseLoader.h"

class ModelLoader : public BaseLoader {
public:
	ModelLoader(const std::string& file_name);
	~ModelLoader();

protected:
	bool Load() override;
};

#endif // !MODEL_LOADER_H_