//3번-진수간 변환
#include<iostream>
#include<string>
#include<bitset>
#include<cmath>
using namespace std;
void transform2(int num) {//10진수->2 진수변환
	if (num <= 0) {
		return;//10진수가 0보다 작거나 같으면 종료 후 다시 반환
	}
	transform2(num / 2);//인자를 2로 나눈 몫을 재귀호출
	cout << num % 2;// 인자를 2로 나눈 나머지 출력
}


void transform16(int num) {//10진수->16진수 변환 
	if (num <= 0) {
		return;
	}
	transform16(num / 16);//인자를 16으로 나눈 몫을 재귀호출
	//인자를 16으로 나눈 나머지계산
	if (num % 16 >= 10) {
		if (num % 16 == 10) {
			cout << "A";
		}
		else if (num % 16 == 11) {
			cout << "B";
		}
		else if (num % 16 == 12) {
			cout << "C";
		}
		else if (num % 16 == 13) {
			cout << "D";
		}
		else if (num % 16 == 14) {
			cout << "E";
		}
		else if (num % 16 == 15) {
			cout << "F";
		}
	}
	else {
		cout << num % 16;
	}

}
int main() {
	int num;
	cout << "-------진수변환기-------\n";
	cout << "입력할 진수를 선택하세요(2,10,16): ";
	cin >> num;
	if (num == 2) {//2진수를 입력받았을때
		int n;
		int n2;//입력받을 2진수
		cout << "변환할 진수를 선택하세요(2,10,16): ";
		cin >> n;//2진수에서 ->n진수 변환 
		if (n == 2) {//2진수->2진수변환
			cout<<"변환할 2진수입력: "; 
		 	cin>>n2;
		 	cout<<"2진수->2진수\n";
			cout << n2;
		}
		else if (n == 10) {//2진수->10진수변환
			cout<<"변환할 2진수입력: "; 
			cin>>n2;
			cout<<"2진수->10진수\n";
			int r = 0;
			for (int i = 0;n2 >= 1;i++) {
				r += (n2 % 10) * pow(2, i);
				n2 /= 10;
			}
			cout << r;
		}
		else if (n == 16) {//2진수->10진수->16진수변환
			cout<<"변환할 2진수입력: "; 
			cin>>n2;
			cout<<"2진수->16진수\n";
			int r = 0;
			for (int i = 0;n2 >= 1;i++) {
				r += (n2 % 10) * pow(2, i);
				n2 /= 10;
			}//2->10진수, r은 10진수
			transform16(r);
		}
		else {
			cout << "ERROR!!!2,10,16 중에 입력하세요!";
			return 0;
		}
	}
	else if(num==10){//10진수를 입력받았을때 
		int n;
		int n10;
		cout << "변환할 진수를 선택하세요(2,10,16): ";
		cin >> n;//10진수에서 ->n진수 변환 
		if(n==2){//10진수->2진수 변환 
			cout<<"변환할 10진수입력: "; 
			cin>>n10;
			cout<<"10진수->2진수\n";
			transform2(n10);
		}
		else if(n==10){//10진수->10진수 변환 
			cout<<"변환할 10진수입력: "; 
			cin>>n10;
			cout<<"10진수->10진수\n";
			cout<<n10;
		}
		else if(n==16){//10진수->16진수 변환 
			cout<<"변환할 10진수입력: "; 
			cin>>n10;
			cout<<"10진수->16진수\n";
			transform16(n10);
		} 
		else {
			cout << "ERROR!!!2,10,16 중에 입력하세요!";
			return 0;
		}
	} 
	else if(num==16){//16진수를 입력받았을때
		int n;
		int n16;// 입력받을 16진수 
		cout << "변환할 진수를 선택하세요(2,10,16): ";
		cin >> n;//16진수에서 ->n진수 변환
		if(n==2){//16진수->2진수 
			cout<<"변환할 16진수입력: "; 
			cin>>hex>>n16;
			cout<<"16진수->2진수\n";
			transform2(n16);
		} 
		else if(n==10){//16진수->10진수 
			cout<<"변환할 16진수입력: "; 
			cin>>hex>>n16;
			cout<<"16진수->10진수\n";
			cout << dec << n16 << endl;
			
		}
		else if(n==16){//16진수->16진수 
			cout<<"변환할 16진수입력: "; 
			cin>>n16;
			cout<<"16진수->16진수\n";
			cout<<n16;
			 
		}
		else {
			cout << "ERROR!!!2,10,16 중에 입력하세요!";
			return 0;
		}
	 
	}
}
	



