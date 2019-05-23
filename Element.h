#pragma once

typedef struct elem {
	int Val;	// Текущий элемент очереди
	elem *Prev;	// Указатель на предыдущий элемент
}elem;