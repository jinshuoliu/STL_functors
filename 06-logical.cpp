// And
template <class T>
struct logical_and : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x && y;
  }
};

// Or
template <class T>
struct logical_or : public binary_function<T, T, bool> {
  T operator()(const T& x, const T& y) const {
    return x || y;
  }
};

// Not
template <class T>
struct logical_not : public unary_function<T, bool> {
  T operator()(const T& x) const {
    return !x;
  }
};
