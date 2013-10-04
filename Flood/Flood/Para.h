#pragma once

#include <string>

typedef unsigned short USHORT;

class CPara
{
public:
	CPara(void);
	virtual ~CPara(void);
		
	virtual std::string GetInterfaceName();
	virtual int GetSrc(std::string &srcIp, std::string &srcMac, USHORT &nPort);
	virtual std::string GetDstIp();
	virtual USHORT GetDstPort();
	virtual std::string GetDstMac();

	virtual int GetThreadNumber();
	virtual int Update();//��ʱ����

	//ȫ�ֹ��ú���
	static std::string GetModuleFile();
	static int Rand(int min, int max);

	static CPara* GetInstance();

private:
	std::string m_szInterfaceName;
	std::string m_DstMac;
	std::string m_szSrcIp;
	std::string m_szSrcMac;

protected:
	virtual std::string GetSrcIp();
	virtual USHORT GetSrcPort();
	virtual std::string GetSrcMac();


	virtual int OnInit();
};
