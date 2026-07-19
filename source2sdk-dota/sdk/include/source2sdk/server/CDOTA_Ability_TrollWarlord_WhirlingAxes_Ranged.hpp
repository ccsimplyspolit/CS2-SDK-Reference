#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public source2sdk::server::CDOTABaseAbility
        {
        public:
            VectorWS m_vStartPos; // 0x580            
            std::int32_t m_iArrowProjectile; // 0x58c            
            float axe_width; // 0x590            
            float axe_speed; // 0x594            
            float axe_range; // 0x598            
            float axe_spread; // 0x59c            
            std::int32_t axe_count; // 0x5a0            
            uint8_t _pad05a4[0x4]; // 0x5a4
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x18]; // 0x5a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged) == 0x5c0);
    };
};
