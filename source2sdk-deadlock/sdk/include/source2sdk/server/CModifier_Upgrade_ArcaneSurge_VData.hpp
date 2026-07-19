#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Upgrade_ArcaneSurge_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SurgeWindowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SurgeWindowModifier;
            char m_SurgeWindowModifier[0x10]; // 0x750            
            // m_AbilityWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AbilityWatcherModifier;
            char m_AbilityWatcherModifier[0x10]; // 0x760            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMaxSurgeTime; // 0x770            
            uint8_t _pad0774[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Upgrade_ArcaneSurge_VData) == 0x778);
    };
};
