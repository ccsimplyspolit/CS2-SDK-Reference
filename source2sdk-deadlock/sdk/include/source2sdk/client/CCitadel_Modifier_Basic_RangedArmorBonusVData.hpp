#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x770
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Basic_RangedArmorBonusVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            float m_flBulletResistancePctMin; // 0x750            
            float m_flBulletResistancePctMax; // 0x754            
            float m_flTechResistancePctMin; // 0x758            
            float m_flTechResistancePctMax; // 0x75c            
            float m_flRangeMin; // 0x760            
            float m_flRangeMax; // 0x764            
            float m_flInvulnRange; // 0x768            
            bool m_bPlayersOnly; // 0x76c            
            uint8_t _pad076d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Basic_RangedArmorBonusVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Basic_RangedArmorBonusVData) == 0x770);
    };
};
