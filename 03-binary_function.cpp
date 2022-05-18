// 所有的一元仿函数都继承此类
template <class Arg1, class Arg2, class Result>
struct binary_function {
  typedef Arg1 first_argument_type;
  typedef Arg2 second_argument_type;
  typedef Result result_type;
};

// 仿函数继承了unary_function，其用户就可以取得该仿函数的参数型别以及返回值
// 此仿函数继承了unary_function
template <class T>
struct plus : public binary_function<T, T, T> {
  T operator()(const T& x, const T& y) const {
    return x + y;
  }
};