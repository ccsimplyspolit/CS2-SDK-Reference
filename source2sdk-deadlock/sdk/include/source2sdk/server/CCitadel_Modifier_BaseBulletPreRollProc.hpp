#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BulletID_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x228
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadel_Modifier_BaseBulletPreRollProc : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            source2sdk::client::ShotID_t m_nSuppressProcShotID; // 0x208            
            uint8_t _pad020c[0x4]; // 0x20c
            // m_vecProcdBulletIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BulletID_t> m_vecProcdBulletIDs;
            char m_vecProcdBulletIDs[0x18]; // 0x210            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BaseBulletPreRollProc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProc) == 0x228);
    };
};
