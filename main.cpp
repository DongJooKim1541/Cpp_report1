#include <iostream>
#include <cstring>
#define MAX 10000
using namespace std;

int alphabet_number(char* px);
void alphabet_print(char *px);

int main() {
	char sentences[MAX + 1];
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(sentences, MAX + 1, ';');
	cout << "�� ���ĺ� �� " << alphabet_number(sentences) << endl;
	cout << endl;
	alphabet_print(sentences);
	return 0;
}

int alphabet_number(char* px) {
	char sentences[MAX + 1];
	int blank_count = 0;

	strcpy(sentences, px);
	for (int i = 0; i < strlen(sentences); i++) {
		if (sentences[i] == ' ') {
			blank_count++;
		}
	}
	return strlen(sentences) - blank_count;
}

void alphabet_print(char *px) {
	char sentences[MAX + 1];
	int alphabets[26] = { 0 };
	strcpy(sentences, px);

	for (int i = 0; i < strlen(sentences); i++) {
		for (int j = 0; j < 26; j++) {
			if (sentences[i] == (j + 'a') || sentences[i] == (j + 'A')) {
				alphabets[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " (" << alphabets[i] << ") : ";
		for (int j = 0; j < alphabets[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}









