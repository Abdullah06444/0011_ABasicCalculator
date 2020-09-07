package Beginner;

import java.util.Scanner;

public class Java0011_ABasicCalculator {

    public static void main(String[] args){

        boolean turnOnOff = true;
        do{

            double number1, number2;

            System.out.print("Enter any number :");

            Scanner s = new Scanner(System.in);
            number1 = s.nextDouble();

            System.out.println("1) Addition Operation");
            System.out.println("2) Subtraction Operation");
            System.out.println("3) Multiplication Operation");
            System.out.println("4) Division Operation");
            System.out.println("5) Remainder Calculate Operation");
            System.out.println("6) Square-root Calculate Operation");
            System.out.println("7) Radian Calculate Operation");
            System.out.println("8) Terminate Program\n\n");

            System.out.print("Select your operation :");
            int choice = s.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter any number :");
                    number2 = s.nextDouble();
                    System.out.println("Result :" + (number1 + number2) + "\n\n");
                    break;
                case 2:
                    System.out.print("Enter any number :");
                    number2 = s.nextDouble();
                    System.out.println("Result :" + (number1 - number2) + "\n\n");
                    break;
                case 3:
                    System.out.print("Enter any number :");
                    number2 = s.nextDouble();
                    System.out.println("Result :" + (number1 * number2) + "\n\n");
                    break;
                case 4:
                    System.out.print("Enter any number :");
                    number2 = s.nextDouble();
                    if (number2 != 0)
                        System.out.println("Result :" + (number1 / number2) + "\n\n");
                    else
                        System.out.println("Result : cannot divided by zero\n\n");
                    break;
                case 5:
                    System.out.print("Enter any number :");
                    number2 = s.nextDouble();
                    if (number2 != 0)
                        System.out.println("Result : the remainder/mod is " + (number1 % number2) + "\n\n");
                    else
                        System.out.println("Result : cannot divided by zero\n\n");
                    break;
                case 6:
                    System.out.println("Result :" + Math.sqrt(number1));
                    break;
                case 7:
                    System.out.println(number1 + " degree is " + (number1 / 180) + " pi radian\n\n");
                    break;
                case 8:
                    turnOnOff = false;
                    break;
                default:
                    System.out.println("Invalid operation\n\n");
                    break;
            }

        }while (turnOnOff);
    }
}
