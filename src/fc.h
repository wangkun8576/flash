#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include "mpi.h"
#include <sys/resource.h>
#include <errno.h>
#include <assert.h>

#include "fc_csv.h"
#include "fc_utils.h"
#include "fc_comp.h"
#include "fc_eos.h"
#include "fc_phase.h"
#include "fc_solver.h"
#include "fc_ann.h"
#include "fc_stab.h"
#include "fc_split.h"
#include "fc_sat.h"
#include "fc_envelope.h"
#include "fc_critical.h"
#include "fc_diagram.h"
#include "fc_model.h"
#include "fc_data_gen.h"
#include "fc_ps_simplex.h"

extern EOS_TYPE eos_type;
