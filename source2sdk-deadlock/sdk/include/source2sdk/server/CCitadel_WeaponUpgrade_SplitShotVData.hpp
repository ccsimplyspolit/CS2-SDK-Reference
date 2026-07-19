#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"

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
        // Size: 0x18e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_SplitShotVData : public source2sdk::server::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWeaponShootSound; // 0x18b8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffIndicatorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffIndicatorModifier;
            char m_BuffIndicatorModifier[0x10]; // 0x18c8            
            // m_WeaponDamageBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_WeaponDamageBuff;
            char m_WeaponDamageBuff[0x10]; // 0x18d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SplitShotVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_SplitShotVData) == 0x18e8);
    };
};
