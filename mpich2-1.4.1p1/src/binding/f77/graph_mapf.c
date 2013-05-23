/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPH_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GRAPH_MAP = PMPI_GRAPH_MAP
#pragma weak mpi_graph_map__ = PMPI_GRAPH_MAP
#pragma weak mpi_graph_map_ = PMPI_GRAPH_MAP
#pragma weak mpi_graph_map = PMPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GRAPH_MAP = pmpi_graph_map__
#pragma weak mpi_graph_map__ = pmpi_graph_map__
#pragma weak mpi_graph_map_ = pmpi_graph_map__
#pragma weak mpi_graph_map = pmpi_graph_map__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GRAPH_MAP = pmpi_graph_map_
#pragma weak mpi_graph_map__ = pmpi_graph_map_
#pragma weak mpi_graph_map_ = pmpi_graph_map_
#pragma weak mpi_graph_map = pmpi_graph_map_
#else
#pragma weak MPI_GRAPH_MAP = pmpi_graph_map
#pragma weak mpi_graph_map__ = pmpi_graph_map
#pragma weak mpi_graph_map_ = pmpi_graph_map
#pragma weak mpi_graph_map = pmpi_graph_map
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPH_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GRAPH_MAP = PMPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_graph_map__ = pmpi_graph_map__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_graph_map = pmpi_graph_map
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_graph_map_ = pmpi_graph_map_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GRAPH_MAP  MPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_graph_map__  mpi_graph_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_graph_map  mpi_graph_map
#else
#pragma _HP_SECONDARY_DEF pmpi_graph_map_  mpi_graph_map_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GRAPH_MAP as PMPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_graph_map__ as pmpi_graph_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_graph_map as pmpi_graph_map
#else
#pragma _CRI duplicate mpi_graph_map_ as pmpi_graph_map_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPH_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graph_map_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_graph_map__ = MPI_GRAPH_MAP
#pragma weak mpi_graph_map_ = MPI_GRAPH_MAP
#pragma weak mpi_graph_map = MPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GRAPH_MAP = mpi_graph_map__
#pragma weak mpi_graph_map_ = mpi_graph_map__
#pragma weak mpi_graph_map = mpi_graph_map__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GRAPH_MAP = mpi_graph_map_
#pragma weak mpi_graph_map__ = mpi_graph_map_
#pragma weak mpi_graph_map = mpi_graph_map_
#else
#pragma weak MPI_GRAPH_MAP = mpi_graph_map
#pragma weak mpi_graph_map__ = mpi_graph_map
#pragma weak mpi_graph_map_ = mpi_graph_map
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GRAPH_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_graph_map__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_graph_map_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_graph_map( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_graph_map__ = PMPI_GRAPH_MAP
#pragma weak pmpi_graph_map_ = PMPI_GRAPH_MAP
#pragma weak pmpi_graph_map = PMPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GRAPH_MAP = pmpi_graph_map__
#pragma weak pmpi_graph_map_ = pmpi_graph_map__
#pragma weak pmpi_graph_map = pmpi_graph_map__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GRAPH_MAP = pmpi_graph_map_
#pragma weak pmpi_graph_map__ = pmpi_graph_map_
#pragma weak pmpi_graph_map = pmpi_graph_map_
#else
#pragma weak PMPI_GRAPH_MAP = pmpi_graph_map
#pragma weak pmpi_graph_map__ = pmpi_graph_map
#pragma weak pmpi_graph_map_ = pmpi_graph_map
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_graph_map_ PMPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_graph_map_ pmpi_graph_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_graph_map_ pmpi_graph_map
#else
#define mpi_graph_map_ pmpi_graph_map_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Graph_map
#define MPI_Graph_map PMPI_Graph_map 

#else

#ifdef F77_NAME_UPPER
#define mpi_graph_map_ MPI_GRAPH_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_graph_map_ mpi_graph_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_graph_map_ mpi_graph_map
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_graph_map_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
    *ierr = MPI_Graph_map( (MPI_Comm)(*v1), *v2, v3, v4, v5 );
}
