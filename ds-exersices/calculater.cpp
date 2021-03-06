#include <iostream>
#include <cctype>
#include <stack>
#include <map>
#include <vector>
#include <cstdlib>

std::stack<char> backExpressStack;
std::stack<char> operatorStack;
std::map<char, int> priorMap;

/* 判断是否为操作数 */
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
char current;
char getToken()
{
	char c = std::getchar();
	if (std::isblank(c)) {
		c = getToken();				
	}
	return c;
}

void err()
{
	std::cerr << "表达式输入不正确！" << std::endl;
}

int parseExpression();

int parseParen()
{
	operatorStack.push('(');
	
	if (parseExpression() == -1) {
		return -1;
	}

	if (current != ')') {
		return -1;
	}

	while (operatorStack.top() != '(') {
		backExpressStack.push(operatorStack.top());
		operatorStack.pop();
	}
	operatorStack.pop();
}

/* 解析操作数 ( ) 或者 单独数字 */
int parseOperand()
{
	current = getToken();
	if (current != '(' && !isOperand(current)) {
		return -1;
	}

	if (current == '(') {
		if (parseParen() == -1) {
			return -1;
		}

	} else if (isOperand(current)) {
		backExpressStack.push(current);
	}
	
}

int parsePair(char current);

/* 表达式 */
int parseExpression()
{
	if (parseOperand() == -1) {										//操作数
		return -1;
	}
	current = getToken();

	while (current != '\n' && current != ')') {			//操作符
		if (parsePair(current) == -1) {
			return -1;
		}
		current = getToken();
	}

	if (current == '\n') {
		while (!operatorStack.empty()) {
			backExpressStack.push(operatorStack.top());
			operatorStack.pop();
		}
	}

	return 0;
	
}

/* 操作符 */
int parseOperator(char current)
{
	if (!isOperator(current)) {
		return -1;
	}

	while ((!operatorStack.empty()) &&
		(operatorStack.top() != '(') &&
		(priorMap[operatorStack.top()] >= priorMap[current])) {
		backExpressStack.push(operatorStack.top());
		operatorStack.pop();
	}

	operatorStack.push(current);
}

/* parse such as +2 -1 operator&operand */
int parsePair(char current)
{
	if (parseOperator(current) == -1) {		//操作符
		return -1;
	}

	if (parseOperand() == -1) {				//操作数
		return -1;
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

	int result = parseExpression();
	if (result == -1) {
		err();
		return 0;
	}

	std::stack<char> s;
	std::vector<char> v;

	while (!backExpressStack.empty()) {
		s.push(backExpressStack.top());
		backExpressStack.pop();
	}

//	std::cout << "后缀表达式 : ";
	
	while (!s.empty()) {
	//	std::cout << s.top() << " ";
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











