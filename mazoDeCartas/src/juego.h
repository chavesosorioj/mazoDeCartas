/*
 * juego.h
 *
 *  Created on: Apr 22, 2020
 *      Author: juliana
 */

#ifndef JUEGO_H_
#define JUEGO_H_

#define CANTIDAD_CARTAS 49

typedef struct Cartas
{	char palo[50];
	int numero;
	float valor;
} Carta;

/**
 * \brief Carga en cada posición del array una carta
 * \param arrayDeCartas es el arreglo de cartas que sera cargado
 *
 */

void crearMazo(Carta arrayDeCartas[]);

/**
 * \brief Recibe el array de cartas y realiza un ordenamiento aleatorio
 * \param arrayDeCartas es el arreglo de cartas
 *
 * \note
 *     Para determinar si se modifica la posición de un elemento se usa una función aleatoria
 *     y luego con la operación módulo (%) nos da el resto de dividir rand() entre 2.
 *     Este resto puede ir de 0 a 1. De la misma forma, el módulo de rand()
 *     entre N+1 va de 0 a N.
 *
 */
void  mezclarMazo(Carta arrayDeCartas[]);


#endif /* JUEGO_H_ */
