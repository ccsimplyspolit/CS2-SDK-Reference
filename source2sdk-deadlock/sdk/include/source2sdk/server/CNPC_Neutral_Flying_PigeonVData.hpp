#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Size: 0x3f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Neutral_Flying_PigeonVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            source2sdk::tier2::CRangeFloat m_flFrequencyY; // 0x28            
            source2sdk::tier2::CRangeFloat m_flVerticalScale; // 0x30            
            source2sdk::tier2::CRangeFloat m_flVerticalOffset; // 0x38            
            source2sdk::tier2::CRangeFloat m_flFrequencyR; // 0x40            
            source2sdk::tier2::CRangeFloat m_flOrbitRadius; // 0x48            
            float m_flCollisionRadius; // 0x50            
            float m_flParticleRadius; // 0x54            
            source2sdk::tier2::CRangeFloat m_flLifeTime; // 0x58            
            float m_flRespawnTime; // 0x60            
            float m_flModelScale; // 0x64            
            // metadata: MPropertyStartGroup "Visuals"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x68            
            // m_SpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpawnParticle;
            char m_SpawnParticle[0xe0]; // 0x148            
            // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
            char m_AmbientParticle[0xe0]; // 0x228            
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x308            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDestroySound; // 0x3e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_Flying_PigeonVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_Flying_PigeonVData) == 0x3f8);
    };
};