//8번: 팩토리얼 계산


#include <iostream>
using namespace std;

// 재귀함수를 이용해서 팩토리얼 함수 구현
int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}
int main() {
	int f_num; // 사용자로부터 숫자를 입력받아서 저장 할 변수 f_num
	cout << "숫자를 입력해주세요>> ";
	cin >> f_num;
	
	cout << f_num << "! 을 계산하겠습니다....\n\n";
	cout << "계산결과>> " << factorial(f_num) << endl;
}

//7번-루트(제곱근)

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	cin >> num;
	cout << num << "의 제곱근은 " << sqrt(num) << "입니다" << endl;
	return 0;
}

//7번-x^y지수값

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int x, y;
	cout << "x^y  값을 구하는 메뉴입니다." << endl;
	cout << "x의 값: ";
	cin >> x;
	cout << "y의 값: ";
	cin >> y;
	cout << "x^y의 값: " << pow(x, y) << endl;
	return 0;
}

//7번-로그값

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num;
	double x;
	cout << " ln(x) , log10(x) 중에 선택하세요. " << endl;
	cout << "1. ln(x)" << endl<<"2. log10(x)" << endl;
	cin >> num;
	if (num == 1) {
		cout << "숫자를 입력하세요: ";
		cin >> x;
		cout << "ln(x)= " << log(x) << endl;
		return 0;
	}
	else if (num == 2) {
		cout << "숫자를 입력하세요: ";
		cin >> x;
		cout << "log10(x)= " << log10(x) << endl;
		return 0;
	}
	else {
		cout << "1,2 중에 선택하세요." << endl;
		return 0;

	}
}


//6번-sin,cos,tan

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int radian;
	int num;
	double pi = 3.14;
	cout << "삼각함수를 구하는 메뉴입니다. 번호를 입력하여 선택하세요" << endl;
	cout << "1. sin()" << endl << "2.cos()" << endl << "3.tan()" << endl;
	cin >> num;
	if (num == 1) {
		cout << "각도입력: ";
		cin >> radian;
		cout << sin(radian*pi/180) << endl;
		return 0;
	}
	else if (num == 2) {
		cout << "각도입력: ";
		cin >> radian;
		cout << cos(radian*pi/180) << endl;
		return 0;
	}
	else if (num == 3) {
		cout << "각도입력: ";
		cin >> radian;
		cout << tan(radian*pi/180) << endl;
		return 0;
	}
	else {
		cout << "1,2,3중 골라주세요." << endl;
		return 0;
	}
	
}

//10번-nCr

#include<iostream>
using namespace std;

int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}


int main() {
	int n, r;

	cout << "nCr 을 구하기 위해 n과 r 입력해주세요" << endl;
	cout << "n: ";
	cin >> n;
	cout << "r: ";
	cin >> r;
	cout << endl;
	cout << n << "C" << r << " = " << (factorial(n) / (factorial(r) * factorial(n - r)));

	return 0;
}

//10번-nPr

#include<iostream>
using namespace std;

int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}


int main() {
	int n, r;

	cout << "nPr 을 구하기 위해 n과 r 입력해주세요" << endl;
	cout << "n: ";
	cin >> n;
	cout << "r: ";
	cin >> r;
	cout << endl;
	cout << n << "P" << r << " = " << (factorial(n) / factorial(n - r));

	return 0;
}

