/*------------------------------------------------------------------------------
 * File: algorithms.h
 * Created: May 21, 2015
 * Last changed: May 21, 2015
 *
 * Author(s): Philip Arvidsson (philip@philiparvidsson.com)
 *
 * Description:
 *   Inneh�ller algoritmerna f�r att l�sa det konvexa h�ljet.
 *
 * Changes:
 *
 *----------------------------------------------------------------------------*/


#ifndef _algorithms_h_
#define _algorithms_h_

/*------------------------------------------------
 * INCLUDES
 *----------------------------------------------*/

#include "math.h"

/*------------------------------------------------
 * TYPES
 *----------------------------------------------*/

/*
 * Type: algorithmdataT
 *
 * Description:
 *   Inneh�ller data om en algoritms arbete.
 */
typedef struct {
    int numOps;
    int numAllocs;
    int numBytes;
} algorithmdataT;

/*------------------------------------------------
 * FUNCTIONS
 *----------------------------------------------*/

/*--------------------------------------
 * Function: BruteforceHull()
 * Parameters:
 *   ps    Punktupps�ttningen f�r vilken ett h�lje ska genereras.
 *   hull  En pekare till h�ljet.
 *
 * Description:
 *   Genererar att konvext h�lje f�r punktupps�ttningen genom utt�mmande
 *   s�kning. Returnerar information om algoritmens arbete.
 *------------------------------------*/
algorithmdataT BruteforceHull(pointsetT ps, hullT *hull);

/*--------------------------------------
 * Function: Quickhull()
 * Parameters:
 *   pointset  Punktupps�ttningen f�r vilken ett h�lje ska genereras.
 *   hull      En pekare till h�ljet.
 *
 * Description:
 *   Genererar att konvext h�lje f�r punktupps�ttningen med hj�lp av algoritmen
 *   quickhull. Returnerar data om algoritmens arbete.
 *------------------------------------*/
algorithmdataT Quickhull(pointsetT pointset, hullT *hull);

#endif // _algorithms_h_