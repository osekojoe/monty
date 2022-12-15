#include "monty.h"

/**
 * _push - push element to stack
 * @doubly: head of the linked list
 * @cline: line number
 * Return: None
*/
void _push(stack_t **doubly, unsigned int cline)
{
<<<<<<< Updated upstream
        int n, j;

        if (!vglo.arg)
        {
                dprintf(2, "L%u: ", cline);
                dprintf(2, "usage: push integer\n");
                free_vglo();
                exit(EXIT_FAILURE);
        }

        for (j = 0; vglo.arg[j] != '\0'; j++)
        {
                if (!isdigit(vglo.arg[j]) && vglo.arg[j] != '-')
                {
                        dprintf(2, "L%u: ", cline);
                        dprintf(2, "usage: push integer\n");
                        free_vglo();
                        exit(EXIT_FAILURE);
                }
        }

        n = atoi(vglo.arg);

        if (vglo.lifo == 1)
                add_dnodeint(doubly, n);
        else
                add_dnodeint_end(doubly, n);
=======
	int n, j;

	if (!vglo.arg)
	{
		dprintf(2, "L%u: ", cline);
		dprintf(2, "usage: push integer\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}

	for (j = 0; vglo.arg[j] != '\0'; j++)
	{
		if (!isdigit(vglo.arg[j]) && vglo.arg[j] != '-')
		{
			dprintf(2, "L%u: ", cline);
			dprintf(2, "usage: push integer\n");
			free_vglo();
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(vglo.arg);

	if (vglo.lifo == 1)
		add_dnodeint(doubly, n);
	else
		add_dnodeint_end(doubly, n);
>>>>>>> Stashed changes
}

/**
 * _pall - prints all values on the stack
 * @doubly: head of the linked list
 * @cline: line numbers
 * Return: None
 */
void _pall(stack_t **doubly, unsigned int cline)
<<<<<<< Updated upstream
{       
        stack_t *aux;
        (void)cline;
        
        aux = *doubly;
        
        while (aux)
        {       
                printf("%d\n", aux->n);
                aux = aux->next;
        }
=======
{
	stack_t *aux;
	(void)cline;

	aux = *doubly;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
>>>>>>> Stashed changes
}

/**
 * _pint - prints the value at the top of the stack
 * @doubly: head of the linked list
 * @cline: line number
 * Return: None
 */
<<<<<<< Updated upstream
void _pall(stack_t **doubly, unsigned int cline)
{       
        stack_t *aux;
        (void)cline;
        
        aux = *doubly;
        
        while (aux)
        {       
                printf("%d\n", aux->n);
                aux = aux->next;
        }
}

/**
 * _pint - prints the value at the top of the stack
=======
void _pint(stack_t **doubly, unsigned int cline)
{
	(void)cline;

	if (*doubly == NULL)
	{
		dprintf(2, "L%u: ", cline);
		dprintf(2, "can't pint, stack empty\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*doubly)->n);
}

/**
 * _pop - removes the top element of the stack
>>>>>>> Stashed changes
 * @doubly: head of the linked list
 * @cline: line number
 * Return: None
 */
<<<<<<< Updated upstream
void _pall(stack_t **doubly, unsigned int cline)
{       
        stack_t *aux;
        (void)cline;
        
        aux = *doubly;
        
        while (aux)
        {       
                printf("%d\n", aux->n);
                aux = aux->next;
        }
}

/**
 * _pint - prints the value at the top of the stack
=======
void _pop(stack_t **doubly, unsigned int cline)
{
	stack_t *aux;

	if (doubly == NULL || *doubly == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	aux = *doubly;
	*doubly = (*doubly)->next;
	free(aux);
}

/**
 * _swap - swaps the top two elements of the stack
>>>>>>> Stashed changes
 * @doubly: head of the linked list
 * @cline: line number
 * Return: None
 */
void _swap(stack_t **doubly, unsigned int cline)
{
<<<<<<< Updated upstream
        int m = 0;
        stack_t *aux = NULL;

        aux = *doubly;

        for (; aux != NULL; aux = aux->next, m++)
                ;

        if (m < 2)
        {
                dprintf(2, "L%u: can't swap, stack too short\n", cline);
                free_vglo();
                exit(EXIT_FAILURE);
        }

        aux = *doubly;
        *doubly = (*doubly)->next;
        aux->next = (*doubly)->next;
        aux->prev = *doubly;
        (*doubly)->next = aux;
        (*doubly)->prev = NULL;
=======
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = *doubly;
	*doubly = (*doubly)->next;
	aux->next = (*doubly)->next;
	aux->prev = *doubly;
	(*doubly)->next = aux;
	(*doubly)->prev = NULL;
>>>>>>> Stashed changes
}
