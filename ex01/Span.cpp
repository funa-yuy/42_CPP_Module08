#include"Span.hpp"

/*
 * デフォルトコンストラクタ
 */
Span::Span() {};


/*
 * コンストラクタ
 */
Span::Span(unsigned int n) : _maxSize(n) {
	_vec.reserve(n);
};

/*
 * コピーコンストラクタ
 */
Span::Span(const Span& copy) {
	_maxSize = copy._maxSize;
	_vec = copy._vec;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Span &Span::operator=(const Span& copy) {
	if (this != &copy)
	{
		_maxSize = copy._maxSize;
		_vec = copy._vec;
	}
	return (*this);
}

/*
 * デストラクタ
 */
Span::~Span() {}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

/*
 * 単一の数値を追加
 */
void Span::addNumber(int value) {
	if (_vec.size() < _maxSize)
		_vec.push_back(value);
	else
		throw std::range_error("すでに埋まってます");
};

/*
 * イテレータの範囲を指定して、複数の数値を追加
 */
void Span::addNumber(int pos, const std::vector<int>& values) {
	if (pos < 0 || pos > static_cast<int>(_vec.size()))
		throw std::out_of_range("指定位置が無効です");
	if (_vec.size() + values.size() > _maxSize)
		throw std::range_error("すでに埋まってます");
	_vec.insert(_vec.begin() + pos, values.begin(), values.end());
};


/*
 * 格納されているすべての数値間の最短範囲を返す。
 * 格納されている数値が1つもない場合、または1つしかない場合は、例外を投げる。
 */
unsigned int	Span::shortestSpan() {
	if (_vec.size() <= 1)
		throw std::range_error("格納されている数値が2つ未満です");
	std::vector<int> sorted= _vec;
	std::sort(sorted.begin(), sorted.end());
	int	min_diff = INT_MAX;
	for (size_t i = 0; i < _vec.size(); i++)
	{
		if (i + 1 < _vec.size() && min_diff > (sorted[i + 1] - sorted[i]))
			min_diff = sorted[i + 1] - sorted[i];
	}
	return (min_diff);
};

/*
 * 格納されているすべての数値間の最長範囲を返す。
 * 格納されている数値が1つもない場合、または1つしかない場合は、例外を投げる。
 */
unsigned int	Span::longestSpan() {
	if (_vec.size() <= 1)
		throw std::range_error("格納されている数値が2つ未満です");
	std::vector<int>::iterator	max = std::max_element(_vec.begin(), _vec.end());
	std::vector<int>::iterator	min = std::min_element(_vec.begin(), _vec.end());
	return (*max - *min);
};
