#ifndef BASE_LOADER_H_
#define BASE_LOADER_H_

#include <vector>
#include <string>

class BaseLoader {
public:
	BaseLoader(const std::string& file_name);
	virtual ~BaseLoader() = 0;

public:
	void Update();
	bool IsEnd() const;

protected:
	/// <summary>
	/// ロード処理
	/// </summary>
	/// <returns>ロードの成否</returns>
	virtual bool Load() = 0;

protected:
	std::vector<std::vector<std::string>> m_load_list_;
	int m_current_load_num_;
};

#endif // !BASE_LOADER_H_