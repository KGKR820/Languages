package Assign_4;
interface BankAccount {
    void deposit(double amount);
    void withdraw(double amount);
}
class SavingsAccount implements BankAccount {
    private double balance;
    private double annualInterestRate;

    public SavingsAccount(double initialBalance, double annualInterestRate) {
        this.balance = initialBalance;
        this.annualInterestRate = annualInterestRate / 100; 
    }

    @Override
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    @Override
    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Insufficient funds");
        }
    }

    public void calculateInterest() {
        double interest = balance * annualInterestRate;
        balance += interest;
        System.out.println("Interest added: " + interest);
    }

    public double getBalance() {
        return balance;
    }
}

class CheckingAccount implements BankAccount {
    private double balance;
    private double monthlyFee;

    public CheckingAccount(double initialBalance, double monthlyFee) {
        this.balance = initialBalance;
        this.monthlyFee = monthlyFee;
    }

    @Override
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    @Override
    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Insufficient funds");
        }
    }

    public void deductFees() {
        balance -= monthlyFee;
        System.out.println("Monthly fee deducted: " + monthlyFee);
    }

    public double getBalance() {
        return balance;
    }
}

public class BankingSystem {
    public static void main(String[] args) {
        System.out.print("Enter initial balance for SavingsAccount: ");
        double savingsInitialBalance = Double.parseDouble(System.console().readLine());
        System.out.print("Enter annual interest rate for SavingsAccount (%): ");
        double savingsAnnualInterestRate = Double.parseDouble(System.console().readLine());
        SavingsAccount savingsAccount = new SavingsAccount(savingsInitialBalance, savingsAnnualInterestRate);
        System.out.print("Enter initial balance for CheckingAccount: ");
        double checkingInitialBalance = Double.parseDouble(System.console().readLine());
        System.out.print("Enter monthly fee for CheckingAccount: ");
        double checkingMonthlyFee = Double.parseDouble(System.console().readLine());
        CheckingAccount checkingAccount = new CheckingAccount(checkingInitialBalance, checkingMonthlyFee);
        while (true) {
            System.out.println("\n1. Deposit to SavingsAccount");
            System.out.println("2. Withdraw from SavingsAccount");
            System.out.println("3. Calculate interest for SavingsAccount");
            System.out.println("4. Deposit to CheckingAccount");
            System.out.println("5. Withdraw from CheckingAccount");
            System.out.println("6. Deduct fees for CheckingAccount");
            System.out.println("7. Exit");

            int choice = Integer.parseInt(System.console().readLine());

            switch (choice) {
                case 1:
                    System.out.print("Enter amount to deposit: ");
                    double depositAmount = Double.parseDouble(System.console().readLine());
                    savingsAccount.deposit(depositAmount);
                    break;
                case 2:
                    System.out.print("Enter amount to withdraw: ");
                    double withdrawAmount = Double.parseDouble(System.console().readLine());
                    savingsAccount.withdraw(withdrawAmount);
                    break;
                case 3:
                    savingsAccount.calculateInterest();
                    break;
                case 4:
                    System.out.print("Enter amount to deposit: ");
                    depositAmount = Double.parseDouble(System.console().readLine());
                    checkingAccount.deposit(depositAmount);
                    break;
                case 5:
                    System.out.print("Enter amount to withdraw: ");
                    withdrawAmount = Double.parseDouble(System.console().readLine());
                    checkingAccount.withdraw(withdrawAmount);
                    break;
                case 6:
                    checkingAccount.deductFees();
                    break;
                case 7:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice");
            }

            System.out.println("\nSavingsAccount balance: " + savingsAccount.getBalance());
            System.out.println("CheckingAccount balance: " + checkingAccount.getBalance());
        }
    }
}