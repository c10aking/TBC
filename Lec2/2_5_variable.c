int main() //괄호 속 들어올 값이 없다면 빈칸 or void
{
	int x; //변수 선언(declaration), 동일한 자료형일 경우 ,로 구분해서 연달아 선언 가능. ex) int x = 1, y = 2, z = x + y; : 선언과 할당 동시 가능
	int y;
	int z;
	int tax_rate; // 띄어쓰기를 해야할 시 언더바(_)로 사용, 숫자는 변수명에 사용할 순 있으나 앞에선 사용못함.
	
	// 선언, 연산, 할당은 구분하는 게 가독성과 실수 감소를 위해 권장됨.

	x = 1; // 할당(assignment)
	y = 2;
	z = x + y; // 연산

	return 0; // 잘 종료됐다는 신호
}