
ft_memchr()

DESCRIPTION:
The ft_memchr() function scans the initial n bytes of the memory
area pointed to by s for the first instance of c.  Both c and the
bytes of the memory area pointed to by s are interpreted as
unsigned char.

RETURN:
The function return a pointer to the matching byte or NULL if the
character does not occur in the given memory area.

_____________________________________________________________________

ft_memcmp()

DESCRIPTION:
The ft_memcmp() function compares the first n bytes (each
interpreted as unsigned char) of the memory areas s1 and s2.

RETURN:
The function returns an integer less than, equal to, o
greater than zero if the first n bytes of s1 is found,
respectively, to be less than, to match, or be greater than the
first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of
the difference between the first pair of bytes (interpreted as
unsigned char) that differ in s1 and s2.
If n is zero, the return value is zero.

_____________________________________________________________________

ft_memcpy()

DESCRIPTION:
The ft_memcpy() function copies n bytes from memory area src to
memory area dest.  The memory areas must not overlap.  Use
ft_memmove() if the memory areas do overlap.

RETURN:
The function returns a pointer to dest.

_____________________________________________________________________

ft_memmove()

DESCRIPTION:
The ft_memmove() function copies n bytes from memory area src to
memory area dest. The memory areas may overlap.

RETURN:
The function returns a pointer to dest.

_____________________________________________________________________

ft_memset()

DESCRIPTION:
The ft_memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c.

RETURN:
The function returns a pointer to the memory area s.

_____________________________________________________________________
