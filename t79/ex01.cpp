// ����� �ʿ��� ���� 2

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "����";
	}
};

class Message {
public:
	Message(int sendTime, string sendName)
		: sendTime(sendTime), sendName(sendName) {}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	virtual string GetContent() const { return ""; }

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message {
public:
	TextMessage(int sendTime, string sendName, string text)
		: Message(sendTime, sendName), text(text) {}

	string GetText() const { return text; }
	string GetContent() const { return text; }

private:
	string text;
};

class ImageMessage : public Message {
public:
	ImageMessage(int sendTime, string sendName, Image* image)
		: Message(sendTime, sendName), p_image(image) {}

	Image* GetImage() const { return p_image; }
	string GetContent() const { return (string)*p_image; }

private:
	Image* p_image;
};
void printMessage(const Message &m) {
	cout << "���� �ð� : " << m.GetSendTime() << endl;
	cout << "���� ��� : " << m.GetSendName() << endl;
	cout << "  �� ��   : " << m.GetContent() << endl;
	cout << endl;
}

int main() {
	Image* p_dogImage = new Image();

	Message* messages[] = {
		new TextMessage(10, "�ε�", "�ȳ�"),
		new TextMessage(11, "�ε�", "�ȳ�"),
		new TextMessage(12, "�ε�", "�ȳ�"),
		new ImageMessage(20, "�ε�", p_dogImage)
	};
	for (Message* m : messages) {
		printMessage(*m);
	}
	/*
	* ���� ������� for���� ������ �ڵ�
	for (int i = 0; i < 4; i++) {
	printMessage(*messages[i]);
	*/

	delete p_dogImage;
}