//2번- 행렬의 곱셈(+ 행렬의 덧셈, 뺄셈도 추가해서 구현함)

#include <iostream>
using namespace std;

void putdata(int** M, int** N, int** RESULT, int A, int B, int C, int D) // 데이터 집어넣기
{
	cout << "\n\n-------------------------------------------------------------------------\n\n";
	cout << "[입력방법설명]\n" << endl;
	cout << "예시) 만약 입력하고자 하는 행렬이 다음과 같다면...\n\n2 3\n4 5\n\n";
	cout << "입력>> 2(ENTER)3(ENTER)4(ENTER)5(ENTER)" << endl;
	cout << "이렇게 숫자를 하나씩 입력후 엔터를 누르는식으로 입력을해주세요.\n" << endl;
	cout << "-------------------------------------------------------------------------\n\n";
	cout << "[입력란]\n" << endl;
	cout << "행렬M: A*B에 대한 값을 입력해주세요!!! " << endl;
	cout << "입력>> \n";
	for (int aa = 0; aa < A; aa++) {
		for (int bb = 0; bb < B; bb++) {
			cin >> M[aa][bb];
		}
	}

	cout << "\n행렬N: C*D에 대한 값을 입력해주세요!!! " << endl;
	cout << "입력>> \n";
	for (int cc = 0; cc < C; cc++) {
		for (int dd = 0; dd < D; dd++) {
			cin >> N[cc][dd];
		}
	}
}

