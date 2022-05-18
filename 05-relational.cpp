// 等于
template <class T>
struct equal_to : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x == y;
  }
};

// 不等于
template <class T>
struct not_equal_to : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x != y;
  }
};

// 大于
template <class T>
struct greater : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x > y;
  }
};

// 大于或等于
template <class T>
struct less : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x < y;
  }
};

// 小于
template <class T>
struct greater_equal : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x >= y;
  }
};

// 小于或等于
template <class T>
struct less_equal : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x <= y;
  }
};
