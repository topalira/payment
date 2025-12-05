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
	double percentage_bonus;
	double camping_Tax;
	int count_Worked_month;
	int count_Working_month;
	double accrued_amount;
	double amount_withheld;
public:
	Payment() { salary = 0; year_of_Employment = 0; percentage_bonus = 0.0; camping_Tax = 0.0; count_Worked_month = 0; count_Working_month = 0; accrued_amount = 0.0; amount_withheld = 0.0; }
	Payment(string n, string s, string p, int sl, int yoe, double pb, double ct, int cwdm, int cwgm, int aa, int aw)
	{
		name = n;
		surname = s;
		patronymic = p;
		salary = sl;
		year_of_Employment = yoe;
		percentage_bonus = pb;
		camping_Tax = ct;
		count_Worked_month = cwdm;
		count_Working_month = cwgm;
		accrued_amount = aa;
		amount_withheld = aw;
	}
	void Print()
	{
		cout << "name: " << name << "\n"
			<< "surname: " << surname << "\n"
			<< "patronymic: " << patronymic << "\n"
			<< "salary: " << salary << "\n"
			<< "year_of_Employment: " << year_of_Employment << "\n"
			<< "percentage_bonus: " << percentage_bonus << "\n"
			<< "camping_Tax: " << camping_Tax << "\n"
			<< "count_Worked_month: " << count_Worked_month << "\n"
			<< "count_Working_month: " << count_Working_month << "\n"
			<< "accrued_amount: " << accrued_amount << "\n"
			<< "amount_withheld: " << amount_withheld << endl << endl;
	}
	void Input(string n, string s, string p, int sl, int yoe, double pb, double ct, int cwdm, int cwgm, int aa, int aw)
	{
		name = n;
		surname = s;
		patronymic = p;
		salary = sl;
		year_of_Employment = yoe;
		percentage_bonus = pb;
		camping_Tax = ct;
		count_Worked_month = cwdm;
		count_Working_month = cwgm;
		accrued_amount = aa;
		amount_withheld = aw;
	}
	double calculate_amount()
	{
		double accrued_amount = (salary / count_Worked_month) * count_Working_month;
		double bonus = salary * (percentage_bonus / 100);
		return accrued_amount + bonus;
	}
	double deductions_amount()
	{
		double pension_fund = calculate_amount() * 0.01;
		double income_tax = calculate_amount() - pension_fund * 0.13;
		return pension_fund + income_tax;
	}
	int experience(int current_year = 2025)
	{
		return current_year - year_of_Employment;
	}
};


int main()
{
	Payment obj("Ira", "Topal", "Viktorovna", 50000, 2018, 12.5, 1.5, 10, 12, 38500.75, 4200.30);
	obj.Print();

}