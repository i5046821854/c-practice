#include <iostream>

int main(void)
{
	int num;
	std::cout << "�ܼ��� �Է��ϼ���";
	std::cin >> num;
	for (int i = 0; i < 9; i++)
	{
		std::cout << num << "*" << i + 1 << "=" << num * (i + 1) << "�Դϴ�" << std::endl;
	}

	std::cout << "���� �����Դϴ�";
	int salary;
	while (1) {
		std::cout << "�Ǹ� �ݾ��� �Է��ϼ���";
		std::cin >> salary;
		if (salary == -1)
			break;
		std::cout << "�̹� �� �޿�" << 50 + salary * 0.12 << "��";

	}
	return 0;

}