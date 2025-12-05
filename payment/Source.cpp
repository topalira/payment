#include <iostream>
#include <string>
using namespace std;

class Payment
{
	string name;
	string surname;
	string patronymic;
	int salary;
	int year_of_Employment;
	double percentage_of_Premium;
	double camping_Tax;
	int count_Worked_month;
	int count_Working_month;
	int accrued_amount;
	int amount_withheld;
public:
	Payment() { salary = 0; year_of_Employment = 0; percentage_of_Premium = 0.0; camping_Tax = 0.0; count_Worked_month = 0; count_Working_month = 0; accrued_amount = 0; amount_withheld = 0; }
	Payment(string n, string s, string p, int sl, int yoe, double pop, double ct, int cwdm, int cwgm, int aa, int aw)
	{
		name = n;
		surname = s;
		patronymic = p;
		salary = sl;
		year_of_Employment = yoe;
		percentage_of_Premium = pop;
		camping_Tax = ct;
		count_Worked_month = cwdm;
		count_Working_month = cwgm;
		accrued_amount = aa;
		amount_withheld = aw;
	}
	void Print()
	{
		cout << "name: " << name << "\t"
			<< "surname: " << surname << "\t"
			<< "patronymic: " << patronymic << "\t"
			<< "salary: " << salary << "\t"
			<< "year_of_Employment: " << year_of_Employment << "\t"
			<< "percentage_of_Premium: " << percentage_of_Premium << "\t"
			<< "camping_Tax: " << camping_Tax << "\t"
			<< "count_Worked_month: " << count_Worked_month << "\t"
			<< "count_Working_month: " << count_Working_month << "\t"
			<< "accrued_amount: " << accrued_amount << "\t"
			<< "amount_withheld: " << amount_withheld << endl << endl;
	}
	void Input(string n, string s, string p, int sl, int yoe, double pop, double ct, int cwdm, int cwgm, int aa, int aw)
	{
		name = n;
		surname = s;
		patronymic = p;
		salary = sl;
		year_of_Employment = yoe;
		percentage_of_Premium = pop;
		camping_Tax = ct;
		count_Worked_month = cwdm;
		count_Working_month = cwgm;
		accrued_amount = aa;
		amount_withheld = aw;
	}
	double accrued_amount()
	{
		accrued_amount = salary * (count_Worked_month / count_Working_month) + percentage_of_Premium;
	}
};


//Начисления(сумма, которую заработали)
//Начисления = оклад * (отработанные дни / рабочих дней) + надбавка
//Где надбавка = начисленная сумма без надбавки * (процент надбавки / 100)

int main()
{

}