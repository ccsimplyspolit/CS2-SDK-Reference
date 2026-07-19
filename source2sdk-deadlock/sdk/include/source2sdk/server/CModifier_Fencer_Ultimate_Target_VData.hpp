#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x868
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Fencer_Ultimate_Target_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            float m_flDamageTimeOffset; // 0x750            
            float m_flEndTimeScaleForFlinch; // 0x754            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
            char m_DashImpactEffect[0xe0]; // 0x758            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDashHitEnemy; // 0x838            
            CSoundEventName m_strTimerSound; // 0x848            
            CSoundEventName m_sSlashSound; // 0x858            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Fencer_Ultimate_Target_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Fencer_Ultimate_Target_VData) == 0x868);
    };
};