void PrintIt(int** RESULT, int** M, int** N, int A, int B, int C, int D) // 사용자가 입력한 내용과 결과 출력하기(행렬모양으로)
{
	cout << "\n-----------------------------입력결과----------------------------------\n\n";
	cout << "[행렬M: " << A << "*" << B << "]\n\n";
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			cout << M[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "\n[행렬N: " << C << "*" << D << "]\n\n";
	for (int i = 0; i < C; i++) {
		for (int j = 0; j < D; j++) {
			cout << N[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "------------------------결과를 출력하겠습니다---------------------------\n\n";
	cout << "[결과: " << A << "*" << D << "]\n\n";
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < D; j++) {
			cout << RESULT[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "\n------------------------------------------------------------------------\n\n";
}
int main() {
	cout << "-------------------------------------------------------------------------\n\n";
	cout << " M:A*B 행렬과 N:C*D 행렬의 계산을 진행하려고 합니다 (단, A, B, C, D는 자연수)\n" << endl;
	cout << "어떤 연산을 진행하시겠습니까?" << endl;
	cout << "1) 두 행렬의 덧셈(M+N)\n" << "2) 두 행렬의 뺄셈(M-N)\n" << "3)두 행렬의 곱셈(M*N)" << endl;
	cout << "번호를 입력해주세요>> ";
	int choice;
	cin >> choice; // 사용자가 1,2,3번중 입력하면, 그 값을 변수에 저장

	if ((choice != 1) && (choice != 2) && (choice != 3)) // 사용자가 올바른 번호를 입력안했을때
	{
		cout << "ERROR!!!!!입력오류!!! 1, 2, 3 번중에서만 입력을 해주세요. 프로그램을 종료합니다. \n" << endl;
		return 0;
	}

	cout << "\n-------------------------------------------------------------------------\n\n";
	cout << "[입력란]\n" << endl;

	// 사용자로부터 A, B, C, D의 값을 입력받는다
	cout << "A값 입력>> ";
	int A;
	cin >> A;

	cout << "B값 입력>> ";
	int B;
	cin >> B;

	cout << "C값 입력>> ";
	int C;
	cin >> C;

	cout << "D값 입력>> ";
	int D;
	cin >> D; 

	int** M = new int* [A]; // 동적할당으로 A*B인 2차원 배열 M만들기
	for (int i = 0; i < A; i++) {
		M[i] = new int[B];
	}
	
	int** N = new int* [C]; // 동적할당으로 C*D인 2차원 배열 N만들기
	for (int j = 0; j < C; j++) {
		N[j] = new int[D];
	}

	int** RESULT = new int* [A]; // 동적할당으로 A*D인 2차원 배열 RESULT만들기
	for (int k = 0; k < A; k++) {
		RESULT[k] = new int[D];
	}

	
	if (choice == 1) // 사용자가 행렬의 덧셈을 원하면
	{
		if ((A == C) && (B == D))
		{
			putdata(M, N, RESULT, A, B, C, D);
			for (int i = 0; i < A; i++) // 행렬의 덧셈진행
			{
				for (int j = 0; j < B; j++) {
					RESULT[i][j] = M[i][j] + N[i][j];
				}
			}
			PrintIt(RESULT, M, N, A, B, C, D);
		}
		else // 올바르지 않은 입력으로, 행렬의 덧셈을 진행할 수 없는 경우
		{
			cout << "행렬의 덧셈을 진행할 수 없습니다. (같은 크기의 행렬끼리만 덧셈이 가능합니다)" << endl;
			return 0; // 프로그램 종료
		}
	}

	if (choice == 2) // 사용자가 행렬의 뺄셈을 원하면
	{
		if ((A == C) && (B == D))
		{
			putdata(M, N, RESULT, A, B, C, D);
			for (int i = 0; i < A; i++) // 행렬의 뺄셈진행
			{
				for (int j = 0; j < B; j++) {
					RESULT[i][j] = M[i][j] - N[i][j];
				}
			}
			PrintIt(RESULT, M, N, A, B, C, D);
		}
		else
		{
			cout << "행렬의 뺄셈을 진행할 수 없습니다. (같은 크기의 행렬끼리만 뺄셈이 가능합니다)" << endl;
			return 0; // 프로그램 종료
		}
	}

	if (choice == 3) // 사용자가 행렬의 곱셈을 원하면
	{
		if (B == C) // 사용자가 올바르게 입력을 한 경우
		{
			putdata(M, N, RESULT, A, B, C, D);
			for (int i = 0; i < A; i++) // 행렬의 곱셈진행
			{
				for (int j = 0; j < D; j++) 
				{
					RESULT[i][j] = 0;
					for (int k = 0; k < B; k++)
					{
						RESULT[i][j] += ( M[i][k] * N[k][j] );
					}
				}
			}
			PrintIt(RESULT, M, N, A, B, C, D);
		}
		else // 사용자가 올바르게 입력을 하지 않은경우
		{
			cout << "행렬의 곱셈을 진행할 수 없습니다. (행렬의 곱을 진행하려면 B와 C의 값이 같아야합니다)" << endl;
			return 0;
		}
	}

	return 0;
}

//1번-괄호없이,,,그냥 기본적인 사칙연산

#include<iostream>
using namespace std;
//그냥 기본적인 사칙연산
int main() {
	int x;
	int y;
	int result;
	char a;

	cout << "사칙연산을 입력하세요.(예)4+3)" << endl;
	cin >> x >> a >> y;
	switch (a) {
	case'+':
		result = x + y;
		cout << x << a << y << '=' << result;
		break;
	case'-':
		result = x - y;
		cout << x << a << y << '=' << result;
		break;
	case'*':
		result = x * y;
		cout << x << a << y << '=' << result;
		break;
	case'/':
		result = x / y;
		cout << x << a << y << '=' << result;
		break;
	}
	return 0;
}


//1번 기본사칙연산 - 모두 구현 완료!!!

#include <iostream>
#include <string>
#include <stack> // 스택을 구현하기 위한 STL라이브러리의 헤더파일 추가
#include <locale> // isdigit함수를 쓰기 위한 헤더파일 추가
using namespace std;

int main() {
	stack<double> stack1; // 연산결과가 실수일수도 있다는 점을 고려해서 double로 스택을 구성, 후위표기법->계산 할 때 필요한 스택
	stack<char> stack0; // 입력받은식(중위표기법)->후위표기법으로 바꾸는 과정에서 필요한 스택

	string before_change; // 후위연산자로 바꾸기 전의 연산식 저장. 사용자로부터 입력받은 식을 저장한다. 
	string after_change = ""; // 사용자로부터 받은 연산식을 후위연산자로 바꾸고 난 후의 식을 저장한다.

	std::cout << "=====================================================================\n";
	std::cout << "기본사칙연산을 시작하겠습니다..." << endl << endl;
	std::cout << "[입력방법 주의사항]" << endl;
	std::cout << "숫자와 소괄호로만 식을 구성해주세요. 공백없이 입력해주세요." << endl;
	std::cout << "ex) 입력 >> 5+((1+2)*3-7)" << endl << endl;
	std::cout << "입력 >> ";
	getline(cin, before_change); // 사용자로부터 입력받은 식을 before_change에 저장
	std::cout << "=====================================================================\n";

	//입력받은 연산식을 후위연산식으로 바꿔야함
	int n = before_change.size(); // 입력받은 식의 크기를 변수 n에 저장
	
	for (int j = 0; j < n; j++) // 사이즈 만큼 루프를 돈다
	{
		char temp = before_change[j];
		if (isdigit(temp)) //만약에 숫자라면 
			after_change = after_change + before_change[j];
		else if (temp == '*')
			stack0.push('*');
		else if (temp == '/')
			stack0.push('/');
		else if (temp == '+')
			stack0.push('+');
		else if (temp == '-')
			stack0.push('-');
		else if (temp == ')')
		{
			char topc = stack0.top(); // 스택 맨 위의 문자를 반환
			stack0.pop(); // 맨 위의 문자 삭제
			after_change = after_change + topc;
		}
		else // 위의것들의 아무것도 해당안될때 그냥 반복문으로 다시 올라간다
			continue;
	}
	while (stack0.empty() != 1)
	{
		char topcc = stack0.top();
		stack0.pop();
		after_change = after_change + topcc;
	}

	std::cout << "후위표기법으로 바꾼 결과 >> " << after_change << endl;
	std::cout << "=====================================================================\n";
	// 지금부터 후위연산식을 계산해서 결과를 도출해낸다

	char c;
	int nn = after_change.size();
	for (int i = 0; i < nn; i++) {
		c = after_change[i]; 
		if (isdigit(c)) // 문자가 숫자라면 
		{
			stack1.push((double)(c - '0')); // 숫자로 변환해서 스택에 넣어준다
		}
		else // 숫자가 아니라면
		{
			double n1 = stack1.top(); // 숫자 하나를 n1변수에 저장
			stack1.pop(); // 그 숫자가 담긴걸 삭제
			double n2 = stack1.top(); // 숫자 하나를 n2변수에 저장
			stack1.pop(); // 그 숫자가 담긴걸 삭제

			if (c == '+') // 덧셈 
				stack1.push(n1 + n2);
			else if (c == '-') // 뺄셈
				stack1.push(n2 - n1);
			else if (c == '*') // 곱셈
				stack1.push(n1 * n2);
			else // 나눗셈
				stack1.push(n2 / n1);
		}
	}
	std::cout << "계산결과 >> ";
	std::cout << stack1.top() << endl;
	std::cout << "=====================================================================\n";

	return 0;
}

//이차방정식, 일차방정식의 해 구하기 구현완료

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "=====================================================================\n";
	cout << "방정식의 해를 구하겠습니다. 번호를 선택해주세요." << endl;
	cout << "1: 1차방정식의 해 구하기\n2: 2차방정식의 해 구하기" << endl;
	cout << "입력 >> ";
	int user_choice;
	cin >> user_choice; // 사용자로부터 1번을 원하는지 2번을 원하는지 입력을 받음
	cout << "=====================================================================\n";

	if (user_choice == 1) // 1차 방정식의 해를 구하기
	{
		cout << "일차방정식 Ax+B=0 의 계산을 진행하겠습니다." << endl;

		cout << "A입력 >> "; // 사용자로부터 A값을 입력받는다
		double whatisA;
		cin >> whatisA;

		cout << "B입력 >> "; // 사용자로부터 B값을 입력받는다
		double whatisB;
		cin >> whatisB;

		cout << "=====================================================================\n";
		cout << "[결과출력]" << endl;
		cout << "해의 개수: 1개" << endl;
		double result = -(whatisB / whatisA);
		cout << "x = " << result << endl;

	}
	else if (user_choice == 2) // 2차 방정식의 해를 구하기 
	{
		cout << "이차방정식 Ax^2+Bx+C=0 의 계산을 진행하겠습니다." << endl;
		
		cout << "A입력 >> "; // 사용자로부터 A값을 입력받는다
		double whatisA;
		cin >> whatisA;

		cout << "B입력 >> "; // 사용자로부터 B값을 입력받는다
		double whatisB;
		cin >> whatisB;

		cout << "C입력 >> "; // 사용자로부터 C값을 입력받는다
		double whatisC;
		cin >> whatisC;

		if (whatisA == 0) // A가 0이어서 1차식이 되는경우, 해는1개
		{
			cout << "=====================================================================\n";
			cout << "[결과출력]\n" << endl;
			cout << "해의 개수: 1개" << endl;
			double result = -(whatisC / whatisB);
			cout << "x = " << result << endl;
		}
		else // 2차식 계산
		{
			double equation; // 판별식의 결과를 저장 할 곳
			equation = whatisB * whatisB - 4.0 * whatisA * whatisC;
			if (equation == 0) // 중근을 가지는 경우 
			{
				cout << "=====================================================================\n";
				cout << "[결과출력]\n" << endl;
				cout << "해의 개수: 1개(중근)" << endl;
				double result = - ( whatisB / (2 * whatisA ) );
				cout << "x = " << result << endl;
			}
			if (equation > 0) // 서로 다른 두 근을 가지는 경우
			{
				cout << "=====================================================================\n";
				cout << "[결과출력]\n" << endl;
				cout << "해의 개수: 2개" << endl;
				double square_R = sqrt(equation); // 판별식에 루트씌운값을 저장
				double result1 = ((-whatisB) - square_R) / (2 * whatisA );
				double result2 = ((-whatisB) + square_R) / (2 * whatisA );
				cout << "x1 = " << result1 << endl;
				cout << "x2 = " << result2 << endl;
			}
			if (equation < 0) // 해가 존재하지 않는 경우
			{
				cout << "[결과출력]\n" << endl;
				cout << "해의 개수: 0개(해가 존재하지 않습니다)" << endl;
			}
			
		}

	}
	else // 사용자가 올바른 번호를 입력하지 않은 경우
	{
		cout << "ERROR!!! 1또는 2만 입력해주세요!!! 올바른 값을 입력하지 않았습니다!!!" << endl;
		return 0;
	}

	cout << "=====================================================================\n";
	return 0;
}

//4번- degree&radian 변환
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int degree;
	int radian;
	int num;
	double pi= 3.14;
	cout<<"--------------------\n";
	cout<<"1.degree\n2.radian\n";
	cout<<"입력할 값의 번호를 선택하세요(1,2)\n";
	cin>>num;
	if(num==1){
		cout<<"degree입력: ";
		cin>>degree;
		cout<<"degree->radian 변환 : " ;
		cout<< (degree*pi)/180<<"radian";
	}
	else if(num==2){
		cout<<"radian입력: ";
		cin>>radian;
		cout<<"radian->degree 변환 : " ;
		cout<<(radian*180)/pi<<"°";
	}
	else{
		cout<<"ERROR!!!1,2중에 선택해주세요!";
		return 0; 
	}
} 


