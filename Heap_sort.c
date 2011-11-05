void 
heap_sort(input_type a[], unsigned int n)
{
	int i;
	for (i=n/2; i>0; i--) //build_heap
	{
		perc_down(a, i, n);
	}
	for (i=n; i>=2; i--)
	{
		swap(&a[1], &a[i]); //delete_max
		perc_down(a, 1, i-1);
	}
}


void
perc_down(input_type a[], unsigned int i, unsigned int n)
{
	unsigned int child;
	input_type tmp;

	for (tmp=a[i]; i*2<=n; i=child)
	{
		child = i * 2;
		if ((child!=n)&&(a[child+1]>a[child]))
		{
			child++;
		}
		if ((tmp<a[child]))
			a[i] = a[child];
		else
			break;
	}
	a[i] = tmp;
}
