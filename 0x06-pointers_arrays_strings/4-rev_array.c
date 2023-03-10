/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, b, d;

	b = 0;
	d = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	 */
	while (b < d)
	{
		tmp = a[b];
		a[b] = a[d];
		a[d] = tmp;
		b++;
		d--;
	}
}
