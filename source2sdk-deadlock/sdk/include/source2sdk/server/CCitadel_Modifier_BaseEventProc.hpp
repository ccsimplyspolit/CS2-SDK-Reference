#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x208
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadel_Modifier_BaseEventProc : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_vecProcdUnitsThisShot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseEntity*> m_vecProcdUnitsThisShot;
            char m_vecProcdUnitsThisShot[0x18]; // 0xd0            
            // m_vecTrackedUnitsThisFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseEntity*> m_vecTrackedUnitsThisFrame;
            char m_vecTrackedUnitsThisFrame[0x18]; // 0xe8            
            source2sdk::client::ShotID_t m_nLastShotId; // 0x100            
            uint8_t _pad0104[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BaseEventProc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BaseEventProc) == 0x208);
    };
};
