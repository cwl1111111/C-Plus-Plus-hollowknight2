#include<iostream>
#include"hammer.h"
using namespace std;

Hammer::Hammer(int weapon_id, string name, int equipmentDamage, int equipmentWeight, int equipmentDefense) {
	this->m_weapon_id = weapon_id;
	this->m_name = name;
	this->m_equipmentDamage = equipmentDamage;
	this->m_equipmentWeight = equipmentWeight;
	this->m_equipmentDefense = equipmentDefense;

}

void Hammer::showInformation() {
	cout << "���� id : " << this->m_weapon_id << endl;
	cout << "�������� : ʯ�� " << endl;
	cout << "�˺� : " << this->m_equipmentDamage << endl;
	cout << "���� : " << this->m_equipmentWeight << endl;
	cout << "����ֵ : " << this->m_equipmentDefense << endl;

}

int  Hammer::showWeightValue()
{
	return this->m_equipmentWeight;
}