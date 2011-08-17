/* (c) 2010,2011 SKA SA */
/* Released under the GNU GPLv3 - see COPYING */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "katcp.h"
#include "katcl.h"
#include "katpriv.h"
#include "netc.h"


int startup_services_katcp(struct katcp_dispatch *d)
{
  int rtn;

  rtn = register_name_type_katcp(d, KATCP_TYPE_STRING, KATCP_DEP_BASE, &print_string_type_katcp, &destroy_string_type_katcp, NULL, NULL, &parse_string_type_katcp, NULL);
  
  rtn += register_name_type_katcp(d, KATCP_TYPE_DBASE, KATCP_DEP_BASE, &print_dbase_type_katcp, &destroy_dbase_type_katcp, NULL, NULL, &parse_dbase_type_katcp, &getkey_dbase_type_katcp);
  
  rtn += register_katcp(d, "?get", "get [key] (n) from database (n optional)", &get_dbase_cmd_katcp);
  rtn += register_katcp(d, "?set", "set [key] [value value ...] to database", &set_dbase_cmd_katcp);

  return rtn;
}

