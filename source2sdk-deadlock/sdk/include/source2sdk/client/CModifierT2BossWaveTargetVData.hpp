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
        // Size: 0x7b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierT2BossWaveTargetVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strSilenceTargetSound; // 0x750            
            // metadata: MPropertyGroupName "Modifiers"
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x760            
            // m_DisarmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DisarmModifier;
            char m_DisarmModifier[0x10]; // 0x770            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x780            
            // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BulletResistModifier;
            char m_BulletResistModifier[0x10]; // 0x790            
            // metadata: MPropertyGroupName "Gameplay"
            float m_flTossUpStrength; // 0x7a0            
            float m_flTossHorizontalMax; // 0x7a4            
            float m_flTossHorizontalMin; // 0x7a8            
            float m_flDebuffDuration; // 0x7ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierT2BossWaveTargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierT2BossWaveTargetVData) == 0x7b0);
    };
};
