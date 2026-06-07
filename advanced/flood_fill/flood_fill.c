typedef struct s_point
{
	int x;
	int y;
} t_point;

void fill(char **tab, t_point size, int y, int x, char target)
{
	if(x < 0 || x >= size.x || y < 0 || y >= size.y)
		return;
	if(target != tab[y][x])
		return;
	tab[y][x] = 'F';

	fill(tab, size, y - 1, x, target);
	fill(tab, size, y + 1, x, target);
	fill(tab, size, y, x - 1, target);
	fill(tab, size, y, x + 1, target);
}
void flood_fill(char **tab, t_point size, t_point begin)
{
	char target;

	target = tab[begin.y][begin.x];
	fill(tab, size, begin.y, begin.x, target);
}
