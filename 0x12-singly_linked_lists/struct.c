/**
* struct list_s - singly list
* @str: malloced string
* @len: Length
* @next: points to next 
*
* Desc: ainle link node struct
*/
typedef struct list_s
{
	char * str;
	unsigned int len;
	struct list_s *next;
}list_t;
