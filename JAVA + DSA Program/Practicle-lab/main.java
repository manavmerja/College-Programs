package PRACTICLE_1;

import java.util.ArrayList;
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Employee> employees = new ArrayList<>();

        System.out.print("Enter number of employees: ");
        int count = sc.nextInt();
        sc.nextLine(); // consume newline

        for (int i = 0; i < count; i++) {
            System.out.println("\nEnter details for Employee " + (i + 1));
            System.out.print("Is the employee Permanent or Contract? (P/C): ");
            String type = sc.nextLine().trim();

            System.out.print("Enter ID: ");
            int id = sc.nextInt();
            sc.nextLine(); // consume newline

            System.out.print("Enter Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Department: ");
            String dept = sc.nextLine();

            System.out.print("Enter Salary: ");
            double salary = sc.nextDouble();
            sc.nextLine(); // consume newline

            if (type.equalsIgnoreCase("P")) {
                PermanentEmployee pe = new PermanentEmployee(id, name, dept, salary);
                employees.add(pe);
            } else if (type.equalsIgnoreCase("C")) {
                ContractEmployee ce = new ContractEmployee(id, name, dept, salary);
                employees.add(ce);
            } else {
                System.out.println("Invalid employee type. Skipping this employee.");
            }
        }

        // Display results
        System.out.println("\n--- Employee Details ---");
        for (Employee emp : employees) {
            emp.displayInfo();
            if (emp instanceof PermanentEmployee) {
                System.out.println("Type: Permanent Employee");
            } else if (emp instanceof ContractEmployee) {
                System.out.println("Type: Contract Employee");
            }
            System.out.println("------------------------");
        }

        System.out.println("Total Employees Created: " + Employee.getEmployeeCount());

        sc.close();
    }
}

// Base class
class Employee {
    private int id;
    private String name;
    private String department;
    private double salary;

    protected static int employeeCount = 0;

    // Default constructor
    public Employee() {
        this(0, "Unknown", "Unknown", 0.0); // constructor chaining
    }

    // Parameterized constructor
    public Employee(int id, String name, String department, double salary) {
        this.id = id;                   // using this keyword
        this.name = name;
        this.department = department;
        this.salary = salary;
        employeeCount++;               // count employees
    }

    // Getter method for employee count
    public static int getEmployeeCount() {
        return employeeCount;
    }

    // Display info
    public void displayInfo() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("Salary: " + salary);
    }
}

// PermanentEmployee class
class PermanentEmployee extends Employee {
    public PermanentEmployee() {
        super(); // default
    }

    public PermanentEmployee(int id, String name, String dept, double salary) {
        super(id, name, dept, salary); // call parent constructor
    }
}

// ContractEmployee class
class ContractEmployee extends Employee {
    public ContractEmployee() {
        super(); // default
    }

    public ContractEmployee(int id, String name, String dept, double salary) {
        super(id, name, dept, salary);
    }
}
