/*
 Algoritmo de Huffman para compressao de texto

 Copyright (C) 2016  Lucas S. Vieira

 This program is free software: you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License,
 or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "../Types.h"

void huffman_enconde(char *myString);

char *huffman_decode(huffman_tree_node *huffmanTree);

#endif /* !HUFFMAN_H */