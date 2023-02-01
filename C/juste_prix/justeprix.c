#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	game(void)
{
	int	n;
	int	guess;
	int	win;

	win = 0;
	n = rand() % 1000 + 1;
	guess = 1001;

	while (win == 0)
	{
		ft_putstr(">>> ");
		scanf("%d",&guess);
		ft_putstr("\n");
		if (guess > n)
			ft_putstr("Plus petit\n");
		if (guess < n)
			ft_putstr("Plus grand\n");
		if (guess == n)
		{
			ft_putstr("Gagné\n");
			win = 1;
		}
	}
}

int	main(void)
{
	int	try;
	printf( "\n
\n
JJJJJJJJJJJ                                            tttt                                   PPPPPPPPPPPPPPPPP                         iiii                      \n
J:::::::::J                                         ttt:::t                                   P::::::::::::::::P                       i::::i                     \n
J:::::::::J                                         t:::::t                                   P::::::PPPPPP:::::P                       iiii                      \n
JJ:::::::JJ                                         t:::::t                                   PP:::::P     P:::::P                                                \n
J:::::J  uuuuuu    uuuuuu      ssssssssss   ttttttt:::::ttttttt        eeeeeeeeeeee           P::::P     P:::::Prrrrr   rrrrrrrrr   iiiiiii xxxxxxx      xxxxxxx\n
J:::::J  u::::u    u::::u    ss::::::::::s  t:::::::::::::::::t      ee::::::::::::ee         P::::P     P:::::Pr::::rrr:::::::::r  i:::::i  x:::::x    x:::::x \n
J:::::J  u::::u    u::::u  ss:::::::::::::s t:::::::::::::::::t     e::::::eeeee:::::ee       P::::PPPPPP:::::P r:::::::::::::::::r  i::::i   x:::::x  x:::::x  \n
J:::::j  u::::u    u::::u  s::::::ssss:::::stttttt:::::::tttttt    e::::::e     e:::::e       P:::::::::::::PP  rr::::::rrrrr::::::r i::::i    x:::::xx:::::x   \n
J:::::J  u::::u    u::::u   s:::::s  ssssss       t:::::t          e:::::::eeeee::::::e       P::::PPPPPPPPP     r:::::r     r:::::r i::::i     x::::::::::x    \n
JJJJJJJ     J:::::J  u::::u    u::::u     s::::::s            t:::::t          e:::::::::::::::::e        P::::P             r:::::r     rrrrrrr i::::i      x::::::::x     \n
J:::::J     J:::::J  u::::u    u::::u        s::::::s         t:::::t          e::::::eeeeeeeeeee         P::::P             r:::::r             i::::i      x::::::::x     \n
J::::::J   J::::::J  u:::::uuuu:::::u  ssssss   s:::::s       t:::::t    tttttte:::::::e                  P::::P             r:::::r             i::::i     x::::::::::x    \n
J:::::::JJJ:::::::J  u:::::::::::::::uus:::::ssss::::::s      t::::::tttt:::::te::::::::e               PP::::::PP           r:::::r            i::::::i   x:::::xx:::::x   \n
JJ:::::::::::::JJ    u:::::::::::::::us::::::::::::::s       tt::::::::::::::t e::::::::eeeeeeee       P::::::::P           r:::::r            i::::::i  x:::::x  x:::::x  \n
JJ:::::::::JJ       uu::::::::uu:::u s:::::::::::ss          tt:::::::::::tt  ee:::::::::::::e       P::::::::P           r:::::r            i::::::i x:::::x    x:::::x \n
JJJJJJJJJ           uuuuuuuu  uuuu  sssssssssss              ttttttttttt      eeeeeeeeeeeeee       PPPPPPPPPP           rrrrrrr            iiiiiiiixxxxxxx      xxxxxxx\n
\n")
	srand(getpid());
	try = 1;
	while (try == 1)
	{
		game();
		ft_putstr("Try again ? (1/0)\n>>> ");
        	scanf("%d",&try);
	}
}
