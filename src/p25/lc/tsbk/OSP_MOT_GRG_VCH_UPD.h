/**
* Digital Voice Modem - Host Software
* GPLv2 Open Source. Use is subject to license terms.
* DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
*
* @package DVM / Host Software
*
*/
/*
*   Copyright (C) 2022 by Bryan Biedenkapp N2PLL
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#if !defined(__P25_LC_TSBK__OSP_MOT_GRG_VCH_UPD_H__)
#define  __P25_LC_TSBK__OSP_MOT_GRG_VCH_UPD_H__

#include "Defines.h"
#include "p25/lc/TSBK.h"

namespace p25
{
    namespace lc
    {
        namespace tsbk
        {
            // ---------------------------------------------------------------------------
            //  Class Declaration
            //      Implements MOT GRG DEL - Motorola / Group Regroup Delete (Unpatch Supergroup)
            // ---------------------------------------------------------------------------

            class HOST_SW_API OSP_MOT_GRG_VCH_UPD : public TSBK {
            public:
                /// <summary>Initializes a new instance of the OSP_MOT_GRG_VCH_UPD class.</summary>
                OSP_MOT_GRG_VCH_UPD();

                /// <summary>Decode a trunking signalling block.</summary>
                virtual bool decode(const uint8_t* data, bool rawTSBK = false);
                /// <summary>Encode a trunking signalling block.</summary>
                virtual void encode(uint8_t* data, bool rawTSBK = false, bool noTrellis = false);

            public:
                /// <summary>1st patch group ID.</summary>
                __PROPERTY(uint32_t, patchGroup1Id, PatchGroup1Id);
                /// <summary>2nd patch group ID.</summary>
                __PROPERTY(uint32_t, patchGroup2Id, PatchGroup2Id);

                __COPY(OSP_MOT_GRG_VCH_UPD);
            };
        } // namespace tsbk
    } // namespace lc
} // namespace p25

#endif // __P25_LC_TSBK__OSP_MOT_GRG_VCH_UPD_H__
