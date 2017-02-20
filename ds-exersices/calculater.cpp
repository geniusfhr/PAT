#include <iostream>
#include <cctype>
#include <stack>
#include <map>
#include <vector>
#include <cstdlib>

std::stack<char> backExpressStack;
std::stack<char> operatorStack;
std::map<char, int> priorMap;

/* 判断是否为操作符 */
bool isOperator(char c)					
{
	switch (c)
	{
	case '+':
	case '-':
	case '*':
	case '/':
		return true;
	default:
		return false;
	}
}

/* 判断是否为操作数 */
bool isOperand(char c)
{
	return std::isdigit(c);
}

/* 去除空格 得到有效表达字符 */
char getToken()
{
	char c = std::getchar();
	if (std::isblank(c)) {
		c = getToken();				
	}
	return c;
}

/* 中缀转后缀表达式 */
void midToBack()
{
	char current;
	while ((current = getToken()) != '\n' ) {
		if (isOperand(current)) {						//操作数
			backExpressStack.push(current);
		}

		if (isOperator(current)) {						//操作符
				while ((!operatorStack.empty()) && 
					(operatorStack.top() != '(') && 
					(priorMap[operatorStack.top()] >= priorMap[current])) {
					backExpressStack.push(operatorStack.top());
					operatorStack.pop();
				}
				operatorStack.push(current);
		}

		if (current == '(') {
			operatorStack.push(current);
		    midToBack();
		}

		if (current == ')') {
			while (operatorStack.top() != '(')
			{
				backExpressStack.push(operatorStack.top());
				operatorStack.pop();
			}
			operatorStack.pop();
			return;
		}
	}

	while (!operatorStack.empty()) {
		backExpressStack.push(operatorStack.top());
		operatorStack.pop();
	}

	
}

/* 计算 a先弹出 为第二操作数 */
int caculate(char c, int a, int b)
{
	switch (c)
	{
	case '+':
		return b + a;
	case '-':
		return b - a;
	case '*':
		return b * a;
	case '/':
		return b / a;
	default:
		break;
	}
}

int charToInt(char c)
{
	return c - '0';
}

int main()
{
	priorMap['+'] = 10;
	priorMap['-'] = 10;
	priorMap['*'] = 20;
	priorMap['/'] = 20;
	//priorMap['('] = -10;

	midToBack();

	std::stack<char> s;
	std::vector<char> v;

	while (!backExpressStack.empty()) {
		s.push(backExpressStack.top());
		backExpressStack.pop();
	}

	std::cout << "后缀表达式 : ";
	
	while (!s.empty()) {
		std::cout << s.top() << " ";
		v.push_back(s.top());
		s.pop();
	}

	std::stack<int> numberStack;
	
	for (std::vector<char>::iterator it = v.begin(); it != v.end(); it++) {
		if (isOperand(*it)) {
			
			numberStack.push(charToInt(*it));
			continue;
		} 

		if (isOperator(*it)) {
			int a = numberStack.top();
			numberStack.pop();
			int b = numberStack.top();
			numberStack.pop();
			numberStack.push(caculate(*it, a, b));
		}
	}

	std::cout << std::endl << "计算结果是:" << numberStack.top() << std::endl;

	return 0;
}











