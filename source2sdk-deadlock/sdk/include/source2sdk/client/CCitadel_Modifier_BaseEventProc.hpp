#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ShotID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f8
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadel_Modifier_BaseEventProc : public source2sdk::client::CCitadelModifier
        {
        public:
            // m_vecProcdUnitsThisShot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_BaseEntity*> m_vecProcdUnitsThisShot;
            char m_vecProcdUnitsThisShot[0x18]; // 0xc0            
            // m_vecTrackedUnitsThisFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_BaseEntity*> m_vecTrackedUnitsThisFrame;
            char m_vecTrackedUnitsThisFrame[0x18]; // 0xd8            
            source2sdk::client::ShotID_t m_nLastShotId; // 0xf0            
            uint8_t _pad00f4[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BaseEventProc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_BaseEventProc) == 0x1f8);
    };
};
