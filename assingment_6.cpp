/*Employee class hasEmp_name, Emp_id, Address, Mail_id, and Mobile_no as members. 
Inherit the classes: Programmer, Team Lead, Assistant Project Manager and Project Manager from employee class. 
Add Basic Pay (BP) as the member of all the inherited classes with 52% of BP as DA, 27 % of BP as HRA, 12% of BP as PF, 0.1% of BP for staff club fund.
 Generate pay slips for the employees with their gross and net salary.*/


#include<iostream>
using namespace std;

class Employee {
public:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long long Mobile_no;
    
    int grossSalary(double BP, double DA, double HRA) {
        return BP + DA + HRA;
    }

    int netSalary(double gross, double PF, double StaffClubFund) {
        return gross - (PF + StaffClubFund);
    }

};

class Programmer : public Employee {
public:
    double BP = 50000;
    double DA = 0.52 * BP;
    double HRA = 0.27 * BP;
    double PF = 0.12 * BP;
    double StaffClubFund = 0.001 * BP;
};

class TeamLead : public Employee {
    public:
    double BP = 60000;
    double DA = 0.52 * BP;
    double HRA = 0.27 * BP;
    double PF = 0.12 * BP;
    double StaffClubFund = 0.001 * BP;
};

class AssistantProjectManager : public Employee {
    public:
    double BP = 70000;
    double DA = 0.52 * BP;
    double HRA = 0.27 * BP;
    double PF = 0.12 * BP;
    double StaffClubFund = 0.001 * BP;
};

class ProjectManager : public Employee {
    public:
    double BP = 80000;
    double DA = 0.52 * BP;
    double HRA = 0.27 * BP;
    double PF = 0.12 * BP;
    double StaffClubFund = 0.001 * BP;
};

int main() {
    Programmer prog;
    TeamLead lead;
    AssistantProjectManager apm;
    ProjectManager pm;

    cout << "Programmer Salary Slip:" << endl;
    cout << "Gross Salary: " << prog.grossSalary(prog.BP, prog.DA, prog.HRA) << endl;
    cout << "Net Salary: " << prog.netSalary(prog.grossSalary(prog.BP, prog.DA, prog.HRA), prog.PF, prog.StaffClubFund) << endl;

    cout << "\nTeam Lead Salary Slip:" << endl;
    cout << "Gross Salary: " << lead.grossSalary(lead.BP, lead.DA, lead.HRA) << endl;
    cout << "Net Salary: " << lead.netSalary(lead.grossSalary(lead.BP, lead.DA, lead.HRA), lead.PF, lead.StaffClubFund) << endl;

    cout << "\nAssistant Project Manager Salary Slip:" << endl;
    cout << "Gross Salary: " << apm.grossSalary(apm.BP, apm.DA, apm.HRA) << endl;
    cout << "Net Salary: " << apm.netSalary(apm.grossSalary(apm.BP, apm.DA, apm.HRA), apm.PF, apm.StaffClubFund) << endl;

    cout << "\nProject Manager Salary Slip:" << endl;
    cout << "Gross Salary: " << pm.grossSalary(pm.BP, pm.DA, pm.HRA) << endl;
    cout << "Net Salary: " << pm.netSalary(pm.grossSalary(pm.BP, pm.DA, pm.HRA), pm.PF, pm.StaffClubFund) << endl;

    return 0;
}
