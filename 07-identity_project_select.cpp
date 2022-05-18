// 证同函数，任何数值通过此函数后不会有任何改变
template <class T>
struct identity : public unary_function<T, T> {
  const T& operator()(const T& x) const {
    return x;
  }
};

// 选择函数，接受一个pair，传回第一个元素
template <class Pair>
struct select1st : public unary_function<Pair, typename Pair::first_type>
{
  const typename Pair::first_type& operator()(const Pair& x) const {
    return x.first;
  }
};
// 选择函数，接受一个pair，传回第二个元素
template <class Pair>
struct select2end : public unary_function<Pair, typename Pair::second_type>
{
  const typename Pair::second_type& operator()(const Pair& x) const {
    return x.second;
  }
};

// 投射函数，传回第一参数，忽略第二参数
template <class Arg1, class Arg2>
struct project1st : public binary_function<Arg1, Arg2, Arg1> {
  Arg1 operator()(const Arg1& x, const Arg2&) const {
    return x;
  }
};
// 投射函数，传回第二参数，忽略第一参数
template <class Arg1, class Arg2>
struct project2nd : public binary_function<Arg1, Arg2, Arg2> {
  Arg2 operator()(const Arg1&, const Arg2& y) const {
    return y;
  }
};