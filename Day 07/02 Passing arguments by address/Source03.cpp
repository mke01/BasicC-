void seconds2hms(int secs, int *phrs, int *pmins, int *psecs);

int main()
{
	int hrs, mins, secs;
	seconds2hms(3672, &hrs, &mins, &secs);
	return 0;
}

void seconds2hms(int secs, int *phrs, int *pmins, int *psecs)
{
	*phrs = secs / 3600; secs %= 3600;
	*pmins = secs / 60; secs %= 60;
	*psecs = secs;
}

/*
Above program introduces out parameters.
Here phrs, pmins and psecs are out parameters.
Thus when we wish to return multiple values from a 
function to outer world, we prefer we return values 
out parameter way.
*/