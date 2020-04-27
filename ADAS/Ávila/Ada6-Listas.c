#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct listNumbers
{
    int number;
    struct listNumbers *nextNode;
} listNumbers;

typedef listNumbers *listP;

// Prototype
void insertList(listP *, int);
listP ereaseNode(listP, int);
void printList(listP);
void menu();

// Main
int main()
{
    listP list = NULL;
    int _num, select;
    bool flag = false;

    do
    {
        menu();
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            scanf("%d", &_num);
            insertList(&list, _num);
            break;

        case 2:
            scanf("%d", &_num);
            list = ereaseNode(list, _num);
            break;

        case 3:
            printList(list);
            break;

        case 4:
            flag = true;
            break;
            printf("Adios 💜");

        default:
            flag = true;
            break;
        }

    } while (flag == false);
    return 0;
}

void menu()
{
    printf("----[Menu]----\n");
    printf("Elige una opción\n");
    printf("1. Insertar un número\n");
    printf("2. Borrar un número\n");
    printf("3. Imprimir Lista\n");
    printf("4. Cerrar\n");
    printf("\n");
}

void insertList(listP *elementP, int valor)
{
    listP newElement;
    listP lastNode;
    listP actualNode;

    newElement = (listNumbers *)malloc(sizeof(listNumbers));
    if (newElement != NULL)
    {
        newElement->number = valor;
        newElement->nextNode = NULL;
        lastNode = NULL;
        actualNode = *elementP;

        while (actualNode != NULL && valor > actualNode->number)
        {
            lastNode = actualNode;
            actualNode = actualNode->nextNode;
        }

        if (lastNode == NULL)
        {
            newElement->nextNode = *elementP;
            *elementP = newElement;
        }
        else
        {
            lastNode->nextNode = newElement;
            newElement->nextNode = actualNode;
        }
    }
    else
    {
        printf("X");
    }
}

listP ereaseNode(listP actualNode, int valor)
{
    listP paraereaseNode = NULL;
    if (actualNode != NULL)
    {
        if (actualNode->number == valor)
        {
            paraereaseNode = actualNode;
            actualNode = actualNode->nextNode;
            free(paraereaseNode);
        }
        else
        {
            actualNode->nextNode = ereaseNode(actualNode->nextNode, valor);
        }
    }
    return actualNode;
}

void printList(listP actualNode)
{
    printf("\n");
    if (actualNode == NULL)
    {
        printf("Lista vacia\n");
    }
    else
    {
        printf("\n");
        printf("----[Lista]----\n");
        printf("\n");
        while (actualNode != NULL)
        {
            printf("%d\n", actualNode->number);
            printf("\n");
            actualNode = actualNode->nextNode;
        }
    }
}
