public class Bike : IFactory
{
    public void Drive(int miles)
    {
       Console.WriteLine($"Drive the Bike : {miles} km");
    }
//Finalizando a implementação da classe Bike
}
