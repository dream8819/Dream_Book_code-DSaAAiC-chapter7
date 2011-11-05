//original      34  08 64 51 32 21  Positions Moved
//After p=2     08  34 64 51 32 21        1
//After p=3     08  34 64 51 32 21	  0
//After p=4 	08  34 51 64 32 21	  1
//After p=5	08  32 34 51 64 21	  3
//After p=6 	08  21 32 34 51 64	  4
//Figure 7.2 Insertion sort routine.
void
insertion_sort(input_type a[], unsigned int n)
{
	unsign int  p,j;
	input_type tmp;

	a[0] = MID_DATA; /*sentinelº‡ ”…⁄*/

	for (p=2; p<=n; p++)
	{
		tmp = a[p];
		for (j=p; tmp<a[j-1]; j--)
		{
			a[j] = a[j-1];
		}
		a[j] = tmp;

	}

}
