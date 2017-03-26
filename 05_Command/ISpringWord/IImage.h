#pragma once

class IImage
{
public:
	// ���������� ���� ������������ �������� ���������
	virtual std::string GetPath()const = 0;

	// ������ ����������� � ��������
	virtual unsigned GetWidth()const = 0;
	// ������ ����������� � ��������
	virtual unsigned GetHeight()const = 0;

	// �������� ������ �����������
	virtual void Resize(unsigned width, unsigned height) = 0;

	virtual ~IImage() = default;
};
