// 加法
template <class T>
struct plus : public binary_function<T, T, T> {
  T operator()(const T& x, const T& y) const {
    return x + y;
  }
};

// 减法
template <class T>
struct minus : public binary_function<T, T, T> {
  T operator()(const T& x, const T& y) const {
    return x - y;
  }
};

// 乘法
template <class T>
struct multiplies : public binary_function<T, T, T> {
  T operator()(const T& x, const T& y) const {
    return x * y;
  }
};

// 除法
template <class T>
struct divides : public binary_function<T, T, T> {
  T operator()(const T& x, const T& y) const {
    return x / y;
  }
};

// 取余
template <class T>
struct modulus : public binary_function<T, T, T> {
  T operator()(const T& x, const T& y) const {
    return x % y;
  }
};

// 否定
template <class T>
struct negate : public unary_function<T, T> {
  T operator()(const T& x) const {
    return -x;
  }
};

// 证同元素
template <class T>
inline T identity_element(plus<T>){
  return T(0);
}
template <class T>
inline T identity_element(multiplies<T>){
  return T(1);
}