#ifndef _cruncher_h_
#define _cruncher_h_

#include <strings.h>
#include <stdlib.h>

#include "bb.h"
#include "file.h"

boolean crunch(File *aSource, File *aTarget, uint startAdress, uint decrFlag, boolean isRelocated);

#endif // _cruncher_h_
