using System;

namespace CSharp0011_ABasicCalculator
{
    class CSharp0011_ABasicCalculator
    {
        static void Main(string[] args)
        {
			bool turnOnOff = true;
			
			do
			{

				double number1, number2;
				Console.Write("Enter any number :");
				number1 = double.Parse(Console.ReadLine());

				Console.WriteLine("1) Addition Operation");
				Console.WriteLine("2) Subtraction Operation");
				Console.WriteLine("3) Multiplication Operation");
				Console.WriteLine("4) Division Operation");
				Console.WriteLine("5) Remainder Calculate Operation");
				Console.WriteLine("6) Square-root Calculate Operation");
				Console.WriteLine("7) Radian Calculate Operation");
				Console.WriteLine("8) Terminate Program\n\n");

				Console.Write("Select your operation :");

				int choice = int.Parse(Console.ReadLine());

				switch (choice)
				{

					case 1:
						Console.Write("Enter any number :");
						number2 = double.Parse(Console.ReadLine());
						Console.WriteLine("Result :" + (number1 + number2) + "\n\n");
						break;
					case 2:
						Console.Write("Enter any number :");
						number2 = double.Parse(Console.ReadLine());
						Console.WriteLine("Result :" + (number1 - number2) + "\n\n");
						break;
					case 3:
						Console.Write("Enter any number :");
						number2 = double.Parse(Console.ReadLine());
						Console.WriteLine("Result :" + (number1 * number2) + "\n\n");
						break;
					case 4:
						Console.Write("Enter any number :");
						number2 = double.Parse(Console.ReadLine());
						if (number2 != 0)
							Console.WriteLine("Result :" + (number1 / number2) + "\n\n");
						else
							Console.WriteLine("Result : cannot divided by zero\n\n");
						break;
					case 5:
						Console.Write("Enter any number :");
						number2 = double.Parse(Console.ReadLine());
						if (number2 != 0)
							Console.WriteLine("Result : the remainder/mod is " + (number1 % number2) + "\n\n");
						else
							Console.WriteLine("Result : cannot divided by zero\n\n");
						break;
					case 6:
						Console.WriteLine("Result :" + Math.Sqrt(number1));
						break;
					case 7:
						Console.WriteLine(number1 + " degree is " + (number1 / 180) + " pi radian\n\n");
						break;
					case 8:
						turnOnOff = false;
						break;
					default:
						Console.WriteLine("Invalid operation\n\n");
						break;

				}

			} while (turnOnOff);
		}
    }
}
