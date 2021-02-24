#include <iostream>

int main(void)
{
	int num;
	std::cout << "단수를 입력하세요";
	std::cin >> num;
	for (int i = 0; i < 9; i++)
	{
		std::cout << num << "*" << i + 1 << "=" << num * (i + 1) << "입니다" << std::endl;
	}

	std::cout << "다음 문제입니다";
	int salary;
	while (1) {
		std::cout << "판매 금액을 입력하세요";
		std::cin >> salary;
		if (salary == -1)
			break;
		std::cout << "이번 달 급여" << 50 + salary * 0.12 << "원";

	}
	return 0;

}