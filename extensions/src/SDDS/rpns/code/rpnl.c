/*************************************************************************\
* Copyright (c) 2002 The University of Chicago, as Operator of Argonne
* National Laboratory.
* Copyright (c) 2002 The Regents of the University of California, as
* Operator of Los Alamos National Laboratory.
* This file is distributed subject to a Software License Agreement found
* in the file LICENSE that is included with this distribution. 
\*************************************************************************/

/*
 $Log: not supported by cvs2svn $
 Revision 1.6  2003/08/28 20:49:12  soliday
 Cleaned up the code.

 Revision 1.5  2002/08/14 16:29:00  soliday
 Added Open License

 Revision 1.4  1999/06/01 14:40:10  soliday
 Removed warnings when compiled under Linux.

 Revision 1.3  1998/08/11 18:27:58  borland
 New version per R. Soliday with true pcoding of UDFs for 4-8 x faster
 evaluation.

 * Revision 1.2  1995/09/05  21:22:43  saunders
 * First test release of the SDDS1.5 package.
 *
*/
#include "mdb.h"
#include "rpn_internal.h"

int main(argc, argv)
int argc;
char **argv;
{
    double rpn(), result=0;
    char *format, *defns;
#if defined(LINUX)
    struct stat sts;
#endif
    
    defns=getenv("RPN_DEFNS");
    if(!defns) {
#if defined(LINUX)
	if (!(stat(rpn_default, &sts) == -1 && errno == ENOENT)) { /* check whether default file exists */
	    defns = rpn_default;
	}
#endif
    }
    
    rpn(defns);

    /* add default RPM_DEFNS setting, G. Shen Dec 31, 2009 */
    /* rpn(defns=getenv("RPN_DEFNS")); */
    if (!(format=getenv("RPNL_FORMAT")))
        cp_str(&format, "%.15lg");

    while (--argc>0) {
        interpret_escapes(*++argv);
        result = rpn(*argv);
        }
    if (stackptr>0) {
        printf(format, result);
        putchar('\n');
        }
    if (rpn_check_error())
        return(1);
    else
        return(0);
    }

