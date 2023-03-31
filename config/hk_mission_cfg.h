/************************************************************************
 * NASA Docket No. GSC-18,447-1, and identified as “CFS CFDP (CF)
 * Application version 3.0.0”
 *
 * Copyright (c) 2019 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *  The CFS Housekeeping (HK) Application Public Definitions
 *
 * This provides default values for configurable items that affect
 * the interface(s) of this module.  This includes the CMD/TLM message
 * interface, tables definitions, and/or the public API, if applicable.
 *
 * @note This file may be overridden/superceded by mission-provided defintions
 * either by overriding this header or by generating definitions from a command/data
 * dictionary tool.
 */


#ifndef HK_MISSION_CONFIG_H
#define HK_MISSION_CONFIG_H

#ifdef CFE_EDS_ENABLED_BUILD
#include <hk_eds_typedefs.h>
#else
/**
 *  \brief Maximum Number of HK Copy Table Entries
 *
 *  \par Description:
 *       Dictates the number of elements in the hk copy table.
 *
 *  \par Limits
 *       The maximum size of this paramater is 8192
 */
#define HK_COPY_TABLE_ENTRIES 128
#endif

#endif
