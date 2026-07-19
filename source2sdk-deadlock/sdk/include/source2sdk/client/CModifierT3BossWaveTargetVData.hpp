#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierT3BossWaveTargetVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strSilenceTargetSound; // 0x750            
            // metadata: MPropertyGroupName "Modifiers"
            // m_CurseModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CurseModifier;
            char m_CurseModifier[0x10]; // 0x760            
            // metadata: MPropertyGroupName "Gameplay"
            float m_flTossUpStrength; // 0x770            
            float m_flTossHorizontalMax; // 0x774            
            float m_flTossHorizontalMin; // 0x778            
            float m_flDebuffDuration; // 0x77c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierT3BossWaveTargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierT3BossWaveTargetVData) == 0x780);
    };
};
