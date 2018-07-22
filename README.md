class Flight
{
	private int flightNumber;
	private char flightClass;

	@Override
	public boolean equals(Object o)
	{
		if( equals(o)) //this
		{
			return true;
		}
		if(!(o instanceof Flight))
		{
			return false;
		}
		Flight other = (Flight) o;
		return flightClass == other.flightClass && flightNumber == other.flightNumber;
	}
	public static void main(String args[])
	{
		Flight f1 = new Flight();
		Flight f2 = f1;
		System.out.print(f1.equals(f2) + "\n Success");

	}
}
