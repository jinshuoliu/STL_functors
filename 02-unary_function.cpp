// 所有的一元仿函数都继承此类
template <class Arg, class Result>
struct unary_function {
  typedef Arg argument_type;
  typedef Result result_type;
};

// 仿函数继承了unary_function，其用户就可以取得该仿函数的参数型别以及返回值
// 此仿函数继承了unary_function
template <class T>
struct negate : public unary_function<T, T> {
  T operator()(const T& x) const {
    return -x;
  }
};