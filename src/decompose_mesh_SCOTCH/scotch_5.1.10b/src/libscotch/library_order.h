/* Copyright 2004,2007 ENSEIRB, INRIA & CNRS
**
** This file is part of the Scotch software package for static mapping,
** graph partitioning and sparse matrix ordering.
**
** This software is governed by the CeCILL-C license under French law
** and abiding by the rules of distribution of free software. You can
** use, modify and/or redistribute the software under the terms of the
** CeCILL-C license as circulated by CEA, CNRS and INRIA at the following
** URL: "http://www.cecill.info".
** 
** As a counterpart to the access to the source code and rights to copy,
** modify and redistribute granted by the license, users are provided
** only with a limited warranty and the software's author, the holder of
** the economic rights, and the successive licensors have only limited
** liability.
** 
** In this respect, the user's attention is drawn to the risks associated
** with loading, using, modifying and/or developing or reproducing the
** software by the user in light of its specific status of free software,
** that may mean that it is complicated to manipulate, and that also
** therefore means that it is reserved for developers and experienced
** professionals having in-depth computer knowledge. Users are therefore
** encouraged to load and test the software's suitability as regards
** their requirements in conditions enabling the security of their
** systems and/or data to be ensured and, more generally, to use and
** operate it in the same conditions as regards security.
** 
** The fact that you are presently reading this means that you have had
** knowledge of the CeCILL-C license and that you accept its terms.
*/
/************************************************************/
/**                                                        **/
/**   NAME       : library_order.h                         **/
/**                                                        **/
/**   AUTHOR     : Francois PELLEGRINI                     **/
/**                                                        **/
/**   FUNCTION   : This module contains the data declara-  **/
/**                tions for the library ordering          **/
/**                structure.                              **/
/**                                                        **/
/**   DATES      : # Version 3.3  : from : 08 oct 1998     **/
/**                                 to   : 08 oct 1998     **/
/**                # Version 4.0  : from : 11 dec 2001     **/
/**                                 to     25 dec 2004     **/
/**                                                        **/
/************************************************************/

/*
**  The type and structure definitions.
*/

/*+ Ordering. +*/

typedef struct LibOrder_ {
  Order                     o;                    /*+ Ordering data                      +*/
  Gnum * restrict           permtab;              /*+ Direct permutation array           +*/
  Gnum * restrict           peritab;              /*+ Inverse permutation array          +*/
  Gnum * restrict           cblkptr;              /*+ Pointer to number of column blocks +*/
  Gnum * restrict           rangtab;              /*+ Column block range array           +*/
  Gnum * restrict           treetab;              /*+ Separator tree array               +*/
} LibOrder;