// Precedence And Associativity (연산자 결합 법칙)
// a + b * c - d / e - f + g
// 1) b * c = b'
// 2) d / e = d'
// 3) a + b' = a'
// 4) a' - d' - f + g (교환법칙 성립)
// 순서를 바꾸고 싶을 때는 괄호들 (), {}, [] 사용한다.

// https://en.cppreference.com/w/cpp/language/operator_precedence
// https://docs.microsoft.com/ko-kr/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170

void precedenceAssociativity() {
  int a{6};
  int b{3};
  int c{8};
  int d{9};
  int e{3};
  int f{2};
  int g{5};

  int result = a + b * c - d / e - f + g;

  std::cout << "result : " << result << std::endl;
}