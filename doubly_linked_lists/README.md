# C - Doubly Linked Lists

## Description

Ce projet a pour objectif d'apprendre à utiliser et manipuler les **listes doublement chaînées** en langage C.

Une liste doublement chaînée est une structure de données composée de nœuds où chaque élément contient :

- une valeur (ici un entier)
- un pointeur vers le nœud précédent
- un pointeur vers le nœud suivant

Cela permet de parcourir la liste dans les deux sens.

---

## Learning Objectives

À la fin de ce projet, je dois être capable d’expliquer sans aide :

- Ce qu’est une **liste doublement chaînée**
- Comment créer et manipuler des nœuds
- Comment ajouter un élément au début, à la fin ou à une position spécifique
- Comment supprimer un élément
- Comment parcourir une liste dans les deux directions
- Comment gérer la mémoire avec `malloc` et `free`

---

## Data Structure Used

```c
/**
 * struct dlistint_s - doubly linked list node structure
 * @n: integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;