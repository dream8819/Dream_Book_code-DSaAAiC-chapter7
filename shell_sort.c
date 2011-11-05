//Original      81  94  11  93  12  35  17  95  28  58  41  75  15

//----------------------------------------------------------------

//After 5-sort  35  17  11  28  12  41  75  15  96  58  81  94  95

//After 3-sort  28  12  11  35  15  41  58  17  94  75  81  96  95

//After 1-sort  11  12  15  17  28  35  41  58  75  81  94  95  96
//
//Figure 7.4 Shellsort routine using shell increments (better increments are possible)

void
shell_sort(input_type a[], unsigned int n)
{
	unsigned int i,j,increment;
	input_type tmp;

	for (increment=n/2; increment<n; increment/=2)
	{
		for (i=increment+1; i<=n; i++)
		{
			tmp = a[i];
			for (j=i; j>increment; j-=increment)
			{
				if (tmp<a[j-increment])
					a[j] = a[j-increment];
				else
					break;
			}
			a[j] = tmp;
		}
	}


}
