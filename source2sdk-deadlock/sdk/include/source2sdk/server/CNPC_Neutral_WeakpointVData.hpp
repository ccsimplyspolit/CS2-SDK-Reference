#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x218
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Neutral_WeakpointVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flBonusDamageMult; // 0x28            
            float m_flDamageOnDeath; // 0x2c            
            float m_flGoldPercent; // 0x30            
            float m_flMaxHealth; // 0x34            
            float m_flCollisionRadius; // 0x38            
            float m_flParticleRadius; // 0x3c            
            float m_flStunDuration; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
            char m_AmbientParticle[0xe0]; // 0x48            
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x128            
            CSoundEventName m_strDestroySound; // 0x208            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_WeakpointVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_WeakpointVData) == 0x218);
    };
};
