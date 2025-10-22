using System;

public class paroimpar
{
	public static void Main(string[] args)
	{
		verificacion(7);
		verificacion(8);
		verificacion(9);
		verificacion(10);
	}

	public static void verificacion(int numero)
	{
		if (numero % 2 == 0)
		{
			Console.WriteLine($"el numero {numero} es par.");
		}
		else
		{
			Console.WriteLine($"el numero {numero} es impar.");
		}
	}
}