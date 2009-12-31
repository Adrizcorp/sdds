/*CopyrightNotice001

 *****************************************************************
 COPYRIGHT NOTIFICATION
 *****************************************************************

 THE FOLLOWING IS A NOTICE OF COPYRIGHT, AVAILABILITY OF THE CODE,
 AND DISCLAIMER WHICH MUST BE INCLUDED IN THE PROLOGUE OF THE CODE
 AND IN ALL SOURCE LISTINGS OF THE CODE.
 
 (C)  COPYRIGHT 1995 UNIVERSITY OF CHICAGO
 
 Argonne National Laboratory (ANL), with facilities in the States of 
 Illinois and Idaho, is owned by the United States Government, and
 operated by the University of Chicago under provision of a contract
 with the Department of Energy.

 Portions of this material resulted from work developed under a U.S.
 Government contract and are subject to the following license:  For
 a period of five years from June 30, 1995, the Government is
 granted for itself and others acting on its behalf a paid-up,
 nonexclusive, irrevocable worldwide license in this computer
 software to reproduce, prepare derivative works, and perform
 publicly and display publicly.  With the approval of DOE, this
 period may be renewed for two additional five year periods. 
 Following the expiration of this period or periods, the Government
 is granted for itself and others acting on its behalf, a paid-up,
 nonexclusive, irrevocable worldwide license in this computer
 software to reproduce, prepare derivative works, distribute copies
 to the public, perform publicly and display publicly, and to permit
 others to do so.

 *****************************************************************
 DISCLAIMER
 *****************************************************************

 NEITHER THE UNITED STATES GOVERNMENT NOR ANY AGENCY THEREOF, NOR
 THE UNIVERSITY OF CHICAGO, NOR ANY OF THEIR EMPLOYEES OR OFFICERS,
 MAKES ANY WARRANTY, EXPRESS OR IMPLIED, OR ASSUMES ANY LEGAL
 LIABILITY OR RESPONSIBILITY FOR THE ACCURACY, COMPLETENESS, OR
 USEFULNESS OF ANY INFORMATION, APPARATUS, PRODUCT, OR PROCESS
 DISCLOSED, OR REPRESENTS THAT ITS USE WOULD NOT INFRINGE PRIVATELY
 OWNED RIGHTS.  

 *****************************************************************
 LICENSING INQUIRIES MAY BE DIRECTED TO THE INDUSTRIAL TECHNOLOGY
 DEVELOPMENT CENTER AT ARGONNE NATIONAL LABORATORY.

 CopyrightNotice001*/

/* file: SDDS_data.h
 * contents: data arrays use by SDDS routines
 * 
 * Michael Borland, November 1993.
 $Log: SDDS_data.c,v $
 Revision 1.1  1997/03/06 19:27:22  saunders
 *** empty log message ***

 Revision 1.3  1996/03/12 04:00:38  borland
 Reformatted code to 2-space indentation in K&R style.

 * Revision 1.2  1995/09/05  21:10:50  saunders
 * First test release of the SDDS1.5 package.
 *
 */
#include "SDDS.h"
#include "SDDS_internal.h"

char *SDDS_data_mode[SDDS_NUM_DATA_MODES] = {
  "binary", "ascii"
  };

char *SDDS_type_name[SDDS_NUM_TYPES] = {
  "double", "float", "long", "short", "string", "character"
  };
long SDDS_type_size[SDDS_NUM_TYPES] = {
  sizeof(double), sizeof(float), sizeof(long), sizeof(short), sizeof(char *), sizeof(char)
  };

char *SDDS_command[SDDS_NUM_COMMANDS] = {
  "description",
  "column",
  "parameter",
  "associate",
  "data",
  "include",
  "array",
} ;

