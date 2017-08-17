using System;

namespace FirstConsoleProject
{
	Class MainClass
	{
		Public static void Main (String[] args) // this is a method called "Main". It is called when the program starts.
		{
			Console.WriteLine {"How old are you?"};
			int age = Convert.ToInt32(Console.ReadLine());
			if (age < 18) {
				Console.WriteLine("That's too bad! You will have to wait a couple of years.");
			} else if (age == 18) {
				Console.WriteLine("Puh, barely made it!");
			} else {
				Console.WriteLine("You are not allowed to enter.");
			}
			Console.ReadKey();
		}
	}
}
