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
 *  The CFS Housekeeping (HK) Application Private Config Definitions
 *
 * This provides default values for configurable items that are internal
 * to this module and do NOT affect the interface(s) of this module.  Changes
 * to items in this file only affect the local module and will be transparent
 * to external entities that are using the public interface(s).
 *
 * @note This file may be overridden/superceded by mission-provided defintions
 * either by overriding this header or by generating definitions from a command/data
 * dictionary tool.
 */


#ifndef HK_INTERNAL_CFG_H
#define HK_INTERNAL_CFG_H

/**
 * \defgroup cfshkplatformcfg CFS Housekeeping Platform Configuration
 * \{
 */

/**
 *  \brief Application Pipe Depth
 *
 *  \par Description:
 *       Dictates the pipe depth of the hk command pipe.
 *
 *  \par Limits
 *       The minimum size of this parameter is 1
 *       The maximum size dictated by cFE platform configuration
 *       parameter  CFE_SB_MAX_PIPE_DEPTH
 */
#define HK_PIPE_DEPTH 40

/**
 *  \brief Discard Incomplete Combo Packets
 *
 *  \par Description:
 *       Dictates whether combo packets that have not had all data contents
 *       updated since last requested will be discarded (YES = 1) or sent
 *       anyway (NO = 0).
 *
 *  \par Limits
 *       This parameter can be set to 0 or 1 only.
 */
#define HK_DISCARD_INCOMPLETE_COMBO 0

/**
 *  \brief Number of bytes in the HK Memory Pool
 *
 *  \par Description:
 *       The HK memory pool contains the memory needed for the output packets.
 *       The output packets are dynamically allocated from this pool when the
 *       HK copy table is initially processed or loaded with new data.
 *
 *  \par Limits
 *       The Housekeeping app does not place a limit on this parameter, but there is
 *       an overhead cost in the memory pool.  The value must be larger than what is
 *       needed.
 */
#define HK_NUM_BYTES_IN_MEM_POOL (6 * 1024)

/**
 *  \brief Name of the HK Copy Table
 *
 *  \par Description:
 *       This parameter defines the name of the HK Copy Table.
 *
 *  \par Limits
 *       The Housekeeping app does not place a limit on this parameter
 */
#define HK_COPY_TABLE_NAME "CopyTable"

/**
 *  \brief Name of the HK Run-time Table
 *
 *  \par Description:
 *       This parameter defines the name of the HK Run-time Table.
 *
 *  \par Limits
 *       The Housekeeping app does not place a limit on this parameter
 */
#define HK_RUNTIME_TABLE_NAME "RuntimeTable"

/**
 *  \brief HK Copy Table Filename
 *
 *  \par Description:
 *       The value of this constant defines the filename of the HK Copy Table
 *
 *  \par Limits
 *       The length of each string, including the NULL terminator cannot exceed
 *       the #OS_MAX_PATH_LEN value.
 */

#define HK_COPY_TABLE_FILENAME "/cf/hk_cpy_tbl.tbl"

/**
 * \brief Mission specific version number for HK application
 *
 *  \par Description:
 *       An application version number consists of four parts:
 *       major version number, minor version number, revision
 *       number and mission specific revision number. The mission
 *       specific revision number is defined here and the other
 *       parts are defined in "hk_version.h".
 *
 *  \par Limits:
 *       Must be defined as a numeric value that is greater than
 *       or equal to zero.
 */
#define HK_MISSION_REV 0

/**\}*/

#endif
