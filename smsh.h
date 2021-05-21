#define	YES	1
#define	NO	0

char	*next_cmd();    //splitline
char	**splitline(char *);//spliteline
void	freelist(char **);  //spliteline
void	*emalloc(size_t);
void	*erealloc(void *, size_t);
int	execute(char **);
void	fatal(char *, char *, int );

int	process();
